#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>

#include <foo-yc20.h>
#include <yc20-precalc.h>

static float bufferEnergy(const std::vector<float>& channel)
{
    float acc = 0.0f;
    for (size_t i = 0; i < channel.size(); ++i) {
        acc += std::fabs(channel[i]);
    }
    return acc;
}

static float renderEnergy(YC20Processor& yc20, int nframes)
{
    std::vector<float> left(nframes, 0.0f);
    std::vector<float> right(nframes, 0.0f);
    float* outputs[2] = { left.data(), right.data() };
    yc20.getDSP()->compute(nframes, NULL, outputs);
    return bufferEnergy(left) + bufferEnergy(right);
}

int main()
{
    const float sample_rate = 48000.0f;

    dsp* engine = createDSP();
    engine->init(sample_rate);

    YC20Processor yc20;
    yc20.setDSP(engine);
    getUserData(engine)->osc = yc20_precalc_oscillators(sample_rate);

    // Ensure a clearly audible baseline regardless of Faust-generated defaults.
    *yc20.getControl("volume")->getZone() = 1.0f;
    *yc20.getControl("16' i")->getZone() = 1.0f;
    *yc20.getControl("8' i")->getZone() = 1.0f;
    *yc20.getControl("4' i")->getZone() = 1.0f;

    const int key_index = 24; // MIDI 60 (middle C) maps to 24 in plugin code.

    yc20.setKey(key_index, 1.0f);
    float note_on_energy = renderEnergy(yc20, 1024);
    if (note_on_energy <= 1e-6f) {
        std::cerr << "FAIL: expected audio energy for note on, got " << note_on_energy << std::endl;
        yc20_destroy_oscillators(getUserData(engine)->osc);
        return EXIT_FAILURE;
    }

    yc20.setKey(key_index, 0.0f);
    float note_off_energy = renderEnergy(yc20, 4096);
    if (note_off_energy >= note_on_energy * 0.5f) {
        std::cerr << "FAIL: note off did not reduce energy enough (on=" << note_on_energy
                  << ", off=" << note_off_energy << ")" << std::endl;
        yc20_destroy_oscillators(getUserData(engine)->osc);
        return EXIT_FAILURE;
    }

    Control* volume = yc20.getControl("volume");
    yc20.setKey(key_index, 1.0f);
    *volume->getZone() = 0.2f;
    float low_volume_energy = renderEnergy(yc20, 1024);
    *volume->getZone() = 1.0f;
    float high_volume_energy = renderEnergy(yc20, 1024);
    if (high_volume_energy <= low_volume_energy * 1.5f) {
        std::cerr << "FAIL: volume control did not increase output enough (low=" << low_volume_energy
                  << ", high=" << high_volume_energy << ")" << std::endl;
        yc20_destroy_oscillators(getUserData(engine)->osc);
        return EXIT_FAILURE;
    }

    yc20_destroy_oscillators(getUserData(engine)->osc);
    std::cout << "headless-dsp-test: PASS" << std::endl;
    return EXIT_SUCCESS;
}
