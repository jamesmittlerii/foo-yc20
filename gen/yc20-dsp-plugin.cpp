/* ------------------------------------------------------------
name: "plugin"
Code generated with Faust 2.85.5 (https://faust.grame.fr)
Compilation options: -lang cpp -fpga-mem-th 4 -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

/* link with : "" */
#include "yc20-precalc.h"
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static float mydsp_faustpower3_f(float value) {
	return value * value * value;
}

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	float fRec0[2];
	FAUSTFLOAT fVslider0;
	float fRec1[2];
	FAUSTFLOAT fButton0;
	float fVec0[4];
	FAUSTFLOAT fHslider1;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec7[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fConst2;
	float fRec6[2];
	int iRec5[2];
	float fVec1[2];
	int iRec8[2];
	float fVec2[2];
	int iRec9[2];
	float fVec3[2];
	int iRec10[2];
	float fVec4[2];
	float fConst3;
	float fRec4[2];
	float fConst4;
	float fConst5;
	float fRec3[2];
	FAUSTFLOAT fButton1;
	float fVec5[4];
	float fConst6;
	float fRec14[2];
	int iRec13[2];
	float fVec6[2];
	int iRec15[2];
	float fVec7[2];
	int iRec16[2];
	float fVec8[2];
	int iRec17[2];
	float fVec9[2];
	float fConst7;
	float fRec12[2];
	float fRec11[2];
	FAUSTFLOAT fButton2;
	float fVec10[4];
	float fConst8;
	float fRec21[2];
	int iRec20[2];
	float fVec11[2];
	int iRec22[2];
	float fVec12[2];
	int iRec23[2];
	float fVec13[2];
	int iRec24[2];
	float fVec14[2];
	float fRec19[2];
	float fRec18[2];
	FAUSTFLOAT fButton3;
	float fVec15[4];
	float fConst9;
	float fRec28[2];
	int iRec27[2];
	float fVec16[2];
	int iRec29[2];
	float fVec17[2];
	int iRec30[2];
	float fVec18[2];
	int iRec31[2];
	float fVec19[2];
	float fRec26[2];
	float fRec25[2];
	FAUSTFLOAT fButton4;
	float fVec20[4];
	float fConst10;
	float fRec35[2];
	int iRec34[2];
	float fVec21[2];
	int iRec36[2];
	float fVec22[2];
	int iRec37[2];
	float fVec23[2];
	int iRec38[2];
	float fVec24[2];
	float fRec33[2];
	float fRec32[2];
	FAUSTFLOAT fButton5;
	float fVec25[4];
	float fConst11;
	float fRec42[2];
	int iRec41[2];
	float fVec26[2];
	int iRec43[2];
	float fVec27[2];
	int iRec44[2];
	float fVec28[2];
	int iRec45[2];
	float fVec29[2];
	int iRec46[2];
	float fVec30[2];
	float fConst12;
	float fRec40[2];
	float fConst13;
	float fRec39[2];
	FAUSTFLOAT fButton6;
	float fVec31[4];
	float fConst14;
	float fRec50[2];
	int iRec49[2];
	float fVec32[2];
	int iRec51[2];
	float fVec33[2];
	int iRec52[2];
	float fVec34[2];
	int iRec53[2];
	float fVec35[2];
	int iRec54[2];
	float fVec36[2];
	float fRec48[2];
	float fRec47[2];
	FAUSTFLOAT fButton7;
	float fVec37[4];
	float fConst15;
	float fRec58[2];
	int iRec57[2];
	float fVec38[2];
	int iRec59[2];
	float fVec39[2];
	int iRec60[2];
	float fVec40[2];
	int iRec61[2];
	float fVec41[2];
	int iRec62[2];
	float fVec42[2];
	float fRec56[2];
	float fRec55[2];
	FAUSTFLOAT fButton8;
	float fVec43[4];
	float fConst16;
	float fRec66[2];
	int iRec65[2];
	float fVec44[2];
	int iRec67[2];
	float fVec45[2];
	int iRec68[2];
	float fVec46[2];
	int iRec69[2];
	float fVec47[2];
	int iRec70[2];
	float fVec48[2];
	float fRec64[2];
	float fRec63[2];
	FAUSTFLOAT fButton9;
	float fVec49[4];
	float fConst17;
	float fRec74[2];
	int iRec73[2];
	float fVec50[2];
	int iRec75[2];
	float fVec51[2];
	int iRec76[2];
	float fVec52[2];
	int iRec77[2];
	float fVec53[2];
	int iRec78[2];
	float fVec54[2];
	float fConst18;
	float fRec72[2];
	float fRec71[2];
	FAUSTFLOAT fButton10;
	float fVec55[4];
	float fConst19;
	float fRec82[2];
	int iRec81[2];
	float fVec56[2];
	int iRec83[2];
	float fVec57[2];
	int iRec84[2];
	float fVec58[2];
	int iRec85[2];
	float fVec59[2];
	int iRec86[2];
	float fVec60[2];
	float fRec80[2];
	float fRec79[2];
	FAUSTFLOAT fButton11;
	float fVec61[4];
	float fConst20;
	float fRec90[2];
	int iRec89[2];
	float fVec62[2];
	int iRec91[2];
	float fVec63[2];
	int iRec92[2];
	float fVec64[2];
	int iRec93[2];
	float fVec65[2];
	int iRec94[2];
	float fVec66[2];
	float fRec88[2];
	float fRec87[2];
	FAUSTFLOAT fButton12;
	float fVec67[4];
	int iRec97[2];
	float fVec68[2];
	float fRec96[2];
	float fRec95[2];
	FAUSTFLOAT fButton13;
	float fVec69[4];
	int iRec100[2];
	float fVec70[2];
	float fConst21;
	float fRec99[2];
	float fRec98[2];
	FAUSTFLOAT fButton14;
	float fVec71[4];
	int iRec103[2];
	float fVec72[2];
	float fRec102[2];
	float fRec101[2];
	FAUSTFLOAT fButton15;
	float fVec73[4];
	int iRec106[2];
	float fVec74[2];
	float fRec105[2];
	float fRec104[2];
	FAUSTFLOAT fButton16;
	float fVec75[4];
	int iRec109[2];
	float fVec76[2];
	float fRec108[2];
	float fRec107[2];
	int iRec112[2];
	float fVec77[2];
	float fRec111[2];
	float fConst22;
	float fRec110[2];
	int iRec115[2];
	float fVec78[2];
	float fRec114[2];
	float fRec113[2];
	int iRec118[2];
	float fVec79[2];
	float fRec117[2];
	float fRec116[2];
	int iRec121[2];
	float fVec80[2];
	float fRec120[2];
	float fRec119[2];
	int iRec124[2];
	float fVec81[2];
	float fConst23;
	float fRec123[2];
	float fRec122[2];
	int iRec127[2];
	float fVec82[2];
	float fRec126[2];
	float fRec125[2];
	int iRec130[2];
	float fVec83[2];
	float fRec129[2];
	float fRec128[2];
	int iRec133[2];
	float fVec84[2];
	float fRec132[2];
	float fRec131[2];
	int iRec136[2];
	float fVec85[2];
	float fConst24;
	float fRec135[2];
	float fRec134[2];
	int iRec139[2];
	float fVec86[2];
	float fRec138[2];
	float fRec137[2];
	int iRec142[2];
	float fVec87[2];
	float fRec141[2];
	float fRec140[2];
	int iRec145[2];
	float fVec88[2];
	float fRec144[2];
	float fRec143[2];
	int iRec148[2];
	float fRec147[2];
	float fConst25;
	float fRec146[2];
	int iRec151[2];
	float fRec150[2];
	float fRec149[2];
	int iRec154[2];
	float fRec153[2];
	float fRec152[2];
	int iRec157[2];
	float fRec156[2];
	float fRec155[2];
	int iRec160[2];
	float fConst26;
	float fRec159[2];
	float fRec158[2];
	int iRec163[2];
	float fRec162[2];
	float fRec161[2];
	int iRec166[2];
	float fRec165[2];
	float fRec164[2];
	int iRec169[2];
	float fRec168[2];
	float fRec167[2];
	int iRec172[2];
	float fRec171[2];
	float fRec170[2];
	int iRec175[2];
	float fRec174[2];
	float fRec173[2];
	int iRec178[2];
	float fRec177[2];
	float fRec176[2];
	int iRec181[2];
	float fRec180[2];
	float fRec179[2];
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fHslider5;
	float fConst27;
	float fRec2[2];
	int iConst28;
	int iRec187[2];
	FAUSTFLOAT fButton17;
	float fVec89[4];
	float fVec90[2];
	float fConst29;
	float fRec188[2];
	FAUSTFLOAT fButton18;
	float fVec91[4];
	float fVec92[2];
	float fRec189[2];
	FAUSTFLOAT fButton19;
	float fVec93[4];
	float fVec94[2];
	float fRec190[2];
	FAUSTFLOAT fButton20;
	float fVec95[4];
	float fVec96[2];
	float fRec191[2];
	FAUSTFLOAT fButton21;
	float fVec97[4];
	float fVec98[2];
	float fRec192[2];
	FAUSTFLOAT fButton22;
	float fVec99[4];
	float fVec100[2];
	float fRec193[2];
	FAUSTFLOAT fButton23;
	float fVec101[4];
	float fVec102[2];
	float fRec194[2];
	FAUSTFLOAT fButton24;
	float fVec103[4];
	float fVec104[2];
	float fRec195[2];
	FAUSTFLOAT fButton25;
	float fVec105[4];
	float fVec106[2];
	float fRec196[2];
	FAUSTFLOAT fButton26;
	float fVec107[4];
	float fVec108[2];
	float fRec197[2];
	FAUSTFLOAT fButton27;
	float fVec109[4];
	float fVec110[2];
	float fRec198[2];
	FAUSTFLOAT fButton28;
	float fVec111[4];
	float fVec112[2];
	float fRec199[2];
	FAUSTFLOAT fButton29;
	float fVec113[4];
	FAUSTFLOAT fButton30;
	float fVec114[4];
	FAUSTFLOAT fButton31;
	float fVec115[4];
	FAUSTFLOAT fButton32;
	float fVec116[4];
	FAUSTFLOAT fButton33;
	float fVec117[4];
	FAUSTFLOAT fButton34;
	float fVec118[4];
	FAUSTFLOAT fButton35;
	float fVec119[4];
	FAUSTFLOAT fButton36;
	float fVec120[4];
	FAUSTFLOAT fButton37;
	float fVec121[4];
	FAUSTFLOAT fButton38;
	float fVec122[4];
	FAUSTFLOAT fButton39;
	float fVec123[4];
	FAUSTFLOAT fButton40;
	float fVec124[4];
	FAUSTFLOAT fButton41;
	float fVec125[4];
	FAUSTFLOAT fButton42;
	float fVec126[4];
	float fConst30;
	float fRec201[2];
	float fRec200[2];
	FAUSTFLOAT fButton43;
	float fVec127[4];
	float fRec203[2];
	float fRec202[2];
	FAUSTFLOAT fButton44;
	float fVec128[4];
	float fRec205[2];
	float fRec204[2];
	FAUSTFLOAT fButton45;
	float fVec129[4];
	float fRec207[2];
	float fRec206[2];
	FAUSTFLOAT fButton46;
	float fVec130[4];
	float fConst31;
	float fRec209[2];
	float fRec208[2];
	FAUSTFLOAT fButton47;
	float fVec131[4];
	float fRec211[2];
	float fRec210[2];
	FAUSTFLOAT fButton48;
	float fVec132[4];
	float fRec213[2];
	float fRec212[2];
	FAUSTFLOAT fButton49;
	float fVec133[4];
	float fRec215[2];
	float fRec214[2];
	FAUSTFLOAT fButton50;
	float fVec134[4];
	float fConst32;
	float fRec217[2];
	float fRec216[2];
	FAUSTFLOAT fButton51;
	float fVec135[4];
	float fRec219[2];
	float fRec218[2];
	FAUSTFLOAT fButton52;
	float fVec136[4];
	float fRec221[2];
	float fRec220[2];
	FAUSTFLOAT fButton53;
	float fVec137[4];
	float fRec223[2];
	float fRec222[2];
	FAUSTFLOAT fButton54;
	float fVec138[4];
	float fConst33;
	float fRec225[2];
	float fRec224[2];
	FAUSTFLOAT fButton55;
	float fVec139[4];
	float fRec227[2];
	float fRec226[2];
	FAUSTFLOAT fButton56;
	float fVec140[4];
	float fRec229[2];
	float fRec228[2];
	FAUSTFLOAT fButton57;
	float fVec141[4];
	float fRec231[2];
	float fRec230[2];
	FAUSTFLOAT fButton58;
	float fVec142[4];
	float fConst34;
	float fRec233[2];
	float fRec232[2];
	FAUSTFLOAT fButton59;
	float fVec143[4];
	float fRec235[2];
	float fRec234[2];
	FAUSTFLOAT fButton60;
	float fVec144[4];
	float fRec237[2];
	float fRec236[2];
	float fRec239[2];
	float fRec238[2];
	float fConst35;
	float fRec241[2];
	float fRec240[2];
	float fRec243[2];
	float fRec242[2];
	float fRec245[2];
	float fRec244[2];
	float fRec247[2];
	float fRec246[2];
	float fConst36;
	float fRec249[2];
	float fRec248[2];
	float fRec251[2];
	float fRec250[2];
	float fRec253[2];
	float fRec252[2];
	float fRec255[2];
	float fRec254[2];
	float fConst37;
	float fRec257[2];
	float fRec256[2];
	float fRec259[2];
	float fRec258[2];
	float fRec261[2];
	float fRec260[2];
	float fRec263[2];
	float fRec262[2];
	float fConst38;
	float fRec265[2];
	float fRec264[2];
	float fRec267[2];
	float fRec266[2];
	float fRec269[2];
	float fRec268[2];
	float fRec271[2];
	float fRec270[2];
	float fVec145[2];
	float fConst39;
	float fRec272[2];
	float fRec184[2];
	int iRec185[2];
	float fRec186[2];
	float fConst40;
	float fVec146[2];
	float fRec183[2];
	float fConst41;
	float fConst42;
	float fRec182[2];
	float fConst43;
	float fVec147[5];
	float fConst44;
	float fRec275[2];
	float fRec274[2];
	float fRec277[2];
	float fRec276[2];
	float fRec279[2];
	float fRec278[2];
	float fRec281[2];
	float fRec280[2];
	float fRec283[2];
	float fRec282[2];
	float fRec285[2];
	float fRec284[2];
	float fRec287[2];
	float fRec286[2];
	float fVec148[2];
	float fRec273[2];
	float fVec149[2];
	float fRec288[2];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fVslider3;
	float fVec150[2];
	float fRec290[2];
	float fRec289[2];
	float fVec151[2];
	float fRec293[2];
	FAUSTFLOAT fVslider4;
	float fVec152[2];
	float fRec292[2];
	float fRec291[2];
	float fVec153[2];
	float fRec296[2];
	FAUSTFLOAT fVslider5;
	float fVec154[2];
	float fRec295[2];
	float fRec294[2];
	float fVec155[2];
	float fRec299[2];
	FAUSTFLOAT fVslider6;
	float fVec156[2];
	float fRec298[2];
	float fRec297[2];
	FAUSTFLOAT fVslider7;
	float fConst45;
	float fRec301[2];
	float fVec157[2];
	float fConst46;
	float fRec300[2];
	float fConst47;
	float fRec303[2];
	float fVec158[2];
	float fConst48;
	float fRec302[2];
	float fConst49;
	float fRec305[2];
	float fVec159[2];
	float fConst50;
	float fRec304[2];
	float fConst51;
	float fRec307[2];
	float fVec160[2];
	float fConst52;
	float fRec306[2];
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	FAUSTFLOAT fVslider12;
	float fVec161[2];
	float fRec308[2];
	FAUSTFLOAT fVslider13;
	FAUSTFLOAT fVslider14;
	
 public:
	mydsp() {
	}
	
	mydsp(const mydsp&) = default;
	
	virtual ~mydsp() = default;
	
	mydsp& operator=(const mydsp&) = default;
	
	void metadata(Meta* m) { 
		m->declare("compile_options", "-lang cpp -fpga-mem-th 4 -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("filename", "plugin.dsp");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("math.lib/license", "LGPL with exception");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/version", "1.0");
		m->declare("music.lib/author", "GRAME");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/version", "1.0");
		m->declare("name", "plugin");
		m->declare("yc20.dsp/author", "Sampo Savolainen");
		m->declare("yc20.dsp/copyright", "(c)Sampo Savolainen 2009");
		m->declare("yc20.dsp/license", "GPLv3");
		m->declare("yc20.dsp/name", "Foo YC-20 simulation");
	}

	virtual int getNumInputs() {
		return 0;
	}
	virtual int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	virtual void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, static_cast<float>(fSampleRate)));
		fConst1 = 1.0f / fConst0;
		fConst2 = 5274.041f / fConst0;
		fConst3 = 2564.1025f / fConst0;
		fConst4 = fConst1 + 0.0073745456f;
		fConst5 = 0.0073745456f / fConst4;
		fConst6 = 4978.0317f / fConst0;
		fConst7 = 2127.6597f / fConst0;
		fConst8 = 4698.636f / fConst0;
		fConst9 = 4434.922f / fConst0;
		fConst10 = 4186.0093f / fConst0;
		fConst11 = 7902.133f / fConst0;
		fConst12 = 1785.7142f / fConst0;
		fConst13 = 0.0035964532f / (fConst1 + 0.0035964532f);
		fConst14 = 7458.62f / fConst0;
		fConst15 = 7.04e+03f / fConst0;
		fConst16 = 6644.875f / fConst0;
		fConst17 = 6271.927f / fConst0;
		fConst18 = 1470.5883f / fConst0;
		fConst19 = 5919.9106f / fConst0;
		fConst20 = 5587.652f / fConst0;
		fConst21 = 1219.5122f / fConst0;
		fConst22 = 0.002230664f / (fConst1 + 0.002230664f);
		fConst23 = 1e+03f / fConst0;
		fConst24 = 833.3333f / fConst0;
		fConst25 = 0.0016849851f / (fConst1 + 0.0016849851f);
		fConst26 = 666.6667f / fConst0;
		fConst27 = 3968.254f / fConst0;
		iConst28 = static_cast<int>(0.001f * std::max<float>(2.205e+04f, std::min<float>(1.92e+05f, fConst0)));
		fConst29 = 1.0f / fConst4;
		fConst30 = 37037.035f / fConst0;
		fConst31 = 25641.025f / fConst0;
		fConst32 = 21276.596f / fConst0;
		fConst33 = 17857.143f / fConst0;
		fConst34 = 12195.122f / fConst0;
		fConst35 = 1e+04f / fConst0;
		fConst36 = 8333.333f / fConst0;
		fConst37 = 5555.5557f / fConst0;
		fConst38 = 4545.4546f / fConst0;
		fConst39 = 0.0001f / (fConst1 + 0.0001f);
		fConst40 = 1.0f / static_cast<float>(iConst28);
		fConst41 = 36.24376f / fConst0;
		fConst42 = 1.0f - fConst41;
		fConst43 = 0.027590958f * fConst0;
		fConst44 = 3703.7036f / fConst0;
		fConst45 = 0.000858f / (fConst1 + 0.000858f);
		fConst46 = 0.000429f / (fConst1 + 0.000429f);
		fConst47 = 0.00039f / (fConst1 + 0.00039f);
		fConst48 = 0.000195f / (fConst1 + 0.000195f);
		fConst49 = 0.0001833f / (fConst1 + 0.0001833f);
		fConst50 = 9.165e-05f / (fConst1 + 9.165e-05f);
		fConst51 = 0.0001053f / (fConst1 + 0.0001053f);
		fConst52 = 5.265e-05f / (fConst1 + 5.265e-05f);
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = static_cast<FAUSTFLOAT>(0.5f);
		fVslider0 = static_cast<FAUSTFLOAT>(1.0f);
		fButton0 = static_cast<FAUSTFLOAT>(0.0f);
		fHslider1 = static_cast<FAUSTFLOAT>(0.0f);
		fHslider2 = static_cast<FAUSTFLOAT>(0.0f);
		fHslider3 = static_cast<FAUSTFLOAT>(0.0f);
		fHslider4 = static_cast<FAUSTFLOAT>(0.0f);
		fButton1 = static_cast<FAUSTFLOAT>(0.0f);
		fButton2 = static_cast<FAUSTFLOAT>(0.0f);
		fButton3 = static_cast<FAUSTFLOAT>(0.0f);
		fButton4 = static_cast<FAUSTFLOAT>(0.0f);
		fButton5 = static_cast<FAUSTFLOAT>(0.0f);
		fButton6 = static_cast<FAUSTFLOAT>(0.0f);
		fButton7 = static_cast<FAUSTFLOAT>(0.0f);
		fButton8 = static_cast<FAUSTFLOAT>(0.0f);
		fButton9 = static_cast<FAUSTFLOAT>(0.0f);
		fButton10 = static_cast<FAUSTFLOAT>(0.0f);
		fButton11 = static_cast<FAUSTFLOAT>(0.0f);
		fButton12 = static_cast<FAUSTFLOAT>(0.0f);
		fButton13 = static_cast<FAUSTFLOAT>(0.0f);
		fButton14 = static_cast<FAUSTFLOAT>(0.0f);
		fButton15 = static_cast<FAUSTFLOAT>(0.0f);
		fButton16 = static_cast<FAUSTFLOAT>(0.0f);
		fVslider1 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider2 = static_cast<FAUSTFLOAT>(1.0f);
		fHslider5 = static_cast<FAUSTFLOAT>(0.0f);
		fButton17 = static_cast<FAUSTFLOAT>(0.0f);
		fButton18 = static_cast<FAUSTFLOAT>(0.0f);
		fButton19 = static_cast<FAUSTFLOAT>(0.0f);
		fButton20 = static_cast<FAUSTFLOAT>(0.0f);
		fButton21 = static_cast<FAUSTFLOAT>(0.0f);
		fButton22 = static_cast<FAUSTFLOAT>(0.0f);
		fButton23 = static_cast<FAUSTFLOAT>(0.0f);
		fButton24 = static_cast<FAUSTFLOAT>(0.0f);
		fButton25 = static_cast<FAUSTFLOAT>(0.0f);
		fButton26 = static_cast<FAUSTFLOAT>(0.0f);
		fButton27 = static_cast<FAUSTFLOAT>(0.0f);
		fButton28 = static_cast<FAUSTFLOAT>(0.0f);
		fButton29 = static_cast<FAUSTFLOAT>(0.0f);
		fButton30 = static_cast<FAUSTFLOAT>(0.0f);
		fButton31 = static_cast<FAUSTFLOAT>(0.0f);
		fButton32 = static_cast<FAUSTFLOAT>(0.0f);
		fButton33 = static_cast<FAUSTFLOAT>(0.0f);
		fButton34 = static_cast<FAUSTFLOAT>(0.0f);
		fButton35 = static_cast<FAUSTFLOAT>(0.0f);
		fButton36 = static_cast<FAUSTFLOAT>(0.0f);
		fButton37 = static_cast<FAUSTFLOAT>(0.0f);
		fButton38 = static_cast<FAUSTFLOAT>(0.0f);
		fButton39 = static_cast<FAUSTFLOAT>(0.0f);
		fButton40 = static_cast<FAUSTFLOAT>(0.0f);
		fButton41 = static_cast<FAUSTFLOAT>(0.0f);
		fButton42 = static_cast<FAUSTFLOAT>(0.0f);
		fButton43 = static_cast<FAUSTFLOAT>(0.0f);
		fButton44 = static_cast<FAUSTFLOAT>(0.0f);
		fButton45 = static_cast<FAUSTFLOAT>(0.0f);
		fButton46 = static_cast<FAUSTFLOAT>(0.0f);
		fButton47 = static_cast<FAUSTFLOAT>(0.0f);
		fButton48 = static_cast<FAUSTFLOAT>(0.0f);
		fButton49 = static_cast<FAUSTFLOAT>(0.0f);
		fButton50 = static_cast<FAUSTFLOAT>(0.0f);
		fButton51 = static_cast<FAUSTFLOAT>(0.0f);
		fButton52 = static_cast<FAUSTFLOAT>(0.0f);
		fButton53 = static_cast<FAUSTFLOAT>(0.0f);
		fButton54 = static_cast<FAUSTFLOAT>(0.0f);
		fButton55 = static_cast<FAUSTFLOAT>(0.0f);
		fButton56 = static_cast<FAUSTFLOAT>(0.0f);
		fButton57 = static_cast<FAUSTFLOAT>(0.0f);
		fButton58 = static_cast<FAUSTFLOAT>(0.0f);
		fButton59 = static_cast<FAUSTFLOAT>(0.0f);
		fButton60 = static_cast<FAUSTFLOAT>(0.0f);
		fHslider6 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider3 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider4 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider5 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider6 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider7 = static_cast<FAUSTFLOAT>(0.0f);
		fHslider7 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider8 = static_cast<FAUSTFLOAT>(0.5f);
		fVslider9 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider10 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider11 = static_cast<FAUSTFLOAT>(0.5f);
		fVslider12 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider13 = static_cast<FAUSTFLOAT>(0.0f);
		fVslider14 = static_cast<FAUSTFLOAT>(0.5f);
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec1[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 4; l2 = l2 + 1) {
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec7[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec6[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			iRec5[l5] = 0;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fVec1[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			iRec8[l7] = 0;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec2[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			iRec9[l9] = 0;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			iRec10[l11] = 0;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fVec4[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec4[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec3[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 4; l15 = l15 + 1) {
			fVec5[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec14[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			iRec13[l17] = 0;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fVec6[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			iRec15[l19] = 0;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec7[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			iRec16[l21] = 0;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fVec8[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			iRec17[l23] = 0;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec9[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec12[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec11[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 4; l27 = l27 + 1) {
			fVec10[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec21[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			iRec20[l29] = 0;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fVec11[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			iRec22[l31] = 0;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fVec12[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			iRec23[l33] = 0;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fVec13[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			iRec24[l35] = 0;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fVec14[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec19[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec18[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 4; l39 = l39 + 1) {
			fVec15[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec28[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			iRec27[l41] = 0;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fVec16[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			iRec29[l43] = 0;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec17[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			iRec30[l45] = 0;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec18[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			iRec31[l47] = 0;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fVec19[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec26[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec25[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 4; l51 = l51 + 1) {
			fVec20[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec35[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			iRec34[l53] = 0;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fVec21[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			iRec36[l55] = 0;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fVec22[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			iRec37[l57] = 0;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec23[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			iRec38[l59] = 0;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fVec24[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec33[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec32[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 4; l63 = l63 + 1) {
			fVec25[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec42[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			iRec41[l65] = 0;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec26[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			iRec43[l67] = 0;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fVec27[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			iRec44[l69] = 0;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fVec28[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			iRec45[l71] = 0;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fVec29[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			iRec46[l73] = 0;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fVec30[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec40[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec39[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 4; l77 = l77 + 1) {
			fVec31[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec50[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			iRec49[l79] = 0;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fVec32[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			iRec51[l81] = 0;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec33[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			iRec52[l83] = 0;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec34[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			iRec53[l85] = 0;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec35[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			iRec54[l87] = 0;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec36[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec48[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec47[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 4; l91 = l91 + 1) {
			fVec37[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec58[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			iRec57[l93] = 0;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fVec38[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			iRec59[l95] = 0;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec39[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			iRec60[l97] = 0;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec40[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			iRec61[l99] = 0;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec41[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			iRec62[l101] = 0;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fVec42[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec56[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec55[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 4; l105 = l105 + 1) {
			fVec43[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec66[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			iRec65[l107] = 0;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fVec44[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			iRec67[l109] = 0;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fVec45[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			iRec68[l111] = 0;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fVec46[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			iRec69[l113] = 0;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fVec47[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			iRec70[l115] = 0;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fVec48[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec64[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec63[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 4; l119 = l119 + 1) {
			fVec49[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec74[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			iRec73[l121] = 0;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fVec50[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			iRec75[l123] = 0;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec51[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			iRec76[l125] = 0;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec52[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			iRec77[l127] = 0;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fVec53[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			iRec78[l129] = 0;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fVec54[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec72[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec71[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 4; l133 = l133 + 1) {
			fVec55[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec82[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			iRec81[l135] = 0;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec56[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			iRec83[l137] = 0;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fVec57[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			iRec84[l139] = 0;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec58[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			iRec85[l141] = 0;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fVec59[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			iRec86[l143] = 0;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fVec60[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec80[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec79[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 4; l147 = l147 + 1) {
			fVec61[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec90[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			iRec89[l149] = 0;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fVec62[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			iRec91[l151] = 0;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fVec63[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			iRec92[l153] = 0;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec64[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			iRec93[l155] = 0;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fVec65[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			iRec94[l157] = 0;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fVec66[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec88[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec87[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 4; l161 = l161 + 1) {
			fVec67[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			iRec97[l162] = 0;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fVec68[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec96[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec95[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 4; l166 = l166 + 1) {
			fVec69[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			iRec100[l167] = 0;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fVec70[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec99[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec98[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 4; l171 = l171 + 1) {
			fVec71[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			iRec103[l172] = 0;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fVec72[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec102[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec101[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 4; l176 = l176 + 1) {
			fVec73[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			iRec106[l177] = 0;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fVec74[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec105[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec104[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 4; l181 = l181 + 1) {
			fVec75[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			iRec109[l182] = 0;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fVec76[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec108[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec107[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			iRec112[l186] = 0;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fVec77[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec111[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec110[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			iRec115[l190] = 0;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fVec78[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec114[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec113[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			iRec118[l194] = 0;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fVec79[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec117[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec116[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			iRec121[l198] = 0;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fVec80[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec120[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec119[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			iRec124[l202] = 0;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fVec81[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec123[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec122[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			iRec127[l206] = 0;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fVec82[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec126[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec125[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			iRec130[l210] = 0;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fVec83[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec129[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec128[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			iRec133[l214] = 0;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fVec84[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec132[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec131[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			iRec136[l218] = 0;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fVec85[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec135[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec134[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			iRec139[l222] = 0;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fVec86[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec138[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec137[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			iRec142[l226] = 0;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fVec87[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec141[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec140[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			iRec145[l230] = 0;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fVec88[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec144[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec143[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			iRec148[l234] = 0;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec147[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec146[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			iRec151[l237] = 0;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec150[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec149[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			iRec154[l240] = 0;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec153[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec152[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			iRec157[l243] = 0;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec156[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec155[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			iRec160[l246] = 0;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec159[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec158[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			iRec163[l249] = 0;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec162[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec161[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			iRec166[l252] = 0;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec165[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec164[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			iRec169[l255] = 0;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec168[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec167[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			iRec172[l258] = 0;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec171[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec170[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			iRec175[l261] = 0;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec174[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec173[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			iRec178[l264] = 0;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec177[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec176[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			iRec181[l267] = 0;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec180[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec179[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec2[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			iRec187[l271] = 0;
		}
		for (int l272 = 0; l272 < 4; l272 = l272 + 1) {
			fVec89[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fVec90[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec188[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 4; l275 = l275 + 1) {
			fVec91[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fVec92[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec189[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 4; l278 = l278 + 1) {
			fVec93[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fVec94[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec190[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 4; l281 = l281 + 1) {
			fVec95[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fVec96[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec191[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 4; l284 = l284 + 1) {
			fVec97[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fVec98[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec192[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 4; l287 = l287 + 1) {
			fVec99[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fVec100[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec193[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 4; l290 = l290 + 1) {
			fVec101[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fVec102[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec194[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 4; l293 = l293 + 1) {
			fVec103[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			fVec104[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec195[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 4; l296 = l296 + 1) {
			fVec105[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fVec106[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec196[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 4; l299 = l299 + 1) {
			fVec107[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fVec108[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec197[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 4; l302 = l302 + 1) {
			fVec109[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fVec110[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec198[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 4; l305 = l305 + 1) {
			fVec111[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fVec112[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec199[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 4; l308 = l308 + 1) {
			fVec113[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 4; l309 = l309 + 1) {
			fVec114[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 4; l310 = l310 + 1) {
			fVec115[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 4; l311 = l311 + 1) {
			fVec116[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 4; l312 = l312 + 1) {
			fVec117[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 4; l313 = l313 + 1) {
			fVec118[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 4; l314 = l314 + 1) {
			fVec119[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 4; l315 = l315 + 1) {
			fVec120[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 4; l316 = l316 + 1) {
			fVec121[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 4; l317 = l317 + 1) {
			fVec122[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 4; l318 = l318 + 1) {
			fVec123[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 4; l319 = l319 + 1) {
			fVec124[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 4; l320 = l320 + 1) {
			fVec125[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 4; l321 = l321 + 1) {
			fVec126[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 2; l322 = l322 + 1) {
			fRec201[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 2; l323 = l323 + 1) {
			fRec200[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 4; l324 = l324 + 1) {
			fVec127[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 2; l325 = l325 + 1) {
			fRec203[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 2; l326 = l326 + 1) {
			fRec202[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 4; l327 = l327 + 1) {
			fVec128[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 2; l328 = l328 + 1) {
			fRec205[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 2; l329 = l329 + 1) {
			fRec204[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 4; l330 = l330 + 1) {
			fVec129[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 2; l331 = l331 + 1) {
			fRec207[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 2; l332 = l332 + 1) {
			fRec206[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 4; l333 = l333 + 1) {
			fVec130[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 2; l334 = l334 + 1) {
			fRec209[l334] = 0.0f;
		}
		for (int l335 = 0; l335 < 2; l335 = l335 + 1) {
			fRec208[l335] = 0.0f;
		}
		for (int l336 = 0; l336 < 4; l336 = l336 + 1) {
			fVec131[l336] = 0.0f;
		}
		for (int l337 = 0; l337 < 2; l337 = l337 + 1) {
			fRec211[l337] = 0.0f;
		}
		for (int l338 = 0; l338 < 2; l338 = l338 + 1) {
			fRec210[l338] = 0.0f;
		}
		for (int l339 = 0; l339 < 4; l339 = l339 + 1) {
			fVec132[l339] = 0.0f;
		}
		for (int l340 = 0; l340 < 2; l340 = l340 + 1) {
			fRec213[l340] = 0.0f;
		}
		for (int l341 = 0; l341 < 2; l341 = l341 + 1) {
			fRec212[l341] = 0.0f;
		}
		for (int l342 = 0; l342 < 4; l342 = l342 + 1) {
			fVec133[l342] = 0.0f;
		}
		for (int l343 = 0; l343 < 2; l343 = l343 + 1) {
			fRec215[l343] = 0.0f;
		}
		for (int l344 = 0; l344 < 2; l344 = l344 + 1) {
			fRec214[l344] = 0.0f;
		}
		for (int l345 = 0; l345 < 4; l345 = l345 + 1) {
			fVec134[l345] = 0.0f;
		}
		for (int l346 = 0; l346 < 2; l346 = l346 + 1) {
			fRec217[l346] = 0.0f;
		}
		for (int l347 = 0; l347 < 2; l347 = l347 + 1) {
			fRec216[l347] = 0.0f;
		}
		for (int l348 = 0; l348 < 4; l348 = l348 + 1) {
			fVec135[l348] = 0.0f;
		}
		for (int l349 = 0; l349 < 2; l349 = l349 + 1) {
			fRec219[l349] = 0.0f;
		}
		for (int l350 = 0; l350 < 2; l350 = l350 + 1) {
			fRec218[l350] = 0.0f;
		}
		for (int l351 = 0; l351 < 4; l351 = l351 + 1) {
			fVec136[l351] = 0.0f;
		}
		for (int l352 = 0; l352 < 2; l352 = l352 + 1) {
			fRec221[l352] = 0.0f;
		}
		for (int l353 = 0; l353 < 2; l353 = l353 + 1) {
			fRec220[l353] = 0.0f;
		}
		for (int l354 = 0; l354 < 4; l354 = l354 + 1) {
			fVec137[l354] = 0.0f;
		}
		for (int l355 = 0; l355 < 2; l355 = l355 + 1) {
			fRec223[l355] = 0.0f;
		}
		for (int l356 = 0; l356 < 2; l356 = l356 + 1) {
			fRec222[l356] = 0.0f;
		}
		for (int l357 = 0; l357 < 4; l357 = l357 + 1) {
			fVec138[l357] = 0.0f;
		}
		for (int l358 = 0; l358 < 2; l358 = l358 + 1) {
			fRec225[l358] = 0.0f;
		}
		for (int l359 = 0; l359 < 2; l359 = l359 + 1) {
			fRec224[l359] = 0.0f;
		}
		for (int l360 = 0; l360 < 4; l360 = l360 + 1) {
			fVec139[l360] = 0.0f;
		}
		for (int l361 = 0; l361 < 2; l361 = l361 + 1) {
			fRec227[l361] = 0.0f;
		}
		for (int l362 = 0; l362 < 2; l362 = l362 + 1) {
			fRec226[l362] = 0.0f;
		}
		for (int l363 = 0; l363 < 4; l363 = l363 + 1) {
			fVec140[l363] = 0.0f;
		}
		for (int l364 = 0; l364 < 2; l364 = l364 + 1) {
			fRec229[l364] = 0.0f;
		}
		for (int l365 = 0; l365 < 2; l365 = l365 + 1) {
			fRec228[l365] = 0.0f;
		}
		for (int l366 = 0; l366 < 4; l366 = l366 + 1) {
			fVec141[l366] = 0.0f;
		}
		for (int l367 = 0; l367 < 2; l367 = l367 + 1) {
			fRec231[l367] = 0.0f;
		}
		for (int l368 = 0; l368 < 2; l368 = l368 + 1) {
			fRec230[l368] = 0.0f;
		}
		for (int l369 = 0; l369 < 4; l369 = l369 + 1) {
			fVec142[l369] = 0.0f;
		}
		for (int l370 = 0; l370 < 2; l370 = l370 + 1) {
			fRec233[l370] = 0.0f;
		}
		for (int l371 = 0; l371 < 2; l371 = l371 + 1) {
			fRec232[l371] = 0.0f;
		}
		for (int l372 = 0; l372 < 4; l372 = l372 + 1) {
			fVec143[l372] = 0.0f;
		}
		for (int l373 = 0; l373 < 2; l373 = l373 + 1) {
			fRec235[l373] = 0.0f;
		}
		for (int l374 = 0; l374 < 2; l374 = l374 + 1) {
			fRec234[l374] = 0.0f;
		}
		for (int l375 = 0; l375 < 4; l375 = l375 + 1) {
			fVec144[l375] = 0.0f;
		}
		for (int l376 = 0; l376 < 2; l376 = l376 + 1) {
			fRec237[l376] = 0.0f;
		}
		for (int l377 = 0; l377 < 2; l377 = l377 + 1) {
			fRec236[l377] = 0.0f;
		}
		for (int l378 = 0; l378 < 2; l378 = l378 + 1) {
			fRec239[l378] = 0.0f;
		}
		for (int l379 = 0; l379 < 2; l379 = l379 + 1) {
			fRec238[l379] = 0.0f;
		}
		for (int l380 = 0; l380 < 2; l380 = l380 + 1) {
			fRec241[l380] = 0.0f;
		}
		for (int l381 = 0; l381 < 2; l381 = l381 + 1) {
			fRec240[l381] = 0.0f;
		}
		for (int l382 = 0; l382 < 2; l382 = l382 + 1) {
			fRec243[l382] = 0.0f;
		}
		for (int l383 = 0; l383 < 2; l383 = l383 + 1) {
			fRec242[l383] = 0.0f;
		}
		for (int l384 = 0; l384 < 2; l384 = l384 + 1) {
			fRec245[l384] = 0.0f;
		}
		for (int l385 = 0; l385 < 2; l385 = l385 + 1) {
			fRec244[l385] = 0.0f;
		}
		for (int l386 = 0; l386 < 2; l386 = l386 + 1) {
			fRec247[l386] = 0.0f;
		}
		for (int l387 = 0; l387 < 2; l387 = l387 + 1) {
			fRec246[l387] = 0.0f;
		}
		for (int l388 = 0; l388 < 2; l388 = l388 + 1) {
			fRec249[l388] = 0.0f;
		}
		for (int l389 = 0; l389 < 2; l389 = l389 + 1) {
			fRec248[l389] = 0.0f;
		}
		for (int l390 = 0; l390 < 2; l390 = l390 + 1) {
			fRec251[l390] = 0.0f;
		}
		for (int l391 = 0; l391 < 2; l391 = l391 + 1) {
			fRec250[l391] = 0.0f;
		}
		for (int l392 = 0; l392 < 2; l392 = l392 + 1) {
			fRec253[l392] = 0.0f;
		}
		for (int l393 = 0; l393 < 2; l393 = l393 + 1) {
			fRec252[l393] = 0.0f;
		}
		for (int l394 = 0; l394 < 2; l394 = l394 + 1) {
			fRec255[l394] = 0.0f;
		}
		for (int l395 = 0; l395 < 2; l395 = l395 + 1) {
			fRec254[l395] = 0.0f;
		}
		for (int l396 = 0; l396 < 2; l396 = l396 + 1) {
			fRec257[l396] = 0.0f;
		}
		for (int l397 = 0; l397 < 2; l397 = l397 + 1) {
			fRec256[l397] = 0.0f;
		}
		for (int l398 = 0; l398 < 2; l398 = l398 + 1) {
			fRec259[l398] = 0.0f;
		}
		for (int l399 = 0; l399 < 2; l399 = l399 + 1) {
			fRec258[l399] = 0.0f;
		}
		for (int l400 = 0; l400 < 2; l400 = l400 + 1) {
			fRec261[l400] = 0.0f;
		}
		for (int l401 = 0; l401 < 2; l401 = l401 + 1) {
			fRec260[l401] = 0.0f;
		}
		for (int l402 = 0; l402 < 2; l402 = l402 + 1) {
			fRec263[l402] = 0.0f;
		}
		for (int l403 = 0; l403 < 2; l403 = l403 + 1) {
			fRec262[l403] = 0.0f;
		}
		for (int l404 = 0; l404 < 2; l404 = l404 + 1) {
			fRec265[l404] = 0.0f;
		}
		for (int l405 = 0; l405 < 2; l405 = l405 + 1) {
			fRec264[l405] = 0.0f;
		}
		for (int l406 = 0; l406 < 2; l406 = l406 + 1) {
			fRec267[l406] = 0.0f;
		}
		for (int l407 = 0; l407 < 2; l407 = l407 + 1) {
			fRec266[l407] = 0.0f;
		}
		for (int l408 = 0; l408 < 2; l408 = l408 + 1) {
			fRec269[l408] = 0.0f;
		}
		for (int l409 = 0; l409 < 2; l409 = l409 + 1) {
			fRec268[l409] = 0.0f;
		}
		for (int l410 = 0; l410 < 2; l410 = l410 + 1) {
			fRec271[l410] = 0.0f;
		}
		for (int l411 = 0; l411 < 2; l411 = l411 + 1) {
			fRec270[l411] = 0.0f;
		}
		for (int l412 = 0; l412 < 2; l412 = l412 + 1) {
			fVec145[l412] = 0.0f;
		}
		for (int l413 = 0; l413 < 2; l413 = l413 + 1) {
			fRec272[l413] = 0.0f;
		}
		for (int l414 = 0; l414 < 2; l414 = l414 + 1) {
			fRec184[l414] = 0.0f;
		}
		for (int l415 = 0; l415 < 2; l415 = l415 + 1) {
			iRec185[l415] = 0;
		}
		for (int l416 = 0; l416 < 2; l416 = l416 + 1) {
			fRec186[l416] = 0.0f;
		}
		for (int l417 = 0; l417 < 2; l417 = l417 + 1) {
			fVec146[l417] = 0.0f;
		}
		for (int l418 = 0; l418 < 2; l418 = l418 + 1) {
			fRec183[l418] = 0.0f;
		}
		for (int l419 = 0; l419 < 2; l419 = l419 + 1) {
			fRec182[l419] = 0.0f;
		}
		for (int l420 = 0; l420 < 5; l420 = l420 + 1) {
			fVec147[l420] = 0.0f;
		}
		for (int l421 = 0; l421 < 2; l421 = l421 + 1) {
			fRec275[l421] = 0.0f;
		}
		for (int l422 = 0; l422 < 2; l422 = l422 + 1) {
			fRec274[l422] = 0.0f;
		}
		for (int l423 = 0; l423 < 2; l423 = l423 + 1) {
			fRec277[l423] = 0.0f;
		}
		for (int l424 = 0; l424 < 2; l424 = l424 + 1) {
			fRec276[l424] = 0.0f;
		}
		for (int l425 = 0; l425 < 2; l425 = l425 + 1) {
			fRec279[l425] = 0.0f;
		}
		for (int l426 = 0; l426 < 2; l426 = l426 + 1) {
			fRec278[l426] = 0.0f;
		}
		for (int l427 = 0; l427 < 2; l427 = l427 + 1) {
			fRec281[l427] = 0.0f;
		}
		for (int l428 = 0; l428 < 2; l428 = l428 + 1) {
			fRec280[l428] = 0.0f;
		}
		for (int l429 = 0; l429 < 2; l429 = l429 + 1) {
			fRec283[l429] = 0.0f;
		}
		for (int l430 = 0; l430 < 2; l430 = l430 + 1) {
			fRec282[l430] = 0.0f;
		}
		for (int l431 = 0; l431 < 2; l431 = l431 + 1) {
			fRec285[l431] = 0.0f;
		}
		for (int l432 = 0; l432 < 2; l432 = l432 + 1) {
			fRec284[l432] = 0.0f;
		}
		for (int l433 = 0; l433 < 2; l433 = l433 + 1) {
			fRec287[l433] = 0.0f;
		}
		for (int l434 = 0; l434 < 2; l434 = l434 + 1) {
			fRec286[l434] = 0.0f;
		}
		for (int l435 = 0; l435 < 2; l435 = l435 + 1) {
			fVec148[l435] = 0.0f;
		}
		for (int l436 = 0; l436 < 2; l436 = l436 + 1) {
			fRec273[l436] = 0.0f;
		}
		for (int l437 = 0; l437 < 2; l437 = l437 + 1) {
			fVec149[l437] = 0.0f;
		}
		for (int l438 = 0; l438 < 2; l438 = l438 + 1) {
			fRec288[l438] = 0.0f;
		}
		for (int l439 = 0; l439 < 2; l439 = l439 + 1) {
			fVec150[l439] = 0.0f;
		}
		for (int l440 = 0; l440 < 2; l440 = l440 + 1) {
			fRec290[l440] = 0.0f;
		}
		for (int l441 = 0; l441 < 2; l441 = l441 + 1) {
			fRec289[l441] = 0.0f;
		}
		for (int l442 = 0; l442 < 2; l442 = l442 + 1) {
			fVec151[l442] = 0.0f;
		}
		for (int l443 = 0; l443 < 2; l443 = l443 + 1) {
			fRec293[l443] = 0.0f;
		}
		for (int l444 = 0; l444 < 2; l444 = l444 + 1) {
			fVec152[l444] = 0.0f;
		}
		for (int l445 = 0; l445 < 2; l445 = l445 + 1) {
			fRec292[l445] = 0.0f;
		}
		for (int l446 = 0; l446 < 2; l446 = l446 + 1) {
			fRec291[l446] = 0.0f;
		}
		for (int l447 = 0; l447 < 2; l447 = l447 + 1) {
			fVec153[l447] = 0.0f;
		}
		for (int l448 = 0; l448 < 2; l448 = l448 + 1) {
			fRec296[l448] = 0.0f;
		}
		for (int l449 = 0; l449 < 2; l449 = l449 + 1) {
			fVec154[l449] = 0.0f;
		}
		for (int l450 = 0; l450 < 2; l450 = l450 + 1) {
			fRec295[l450] = 0.0f;
		}
		for (int l451 = 0; l451 < 2; l451 = l451 + 1) {
			fRec294[l451] = 0.0f;
		}
		for (int l452 = 0; l452 < 2; l452 = l452 + 1) {
			fVec155[l452] = 0.0f;
		}
		for (int l453 = 0; l453 < 2; l453 = l453 + 1) {
			fRec299[l453] = 0.0f;
		}
		for (int l454 = 0; l454 < 2; l454 = l454 + 1) {
			fVec156[l454] = 0.0f;
		}
		for (int l455 = 0; l455 < 2; l455 = l455 + 1) {
			fRec298[l455] = 0.0f;
		}
		for (int l456 = 0; l456 < 2; l456 = l456 + 1) {
			fRec297[l456] = 0.0f;
		}
		for (int l457 = 0; l457 < 2; l457 = l457 + 1) {
			fRec301[l457] = 0.0f;
		}
		for (int l458 = 0; l458 < 2; l458 = l458 + 1) {
			fVec157[l458] = 0.0f;
		}
		for (int l459 = 0; l459 < 2; l459 = l459 + 1) {
			fRec300[l459] = 0.0f;
		}
		for (int l460 = 0; l460 < 2; l460 = l460 + 1) {
			fRec303[l460] = 0.0f;
		}
		for (int l461 = 0; l461 < 2; l461 = l461 + 1) {
			fVec158[l461] = 0.0f;
		}
		for (int l462 = 0; l462 < 2; l462 = l462 + 1) {
			fRec302[l462] = 0.0f;
		}
		for (int l463 = 0; l463 < 2; l463 = l463 + 1) {
			fRec305[l463] = 0.0f;
		}
		for (int l464 = 0; l464 < 2; l464 = l464 + 1) {
			fVec159[l464] = 0.0f;
		}
		for (int l465 = 0; l465 < 2; l465 = l465 + 1) {
			fRec304[l465] = 0.0f;
		}
		for (int l466 = 0; l466 < 2; l466 = l466 + 1) {
			fRec307[l466] = 0.0f;
		}
		for (int l467 = 0; l467 < 2; l467 = l467 + 1) {
			fVec160[l467] = 0.0f;
		}
		for (int l468 = 0; l468 < 2; l468 = l468 + 1) {
			fRec306[l468] = 0.0f;
		}
		for (int l469 = 0; l469 < 2; l469 = l469 + 1) {
			fVec161[l469] = 0.0f;
		}
		for (int l470 = 0; l470 < 2; l470 = l470 + 1) {
			fRec308[l470] = 0.0f;
		}
	}
	
	virtual void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	virtual void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp(*this);
	}
	
	virtual int getSampleRate() {
		return fSampleRate;
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("plugin");
		ui_interface->addButton("A0", &fButton6);
		ui_interface->addButton("A1", &fButton55);
		ui_interface->addButton("A2", &fButton43);
		ui_interface->addButton("A3", &fButton31);
		ui_interface->addButton("A4", &fButton19);
		ui_interface->addButton("C0", &fButton15);
		ui_interface->addButton("C1", &fButton3);
		ui_interface->addButton("C2", &fButton52);
		ui_interface->addButton("C3", &fButton40);
		ui_interface->addButton("C4", &fButton28);
		ui_interface->addButton("D0", &fButton13);
		ui_interface->addButton("D1", &fButton1);
		ui_interface->addButton("D2", &fButton50);
		ui_interface->addButton("D3", &fButton38);
		ui_interface->addButton("D4", &fButton26);
		ui_interface->addButton("F0", &fButton10);
		ui_interface->addButton("F1", &fButton59);
		ui_interface->addButton("F2", &fButton47);
		ui_interface->addButton("F3", &fButton35);
		ui_interface->addButton("F4", &fButton23);
		ui_interface->addButton("G0", &fButton8);
		ui_interface->addButton("G1", &fButton57);
		ui_interface->addButton("G2", &fButton45);
		ui_interface->addButton("G3", &fButton33);
		ui_interface->addButton("G4", &fButton21);
		ui_interface->declare(0, "2", "");
		ui_interface->openVerticalBox("vibrato");
		ui_interface->declare(&fHslider2, "1", "");
		ui_interface->addHorizontalSlider("depth", &fHslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.2f));
		ui_interface->declare(&fHslider1, "2", "");
		ui_interface->addHorizontalSlider("speed", &fHslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.2f));
		ui_interface->closeBox();
		ui_interface->addButton("a0", &fButton7);
		ui_interface->addButton("a1", &fButton56);
		ui_interface->addButton("a2", &fButton44);
		ui_interface->addButton("a3", &fButton32);
		ui_interface->addButton("a4", &fButton20);
		ui_interface->addButton("b0", &fButton5);
		ui_interface->addButton("b1", &fButton54);
		ui_interface->addButton("b2", &fButton42);
		ui_interface->addButton("b3", &fButton30);
		ui_interface->addButton("b4", &fButton18);
		ui_interface->addHorizontalSlider("balance", &fHslider7, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->openHorizontalBox("bass");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->addVerticalSlider("16' b", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider2, "2", "");
		ui_interface->addVerticalSlider("8' b", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fHslider5, "3", "");
		ui_interface->addHorizontalSlider("bass manual", &fHslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider0, "3", "");
		ui_interface->addVerticalSlider("bass volume", &fVslider0, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->addButton("c0", &fButton16);
		ui_interface->addButton("c1", &fButton4);
		ui_interface->addButton("c2", &fButton53);
		ui_interface->addButton("c3", &fButton41);
		ui_interface->addButton("c4", &fButton29);
		ui_interface->addButton("c5", &fButton17);
		ui_interface->addButton("d0", &fButton14);
		ui_interface->addButton("d1", &fButton2);
		ui_interface->addButton("d2", &fButton51);
		ui_interface->addButton("d3", &fButton39);
		ui_interface->addButton("d4", &fButton27);
		ui_interface->addButton("e0", &fButton12);
		ui_interface->addButton("e1", &fButton0);
		ui_interface->addButton("e2", &fButton49);
		ui_interface->addButton("e3", &fButton37);
		ui_interface->addButton("e4", &fButton25);
		ui_interface->addButton("f0", &fButton11);
		ui_interface->addButton("f1", &fButton60);
		ui_interface->addButton("f2", &fButton48);
		ui_interface->addButton("f3", &fButton36);
		ui_interface->addButton("f4", &fButton24);
		ui_interface->addButton("g0", &fButton9);
		ui_interface->addButton("g1", &fButton58);
		ui_interface->addButton("g2", &fButton46);
		ui_interface->addButton("g3", &fButton34);
		ui_interface->addButton("g4", &fButton22);
		ui_interface->openHorizontalBox("i");
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->addVerticalSlider("16' i", &fVslider8, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider9, "2", "");
		ui_interface->addVerticalSlider("8' i", &fVslider9, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider10, "3", "");
		ui_interface->addVerticalSlider("4' i", &fVslider10, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider11, "4", "");
		ui_interface->addVerticalSlider("2 2/3' i", &fVslider11, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider12, "5", "");
		ui_interface->addVerticalSlider("2' i", &fVslider12, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider13, "6", "");
		ui_interface->addVerticalSlider("1 3/5' i", &fVslider13, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider14, "7", "");
		ui_interface->addVerticalSlider("1' i", &fVslider14, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("ii");
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->addVerticalSlider("bright", &fVslider7, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider3, "2", "");
		ui_interface->addVerticalSlider("16' ii", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider4, "3", "");
		ui_interface->addVerticalSlider("8' ii", &fVslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider5, "4", "");
		ui_interface->addVerticalSlider("4' ii", &fVslider5, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->declare(&fVslider6, "5", "");
		ui_interface->addVerticalSlider("2' ii", &fVslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->closeBox();
		ui_interface->addHorizontalSlider("percussive", &fHslider6, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->addHorizontalSlider("pitch", &fHslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.05f));
		ui_interface->addHorizontalSlider("realism", &fHslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.25f));
		ui_interface->addHorizontalSlider("volume", &fHslider0, FAUSTFLOAT(0.5f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	virtual void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = 0.02f * mydsp_faustpower2_f(static_cast<float>(fHslider0));
		float fSlow1 = 0.02f * static_cast<float>(fVslider0);
		float fSlow2 = static_cast<float>(fButton0);
		float fSlow3 = fConst1 * (3.0f * static_cast<float>(fHslider1) + 5.0f);
		float fSlow4 = 0.0149f * static_cast<float>(fHslider2) + 0.0001f;
		float fSlow5 = 0.03f * static_cast<float>(fHslider3);
		float fSlow6 = static_cast<float>(fHslider4);
		int iSlow7 = fSlow6 > 0.16666667f;
		float fSlow8 = ((iSlow7) ? 1.000064f : 1.0f);
		float fSlow9 = static_cast<float>(fButton1);
		float fSlow10 = ((iSlow7) ? 1.001135f : 1.0f);
		float fSlow11 = static_cast<float>(fButton2);
		float fSlow12 = ((iSlow7) ? 0.999484f : 1.0f);
		float fSlow13 = static_cast<float>(fButton3);
		float fSlow14 = ((iSlow7) ? 1.003796f : 1.0f);
		float fSlow15 = static_cast<float>(fButton4);
		float fSlow16 = ((iSlow7) ? 1.001383f : 1.0f);
		float fSlow17 = static_cast<float>(fButton5);
		float fSlow18 = ((iSlow7) ? 1.003118f : 1.0f);
		float fSlow19 = static_cast<float>(fButton6);
		float fSlow20 = ((iSlow7) ? 0.996945f : 1.0f);
		float fSlow21 = static_cast<float>(fButton7);
		float fSlow22 = ((iSlow7) ? 1.002464f : 1.0f);
		float fSlow23 = static_cast<float>(fButton8);
		float fSlow24 = ((iSlow7) ? 1.000562f : 1.0f);
		float fSlow25 = static_cast<float>(fButton9);
		float fSlow26 = ((iSlow7) ? 0.997294f : 1.0f);
		float fSlow27 = static_cast<float>(fButton10);
		float fSlow28 = ((iSlow7) ? 0.997199f : 1.0f);
		float fSlow29 = static_cast<float>(fButton11);
		float fSlow30 = ((iSlow7) ? 0.998889f : 1.0f);
		float fSlow31 = static_cast<float>(fButton12);
		float fSlow32 = static_cast<float>(fButton13);
		float fSlow33 = static_cast<float>(fButton14);
		float fSlow34 = static_cast<float>(fButton15);
		float fSlow35 = static_cast<float>(fButton16);
		float fSlow36 = static_cast<float>(fVslider1);
		float fSlow37 = fSlow36 - 2.81f * (mydsp_faustpower2_f(fSlow36) - mydsp_faustpower3_f(fSlow36));
		float fSlow38 = static_cast<float>(fVslider2);
		float fSlow39 = fSlow38 - 2.81f * (mydsp_faustpower2_f(fSlow38) - mydsp_faustpower3_f(fSlow38));
		float fSlow40 = static_cast<float>(fHslider5);
		float fSlow41 = ((fSlow6 > 0.5f) ? 0.01357f : 0.0f);
		float fSlow42 = static_cast<float>(fButton17);
		float fSlow43 = static_cast<float>(fButton18);
		float fSlow44 = static_cast<float>(fButton19);
		float fSlow45 = static_cast<float>(fButton20);
		float fSlow46 = static_cast<float>(fButton21);
		float fSlow47 = static_cast<float>(fButton22);
		float fSlow48 = static_cast<float>(fButton23);
		float fSlow49 = static_cast<float>(fButton24);
		float fSlow50 = static_cast<float>(fButton25);
		float fSlow51 = static_cast<float>(fButton26);
		float fSlow52 = static_cast<float>(fButton27);
		float fSlow53 = static_cast<float>(fButton28);
		float fSlow54 = static_cast<float>(fButton29);
		float fSlow55 = static_cast<float>(fButton30);
		float fSlow56 = static_cast<float>(fButton31);
		float fSlow57 = static_cast<float>(fButton32);
		float fSlow58 = static_cast<float>(fButton33);
		float fSlow59 = static_cast<float>(fButton34);
		float fSlow60 = static_cast<float>(fButton35);
		float fSlow61 = static_cast<float>(fButton36);
		float fSlow62 = static_cast<float>(fButton37);
		float fSlow63 = static_cast<float>(fButton38);
		float fSlow64 = static_cast<float>(fButton39);
		float fSlow65 = static_cast<float>(fButton40);
		float fSlow66 = static_cast<float>(fButton41);
		float fSlow67 = static_cast<float>(fButton42);
		float fSlow68 = static_cast<float>(fButton43);
		float fSlow69 = static_cast<float>(fButton44);
		float fSlow70 = static_cast<float>(fButton45);
		float fSlow71 = static_cast<float>(fButton46);
		float fSlow72 = static_cast<float>(fButton47);
		float fSlow73 = static_cast<float>(fButton48);
		float fSlow74 = static_cast<float>(fButton49);
		float fSlow75 = static_cast<float>(fButton50);
		float fSlow76 = static_cast<float>(fButton51);
		float fSlow77 = static_cast<float>(fButton52);
		float fSlow78 = static_cast<float>(fButton53);
		float fSlow79 = static_cast<float>(fButton54);
		float fSlow80 = static_cast<float>(fButton55);
		float fSlow81 = static_cast<float>(fButton56);
		float fSlow82 = static_cast<float>(fButton57);
		float fSlow83 = static_cast<float>(fButton58);
		float fSlow84 = static_cast<float>(fButton59);
		float fSlow85 = static_cast<float>(fButton60);
		float fSlow86 = 1.0f - fSlow40;
		float fSlow87 = ((fSlow6 >= 0.8333333f) ? 1.0f : 0.0f);
		float fSlow88 = 4.5f * static_cast<float>(fHslider6);
		float fSlow89 = static_cast<float>(fVslider3);
		float fSlow90 = fSlow89 - 2.81f * (mydsp_faustpower2_f(fSlow89) - mydsp_faustpower3_f(fSlow89));
		float fSlow91 = static_cast<float>(fVslider4);
		float fSlow92 = fSlow91 - 2.81f * (mydsp_faustpower2_f(fSlow91) - mydsp_faustpower3_f(fSlow91));
		float fSlow93 = static_cast<float>(fVslider5);
		float fSlow94 = fSlow93 - 2.81f * (mydsp_faustpower2_f(fSlow93) - mydsp_faustpower3_f(fSlow93));
		float fSlow95 = static_cast<float>(fVslider6);
		float fSlow96 = fSlow95 - 2.81f * (mydsp_faustpower2_f(fSlow95) - mydsp_faustpower3_f(fSlow95));
		float fSlow97 = 0.96153843f * static_cast<float>(fVslider7);
		float fSlow98 = 0.6f * (0.9807692f - fSlow97);
		float fSlow99 = 0.45833334f * fSlow90;
		float fSlow100 = 0.45833334f * fSlow92;
		float fSlow101 = 0.45833334f * fSlow94;
		float fSlow102 = 0.45833334f * fSlow96;
		float fSlow103 = fSlow97 + 0.01923077f;
		float fSlow104 = static_cast<float>(fHslider7);
		float fSlow105 = 2.5f * fSlow104;
		float fSlow106 = static_cast<float>(fVslider8);
		float fSlow107 = fSlow106 - 2.81f * (mydsp_faustpower2_f(fSlow106) - mydsp_faustpower3_f(fSlow106));
		float fSlow108 = static_cast<float>(fVslider9);
		float fSlow109 = fSlow108 - 2.81f * (mydsp_faustpower2_f(fSlow108) - mydsp_faustpower3_f(fSlow108));
		float fSlow110 = static_cast<float>(fVslider10);
		float fSlow111 = fSlow110 - 2.81f * (mydsp_faustpower2_f(fSlow110) - mydsp_faustpower3_f(fSlow110));
		float fSlow112 = static_cast<float>(fVslider11);
		float fSlow113 = fSlow112 - 2.81f * (mydsp_faustpower2_f(fSlow112) - mydsp_faustpower3_f(fSlow112));
		float fSlow114 = static_cast<float>(fVslider12);
		float fSlow115 = fSlow114 - 2.81f * (mydsp_faustpower2_f(fSlow114) - mydsp_faustpower3_f(fSlow114));
		float fSlow116 = static_cast<float>(fVslider13);
		float fSlow117 = fSlow116 - 2.81f * (mydsp_faustpower2_f(fSlow116) - mydsp_faustpower3_f(fSlow116));
		float fSlow118 = static_cast<float>(fVslider14);
		float fSlow119 = fSlow118 - 2.81f * (mydsp_faustpower2_f(fSlow118) - mydsp_faustpower3_f(fSlow118));
		float fSlow120 = 1.0f - fSlow104;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec0[0] = fSlow0 + 0.98f * fRec0[1];
			fRec1[0] = fSlow1 + 0.98f * fRec1[1];
			fVec0[0] = fSlow2;
			float fTemp0 = fSlow2 + fVec0[3] + fVec0[1] + fVec0[2];
			fRec7[0] = fSlow3 + ((fRec7[1] > 1.0f) ? fRec7[1] + -1.0f : fRec7[1]);
			float fTemp1 = fSlow5 + fSlow4 * std::sin(6.2831855f * fRec7[0]) + 1.0f;
			float fTemp2 = fRec6[1] + fConst2 * fSlow8 * fTemp1;
			fRec6[0] = ((fTemp2 > 1.0f) ? fTemp2 + -1.0f : fTemp2);
			iRec5[0] = (((fRec6[0] - fRec6[1]) < 0.0f) ? 1 - iRec5[1] : iRec5[1]);
			float fTemp3 = fRec6[0] + static_cast<float>(iRec5[0]);
			fVec1[0] = fTemp3;
			float fTemp4 = 0.5f * fTemp3;
			iRec8[0] = (((0.5f * (fTemp3 - fVec1[1])) < 0.0f) ? 1 - iRec8[1] : iRec8[1]);
			float fTemp5 = static_cast<float>(iRec8[0]) + fTemp4;
			fVec2[0] = fTemp5;
			float fTemp6 = 0.5f * fTemp5;
			iRec9[0] = (((0.5f * (fTemp5 - fVec2[1])) < 0.0f) ? 1 - iRec9[1] : iRec9[1]);
			float fTemp7 = static_cast<float>(iRec9[0]) + fTemp6;
			fVec3[0] = fTemp7;
			float fTemp8 = 0.5f * fTemp7;
			iRec10[0] = (((0.5f * (fTemp7 - fVec3[1])) < 0.0f) ? 1 - iRec10[1] : iRec10[1]);
			float fTemp9 = static_cast<float>(iRec10[0]) + fTemp8;
			fVec4[0] = fTemp9;
			float fTemp10 = 0.5f * fTemp9;
			fRec4[0] = fRec4[1] + fConst3 * (yc20_get_sample(fTemp10, 4, 0) - fRec4[1]);
			fRec3[0] = fConst5 * (fRec3[1] + (fRec4[0] - fRec4[1]));
			fVec5[0] = fSlow9;
			float fTemp11 = fSlow9 + fVec5[3] + fVec5[1] + fVec5[2];
			float fTemp12 = fRec14[1] + fConst6 * fSlow10 * fTemp1;
			fRec14[0] = ((fTemp12 > 1.0f) ? fTemp12 + -1.0f : fTemp12);
			iRec13[0] = (((fRec14[0] - fRec14[1]) < 0.0f) ? 1 - iRec13[1] : iRec13[1]);
			float fTemp13 = fRec14[0] + static_cast<float>(iRec13[0]);
			fVec6[0] = fTemp13;
			float fTemp14 = 0.5f * fTemp13;
			iRec15[0] = (((0.5f * (fTemp13 - fVec6[1])) < 0.0f) ? 1 - iRec15[1] : iRec15[1]);
			float fTemp15 = static_cast<float>(iRec15[0]) + fTemp14;
			fVec7[0] = fTemp15;
			float fTemp16 = 0.5f * fTemp15;
			iRec16[0] = (((0.5f * (fTemp15 - fVec7[1])) < 0.0f) ? 1 - iRec16[1] : iRec16[1]);
			float fTemp17 = static_cast<float>(iRec16[0]) + fTemp16;
			fVec8[0] = fTemp17;
			float fTemp18 = 0.5f * fTemp17;
			iRec17[0] = (((0.5f * (fTemp17 - fVec8[1])) < 0.0f) ? 1 - iRec17[1] : iRec17[1]);
			float fTemp19 = static_cast<float>(iRec17[0]) + fTemp18;
			fVec9[0] = fTemp19;
			float fTemp20 = 0.5f * fTemp19;
			fRec12[0] = fRec12[1] + fConst7 * (yc20_get_sample(fTemp20, 3, 0) - fRec12[1]);
			fRec11[0] = fConst5 * (fRec11[1] + (fRec12[0] - fRec12[1]));
			fVec10[0] = fSlow11;
			float fTemp21 = fSlow11 + fVec10[3] + fVec10[1] + fVec10[2];
			float fTemp22 = fRec21[1] + fConst8 * fSlow12 * fTemp1;
			fRec21[0] = ((fTemp22 > 1.0f) ? fTemp22 + -1.0f : fTemp22);
			iRec20[0] = (((fRec21[0] - fRec21[1]) < 0.0f) ? 1 - iRec20[1] : iRec20[1]);
			float fTemp23 = fRec21[0] + static_cast<float>(iRec20[0]);
			fVec11[0] = fTemp23;
			float fTemp24 = 0.5f * fTemp23;
			iRec22[0] = (((0.5f * (fTemp23 - fVec11[1])) < 0.0f) ? 1 - iRec22[1] : iRec22[1]);
			float fTemp25 = static_cast<float>(iRec22[0]) + fTemp24;
			fVec12[0] = fTemp25;
			float fTemp26 = 0.5f * fTemp25;
			iRec23[0] = (((0.5f * (fTemp25 - fVec12[1])) < 0.0f) ? 1 - iRec23[1] : iRec23[1]);
			float fTemp27 = static_cast<float>(iRec23[0]) + fTemp26;
			fVec13[0] = fTemp27;
			float fTemp28 = 0.5f * fTemp27;
			iRec24[0] = (((0.5f * (fTemp27 - fVec13[1])) < 0.0f) ? 1 - iRec24[1] : iRec24[1]);
			float fTemp29 = static_cast<float>(iRec24[0]) + fTemp28;
			fVec14[0] = fTemp29;
			float fTemp30 = 0.5f * fTemp29;
			fRec19[0] = fRec19[1] + fConst7 * (yc20_get_sample(fTemp30, 2, 0) - fRec19[1]);
			fRec18[0] = fConst5 * (fRec18[1] + (fRec19[0] - fRec19[1]));
			fVec15[0] = fSlow13;
			float fTemp31 = fSlow13 + fVec15[3] + fVec15[1] + fVec15[2];
			float fTemp32 = fRec28[1] + fConst9 * fSlow14 * fTemp1;
			fRec28[0] = ((fTemp32 > 1.0f) ? fTemp32 + -1.0f : fTemp32);
			iRec27[0] = (((fRec28[0] - fRec28[1]) < 0.0f) ? 1 - iRec27[1] : iRec27[1]);
			float fTemp33 = fRec28[0] + static_cast<float>(iRec27[0]);
			fVec16[0] = fTemp33;
			float fTemp34 = 0.5f * fTemp33;
			iRec29[0] = (((0.5f * (fTemp33 - fVec16[1])) < 0.0f) ? 1 - iRec29[1] : iRec29[1]);
			float fTemp35 = static_cast<float>(iRec29[0]) + fTemp34;
			fVec17[0] = fTemp35;
			float fTemp36 = 0.5f * fTemp35;
			iRec30[0] = (((0.5f * (fTemp35 - fVec17[1])) < 0.0f) ? 1 - iRec30[1] : iRec30[1]);
			float fTemp37 = static_cast<float>(iRec30[0]) + fTemp36;
			fVec18[0] = fTemp37;
			float fTemp38 = 0.5f * fTemp37;
			iRec31[0] = (((0.5f * (fTemp37 - fVec18[1])) < 0.0f) ? 1 - iRec31[1] : iRec31[1]);
			float fTemp39 = static_cast<float>(iRec31[0]) + fTemp38;
			fVec19[0] = fTemp39;
			float fTemp40 = 0.5f * fTemp39;
			fRec26[0] = fRec26[1] + fConst7 * (yc20_get_sample(fTemp40, 1, 0) - fRec26[1]);
			fRec25[0] = fConst5 * (fRec25[1] + (fRec26[0] - fRec26[1]));
			fVec20[0] = fSlow15;
			float fTemp41 = fSlow15 + fVec20[3] + fVec20[1] + fVec20[2];
			float fTemp42 = fRec35[1] + fConst10 * fSlow16 * fTemp1;
			fRec35[0] = ((fTemp42 > 1.0f) ? fTemp42 + -1.0f : fTemp42);
			iRec34[0] = (((fRec35[0] - fRec35[1]) < 0.0f) ? 1 - iRec34[1] : iRec34[1]);
			float fTemp43 = fRec35[0] + static_cast<float>(iRec34[0]);
			fVec21[0] = fTemp43;
			float fTemp44 = 0.5f * fTemp43;
			iRec36[0] = (((0.5f * (fTemp43 - fVec21[1])) < 0.0f) ? 1 - iRec36[1] : iRec36[1]);
			float fTemp45 = static_cast<float>(iRec36[0]) + fTemp44;
			fVec22[0] = fTemp45;
			float fTemp46 = 0.5f * fTemp45;
			iRec37[0] = (((0.5f * (fTemp45 - fVec22[1])) < 0.0f) ? 1 - iRec37[1] : iRec37[1]);
			float fTemp47 = static_cast<float>(iRec37[0]) + fTemp46;
			fVec23[0] = fTemp47;
			float fTemp48 = 0.5f * fTemp47;
			iRec38[0] = (((0.5f * (fTemp47 - fVec23[1])) < 0.0f) ? 1 - iRec38[1] : iRec38[1]);
			float fTemp49 = static_cast<float>(iRec38[0]) + fTemp48;
			fVec24[0] = fTemp49;
			float fTemp50 = 0.5f * fTemp49;
			fRec33[0] = fRec33[1] + fConst7 * (yc20_get_sample(fTemp50, 0, 0) - fRec33[1]);
			fRec32[0] = fConst5 * (fRec32[1] + (fRec33[0] - fRec33[1]));
			fVec25[0] = fSlow17;
			float fTemp51 = fSlow17 + fVec25[3] + fVec25[1] + fVec25[2];
			float fTemp52 = fRec42[1] + fConst11 * fSlow18 * fTemp1;
			fRec42[0] = ((fTemp52 > 1.0f) ? fTemp52 + -1.0f : fTemp52);
			iRec41[0] = (((fRec42[0] - fRec42[1]) < 0.0f) ? 1 - iRec41[1] : iRec41[1]);
			float fTemp53 = fRec42[0] + static_cast<float>(iRec41[0]);
			fVec26[0] = fTemp53;
			float fTemp54 = 0.5f * fTemp53;
			iRec43[0] = (((0.5f * (fTemp53 - fVec26[1])) < 0.0f) ? 1 - iRec43[1] : iRec43[1]);
			float fTemp55 = static_cast<float>(iRec43[0]) + fTemp54;
			fVec27[0] = fTemp55;
			float fTemp56 = 0.5f * fTemp55;
			iRec44[0] = (((0.5f * (fTemp55 - fVec27[1])) < 0.0f) ? 1 - iRec44[1] : iRec44[1]);
			float fTemp57 = static_cast<float>(iRec44[0]) + fTemp56;
			fVec28[0] = fTemp57;
			float fTemp58 = 0.5f * fTemp57;
			iRec45[0] = (((0.5f * (fTemp57 - fVec28[1])) < 0.0f) ? 1 - iRec45[1] : iRec45[1]);
			float fTemp59 = static_cast<float>(iRec45[0]) + fTemp58;
			fVec29[0] = fTemp59;
			float fTemp60 = 0.5f * fTemp59;
			iRec46[0] = (((0.5f * (fTemp59 - fVec29[1])) < 0.0f) ? 1 - iRec46[1] : iRec46[1]);
			float fTemp61 = static_cast<float>(iRec46[0]) + fTemp60;
			fVec30[0] = fTemp61;
			float fTemp62 = 0.5f * fTemp61;
			fRec40[0] = fRec40[1] + fConst12 * (yc20_get_sample(fTemp62, 11, 0) - fRec40[1]);
			fRec39[0] = fConst13 * (fRec39[1] + (fRec40[0] - fRec40[1]));
			fVec31[0] = fSlow19;
			float fTemp63 = fSlow19 + fVec31[3] + fVec31[1] + fVec31[2];
			float fTemp64 = fRec50[1] + fConst14 * fSlow20 * fTemp1;
			fRec50[0] = ((fTemp64 > 1.0f) ? fTemp64 + -1.0f : fTemp64);
			iRec49[0] = (((fRec50[0] - fRec50[1]) < 0.0f) ? 1 - iRec49[1] : iRec49[1]);
			float fTemp65 = fRec50[0] + static_cast<float>(iRec49[0]);
			fVec32[0] = fTemp65;
			float fTemp66 = 0.5f * fTemp65;
			iRec51[0] = (((0.5f * (fTemp65 - fVec32[1])) < 0.0f) ? 1 - iRec51[1] : iRec51[1]);
			float fTemp67 = static_cast<float>(iRec51[0]) + fTemp66;
			fVec33[0] = fTemp67;
			float fTemp68 = 0.5f * fTemp67;
			iRec52[0] = (((0.5f * (fTemp67 - fVec33[1])) < 0.0f) ? 1 - iRec52[1] : iRec52[1]);
			float fTemp69 = static_cast<float>(iRec52[0]) + fTemp68;
			fVec34[0] = fTemp69;
			float fTemp70 = 0.5f * fTemp69;
			iRec53[0] = (((0.5f * (fTemp69 - fVec34[1])) < 0.0f) ? 1 - iRec53[1] : iRec53[1]);
			float fTemp71 = static_cast<float>(iRec53[0]) + fTemp70;
			fVec35[0] = fTemp71;
			float fTemp72 = 0.5f * fTemp71;
			iRec54[0] = (((0.5f * (fTemp71 - fVec35[1])) < 0.0f) ? 1 - iRec54[1] : iRec54[1]);
			float fTemp73 = static_cast<float>(iRec54[0]) + fTemp72;
			fVec36[0] = fTemp73;
			float fTemp74 = 0.5f * fTemp73;
			fRec48[0] = fRec48[1] + fConst12 * (yc20_get_sample(fTemp74, 10, 0) - fRec48[1]);
			fRec47[0] = fConst13 * (fRec47[1] + (fRec48[0] - fRec48[1]));
			fVec37[0] = fSlow21;
			float fTemp75 = fSlow21 + fVec37[3] + fVec37[1] + fVec37[2];
			float fTemp76 = fRec58[1] + fConst15 * fSlow22 * fTemp1;
			fRec58[0] = ((fTemp76 > 1.0f) ? fTemp76 + -1.0f : fTemp76);
			iRec57[0] = (((fRec58[0] - fRec58[1]) < 0.0f) ? 1 - iRec57[1] : iRec57[1]);
			float fTemp77 = fRec58[0] + static_cast<float>(iRec57[0]);
			fVec38[0] = fTemp77;
			float fTemp78 = 0.5f * fTemp77;
			iRec59[0] = (((0.5f * (fTemp77 - fVec38[1])) < 0.0f) ? 1 - iRec59[1] : iRec59[1]);
			float fTemp79 = static_cast<float>(iRec59[0]) + fTemp78;
			fVec39[0] = fTemp79;
			float fTemp80 = 0.5f * fTemp79;
			iRec60[0] = (((0.5f * (fTemp79 - fVec39[1])) < 0.0f) ? 1 - iRec60[1] : iRec60[1]);
			float fTemp81 = static_cast<float>(iRec60[0]) + fTemp80;
			fVec40[0] = fTemp81;
			float fTemp82 = 0.5f * fTemp81;
			iRec61[0] = (((0.5f * (fTemp81 - fVec40[1])) < 0.0f) ? 1 - iRec61[1] : iRec61[1]);
			float fTemp83 = static_cast<float>(iRec61[0]) + fTemp82;
			fVec41[0] = fTemp83;
			float fTemp84 = 0.5f * fTemp83;
			iRec62[0] = (((0.5f * (fTemp83 - fVec41[1])) < 0.0f) ? 1 - iRec62[1] : iRec62[1]);
			float fTemp85 = static_cast<float>(iRec62[0]) + fTemp84;
			fVec42[0] = fTemp85;
			float fTemp86 = 0.5f * fTemp85;
			fRec56[0] = fRec56[1] + fConst12 * (yc20_get_sample(fTemp86, 9, 0) - fRec56[1]);
			fRec55[0] = fConst13 * (fRec55[1] + (fRec56[0] - fRec56[1]));
			fVec43[0] = fSlow23;
			float fTemp87 = fSlow23 + fVec43[3] + fVec43[1] + fVec43[2];
			float fTemp88 = fRec66[1] + fConst16 * fSlow24 * fTemp1;
			fRec66[0] = ((fTemp88 > 1.0f) ? fTemp88 + -1.0f : fTemp88);
			iRec65[0] = (((fRec66[0] - fRec66[1]) < 0.0f) ? 1 - iRec65[1] : iRec65[1]);
			float fTemp89 = fRec66[0] + static_cast<float>(iRec65[0]);
			fVec44[0] = fTemp89;
			float fTemp90 = 0.5f * fTemp89;
			iRec67[0] = (((0.5f * (fTemp89 - fVec44[1])) < 0.0f) ? 1 - iRec67[1] : iRec67[1]);
			float fTemp91 = static_cast<float>(iRec67[0]) + fTemp90;
			fVec45[0] = fTemp91;
			float fTemp92 = 0.5f * fTemp91;
			iRec68[0] = (((0.5f * (fTemp91 - fVec45[1])) < 0.0f) ? 1 - iRec68[1] : iRec68[1]);
			float fTemp93 = static_cast<float>(iRec68[0]) + fTemp92;
			fVec46[0] = fTemp93;
			float fTemp94 = 0.5f * fTemp93;
			iRec69[0] = (((0.5f * (fTemp93 - fVec46[1])) < 0.0f) ? 1 - iRec69[1] : iRec69[1]);
			float fTemp95 = static_cast<float>(iRec69[0]) + fTemp94;
			fVec47[0] = fTemp95;
			float fTemp96 = 0.5f * fTemp95;
			iRec70[0] = (((0.5f * (fTemp95 - fVec47[1])) < 0.0f) ? 1 - iRec70[1] : iRec70[1]);
			float fTemp97 = static_cast<float>(iRec70[0]) + fTemp96;
			fVec48[0] = fTemp97;
			float fTemp98 = 0.5f * fTemp97;
			fRec64[0] = fRec64[1] + fConst12 * (yc20_get_sample(fTemp98, 8, 0) - fRec64[1]);
			fRec63[0] = fConst13 * (fRec63[1] + (fRec64[0] - fRec64[1]));
			fVec49[0] = fSlow25;
			float fTemp99 = fSlow25 + fVec49[3] + fVec49[1] + fVec49[2];
			float fTemp100 = fRec74[1] + fConst17 * fSlow26 * fTemp1;
			fRec74[0] = ((fTemp100 > 1.0f) ? fTemp100 + -1.0f : fTemp100);
			iRec73[0] = (((fRec74[0] - fRec74[1]) < 0.0f) ? 1 - iRec73[1] : iRec73[1]);
			float fTemp101 = fRec74[0] + static_cast<float>(iRec73[0]);
			fVec50[0] = fTemp101;
			float fTemp102 = 0.5f * fTemp101;
			iRec75[0] = (((0.5f * (fTemp101 - fVec50[1])) < 0.0f) ? 1 - iRec75[1] : iRec75[1]);
			float fTemp103 = static_cast<float>(iRec75[0]) + fTemp102;
			fVec51[0] = fTemp103;
			float fTemp104 = 0.5f * fTemp103;
			iRec76[0] = (((0.5f * (fTemp103 - fVec51[1])) < 0.0f) ? 1 - iRec76[1] : iRec76[1]);
			float fTemp105 = static_cast<float>(iRec76[0]) + fTemp104;
			fVec52[0] = fTemp105;
			float fTemp106 = 0.5f * fTemp105;
			iRec77[0] = (((0.5f * (fTemp105 - fVec52[1])) < 0.0f) ? 1 - iRec77[1] : iRec77[1]);
			float fTemp107 = static_cast<float>(iRec77[0]) + fTemp106;
			fVec53[0] = fTemp107;
			float fTemp108 = 0.5f * fTemp107;
			iRec78[0] = (((0.5f * (fTemp107 - fVec53[1])) < 0.0f) ? 1 - iRec78[1] : iRec78[1]);
			float fTemp109 = static_cast<float>(iRec78[0]) + fTemp108;
			fVec54[0] = fTemp109;
			float fTemp110 = 0.5f * fTemp109;
			fRec72[0] = fRec72[1] + fConst18 * (yc20_get_sample(fTemp110, 7, 0) - fRec72[1]);
			fRec71[0] = fConst13 * (fRec71[1] + (fRec72[0] - fRec72[1]));
			fVec55[0] = fSlow27;
			float fTemp111 = fSlow27 + fVec55[3] + fVec55[1] + fVec55[2];
			float fTemp112 = fRec82[1] + fConst19 * fSlow28 * fTemp1;
			fRec82[0] = ((fTemp112 > 1.0f) ? fTemp112 + -1.0f : fTemp112);
			iRec81[0] = (((fRec82[0] - fRec82[1]) < 0.0f) ? 1 - iRec81[1] : iRec81[1]);
			float fTemp113 = fRec82[0] + static_cast<float>(iRec81[0]);
			fVec56[0] = fTemp113;
			float fTemp114 = 0.5f * fTemp113;
			iRec83[0] = (((0.5f * (fTemp113 - fVec56[1])) < 0.0f) ? 1 - iRec83[1] : iRec83[1]);
			float fTemp115 = static_cast<float>(iRec83[0]) + fTemp114;
			fVec57[0] = fTemp115;
			float fTemp116 = 0.5f * fTemp115;
			iRec84[0] = (((0.5f * (fTemp115 - fVec57[1])) < 0.0f) ? 1 - iRec84[1] : iRec84[1]);
			float fTemp117 = static_cast<float>(iRec84[0]) + fTemp116;
			fVec58[0] = fTemp117;
			float fTemp118 = 0.5f * fTemp117;
			iRec85[0] = (((0.5f * (fTemp117 - fVec58[1])) < 0.0f) ? 1 - iRec85[1] : iRec85[1]);
			float fTemp119 = static_cast<float>(iRec85[0]) + fTemp118;
			fVec59[0] = fTemp119;
			float fTemp120 = 0.5f * fTemp119;
			iRec86[0] = (((0.5f * (fTemp119 - fVec59[1])) < 0.0f) ? 1 - iRec86[1] : iRec86[1]);
			float fTemp121 = static_cast<float>(iRec86[0]) + fTemp120;
			fVec60[0] = fTemp121;
			float fTemp122 = 0.5f * fTemp121;
			fRec80[0] = fRec80[1] + fConst18 * (yc20_get_sample(fTemp122, 6, 0) - fRec80[1]);
			fRec79[0] = fConst13 * (fRec79[1] + (fRec80[0] - fRec80[1]));
			fVec61[0] = fSlow29;
			float fTemp123 = fSlow29 + fVec61[3] + fVec61[1] + fVec61[2];
			float fTemp124 = fRec90[1] + fConst20 * fSlow30 * fTemp1;
			fRec90[0] = ((fTemp124 > 1.0f) ? fTemp124 + -1.0f : fTemp124);
			iRec89[0] = (((fRec90[0] - fRec90[1]) < 0.0f) ? 1 - iRec89[1] : iRec89[1]);
			float fTemp125 = fRec90[0] + static_cast<float>(iRec89[0]);
			fVec62[0] = fTemp125;
			float fTemp126 = 0.5f * fTemp125;
			iRec91[0] = (((0.5f * (fTemp125 - fVec62[1])) < 0.0f) ? 1 - iRec91[1] : iRec91[1]);
			float fTemp127 = static_cast<float>(iRec91[0]) + fTemp126;
			fVec63[0] = fTemp127;
			float fTemp128 = 0.5f * fTemp127;
			iRec92[0] = (((0.5f * (fTemp127 - fVec63[1])) < 0.0f) ? 1 - iRec92[1] : iRec92[1]);
			float fTemp129 = static_cast<float>(iRec92[0]) + fTemp128;
			fVec64[0] = fTemp129;
			float fTemp130 = 0.5f * fTemp129;
			iRec93[0] = (((0.5f * (fTemp129 - fVec64[1])) < 0.0f) ? 1 - iRec93[1] : iRec93[1]);
			float fTemp131 = static_cast<float>(iRec93[0]) + fTemp130;
			fVec65[0] = fTemp131;
			float fTemp132 = 0.5f * fTemp131;
			iRec94[0] = (((0.5f * (fTemp131 - fVec65[1])) < 0.0f) ? 1 - iRec94[1] : iRec94[1]);
			float fTemp133 = static_cast<float>(iRec94[0]) + fTemp132;
			fVec66[0] = fTemp133;
			float fTemp134 = 0.5f * fTemp133;
			fRec88[0] = fRec88[1] + fConst18 * (yc20_get_sample(fTemp134, 5, 0) - fRec88[1]);
			fRec87[0] = fConst13 * (fRec87[1] + (fRec88[0] - fRec88[1]));
			fVec67[0] = fSlow31;
			float fTemp135 = fSlow31 + fVec67[3] + fVec67[1] + fVec67[2];
			iRec97[0] = (((0.5f * (fTemp9 - fVec4[1])) < 0.0f) ? 1 - iRec97[1] : iRec97[1]);
			float fTemp136 = static_cast<float>(iRec97[0]) + fTemp10;
			fVec68[0] = fTemp136;
			float fTemp137 = 0.5f * fTemp136;
			fRec96[0] = fRec96[1] + fConst18 * (yc20_get_sample(fTemp137, 4, 0) - fRec96[1]);
			fRec95[0] = fConst13 * (fRec95[1] + (fRec96[0] - fRec96[1]));
			fVec69[0] = fSlow32;
			float fTemp138 = fSlow32 + fVec69[3] + fVec69[1] + fVec69[2];
			iRec100[0] = (((0.5f * (fTemp19 - fVec9[1])) < 0.0f) ? 1 - iRec100[1] : iRec100[1]);
			float fTemp139 = static_cast<float>(iRec100[0]) + fTemp20;
			fVec70[0] = fTemp139;
			float fTemp140 = 0.5f * fTemp139;
			fRec99[0] = fRec99[1] + fConst21 * (yc20_get_sample(fTemp140, 3, 0) - fRec99[1]);
			fRec98[0] = fConst13 * (fRec98[1] + (fRec99[0] - fRec99[1]));
			fVec71[0] = fSlow33;
			float fTemp141 = fSlow33 + fVec71[3] + fVec71[1] + fVec71[2];
			iRec103[0] = (((0.5f * (fTemp29 - fVec14[1])) < 0.0f) ? 1 - iRec103[1] : iRec103[1]);
			float fTemp142 = static_cast<float>(iRec103[0]) + fTemp30;
			fVec72[0] = fTemp142;
			float fTemp143 = 0.5f * fTemp142;
			fRec102[0] = fRec102[1] + fConst21 * (yc20_get_sample(fTemp143, 2, 0) - fRec102[1]);
			fRec101[0] = fConst13 * (fRec101[1] + (fRec102[0] - fRec102[1]));
			fVec73[0] = fSlow34;
			float fTemp144 = fSlow34 + fVec73[3] + fVec73[1] + fVec73[2];
			iRec106[0] = (((0.5f * (fTemp39 - fVec19[1])) < 0.0f) ? 1 - iRec106[1] : iRec106[1]);
			float fTemp145 = static_cast<float>(iRec106[0]) + fTemp40;
			fVec74[0] = fTemp145;
			float fTemp146 = 0.5f * fTemp145;
			fRec105[0] = fRec105[1] + fConst21 * (yc20_get_sample(fTemp146, 1, 0) - fRec105[1]);
			fRec104[0] = fConst13 * (fRec104[1] + (fRec105[0] - fRec105[1]));
			fVec75[0] = fSlow35;
			float fTemp147 = fSlow35 + fVec75[3] + fVec75[1] + fVec75[2];
			iRec109[0] = (((0.5f * (fTemp49 - fVec24[1])) < 0.0f) ? 1 - iRec109[1] : iRec109[1]);
			float fTemp148 = static_cast<float>(iRec109[0]) + fTemp50;
			fVec76[0] = fTemp148;
			float fTemp149 = 0.5f * fTemp148;
			fRec108[0] = fRec108[1] + fConst21 * (yc20_get_sample(fTemp149, 0, 0) - fRec108[1]);
			fRec107[0] = fConst13 * (fRec107[1] + (fRec108[0] - fRec108[1]));
			float fTemp150 = fRec107[0] * fTemp147 + fRec104[0] * fTemp144 + fRec101[0] * fTemp141 + fRec98[0] * fTemp138 + fRec95[0] * fTemp135 + fRec87[0] * fTemp123 + fRec79[0] * fTemp111 + fRec71[0] * fTemp99 + fRec63[0] * fTemp87 + fRec55[0] * fTemp75 + fRec47[0] * fTemp63 + fRec39[0] * fTemp51 + fRec32[0] * fTemp41 + fRec25[0] * fTemp31 + fRec18[0] * fTemp21 + fRec11[0] * fTemp11 + fRec3[0] * fTemp0;
			iRec112[0] = (((0.5f * (fTemp61 - fVec30[1])) < 0.0f) ? 1 - iRec112[1] : iRec112[1]);
			float fTemp151 = static_cast<float>(iRec112[0]) + fTemp62;
			fVec77[0] = fTemp151;
			float fTemp152 = 0.5f * fTemp151;
			fRec111[0] = fRec111[1] + fConst21 * (yc20_get_sample(fTemp152, 11, 0) - fRec111[1]);
			fRec110[0] = fConst22 * (fRec110[1] + (fRec111[0] - fRec111[1]));
			iRec115[0] = (((0.5f * (fTemp73 - fVec36[1])) < 0.0f) ? 1 - iRec115[1] : iRec115[1]);
			float fTemp153 = static_cast<float>(iRec115[0]) + fTemp74;
			fVec78[0] = fTemp153;
			float fTemp154 = 0.5f * fTemp153;
			fRec114[0] = fRec114[1] + fConst21 * (yc20_get_sample(fTemp154, 10, 0) - fRec114[1]);
			fRec113[0] = fConst22 * (fRec113[1] + (fRec114[0] - fRec114[1]));
			iRec118[0] = (((0.5f * (fTemp85 - fVec42[1])) < 0.0f) ? 1 - iRec118[1] : iRec118[1]);
			float fTemp155 = static_cast<float>(iRec118[0]) + fTemp86;
			fVec79[0] = fTemp155;
			float fTemp156 = 0.5f * fTemp155;
			fRec117[0] = fRec117[1] + fConst21 * (yc20_get_sample(fTemp156, 9, 0) - fRec117[1]);
			fRec116[0] = fConst22 * (fRec116[1] + (fRec117[0] - fRec117[1]));
			iRec121[0] = (((0.5f * (fTemp97 - fVec48[1])) < 0.0f) ? 1 - iRec121[1] : iRec121[1]);
			float fTemp157 = static_cast<float>(iRec121[0]) + fTemp98;
			fVec80[0] = fTemp157;
			float fTemp158 = 0.5f * fTemp157;
			fRec120[0] = fRec120[1] + fConst21 * (yc20_get_sample(fTemp158, 8, 0) - fRec120[1]);
			fRec119[0] = fConst22 * (fRec119[1] + (fRec120[0] - fRec120[1]));
			iRec124[0] = (((0.5f * (fTemp109 - fVec54[1])) < 0.0f) ? 1 - iRec124[1] : iRec124[1]);
			float fTemp159 = static_cast<float>(iRec124[0]) + fTemp110;
			fVec81[0] = fTemp159;
			float fTemp160 = 0.5f * fTemp159;
			fRec123[0] = fRec123[1] + fConst23 * (yc20_get_sample(fTemp160, 7, 0) - fRec123[1]);
			fRec122[0] = fConst22 * (fRec122[1] + (fRec123[0] - fRec123[1]));
			iRec127[0] = (((0.5f * (fTemp121 - fVec60[1])) < 0.0f) ? 1 - iRec127[1] : iRec127[1]);
			float fTemp161 = static_cast<float>(iRec127[0]) + fTemp122;
			fVec82[0] = fTemp161;
			float fTemp162 = 0.5f * fTemp161;
			fRec126[0] = fRec126[1] + fConst23 * (yc20_get_sample(fTemp162, 6, 0) - fRec126[1]);
			fRec125[0] = fConst22 * (fRec125[1] + (fRec126[0] - fRec126[1]));
			iRec130[0] = (((0.5f * (fTemp133 - fVec66[1])) < 0.0f) ? 1 - iRec130[1] : iRec130[1]);
			float fTemp163 = static_cast<float>(iRec130[0]) + fTemp134;
			fVec83[0] = fTemp163;
			float fTemp164 = 0.5f * fTemp163;
			fRec129[0] = fRec129[1] + fConst23 * (yc20_get_sample(fTemp164, 5, 0) - fRec129[1]);
			fRec128[0] = fConst22 * (fRec128[1] + (fRec129[0] - fRec129[1]));
			iRec133[0] = (((0.5f * (fTemp136 - fVec68[1])) < 0.0f) ? 1 - iRec133[1] : iRec133[1]);
			float fTemp165 = static_cast<float>(iRec133[0]) + fTemp137;
			fVec84[0] = fTemp165;
			float fTemp166 = 0.5f * fTemp165;
			fRec132[0] = fRec132[1] + fConst23 * (yc20_get_sample(fTemp166, 4, 0) - fRec132[1]);
			fRec131[0] = fConst22 * (fRec131[1] + (fRec132[0] - fRec132[1]));
			iRec136[0] = (((0.5f * (fTemp139 - fVec70[1])) < 0.0f) ? 1 - iRec136[1] : iRec136[1]);
			float fTemp167 = static_cast<float>(iRec136[0]) + fTemp140;
			fVec85[0] = fTemp167;
			float fTemp168 = 0.5f * fTemp167;
			fRec135[0] = fRec135[1] + fConst24 * (yc20_get_sample(fTemp168, 3, 0) - fRec135[1]);
			fRec134[0] = fConst22 * (fRec134[1] + (fRec135[0] - fRec135[1]));
			iRec139[0] = (((0.5f * (fTemp142 - fVec72[1])) < 0.0f) ? 1 - iRec139[1] : iRec139[1]);
			float fTemp169 = static_cast<float>(iRec139[0]) + fTemp143;
			fVec86[0] = fTemp169;
			float fTemp170 = 0.5f * fTemp169;
			fRec138[0] = fRec138[1] + fConst24 * (yc20_get_sample(fTemp170, 2, 0) - fRec138[1]);
			fRec137[0] = fConst22 * (fRec137[1] + (fRec138[0] - fRec138[1]));
			iRec142[0] = (((0.5f * (fTemp145 - fVec74[1])) < 0.0f) ? 1 - iRec142[1] : iRec142[1]);
			float fTemp171 = static_cast<float>(iRec142[0]) + fTemp146;
			fVec87[0] = fTemp171;
			float fTemp172 = 0.5f * fTemp171;
			fRec141[0] = fRec141[1] + fConst24 * (yc20_get_sample(fTemp172, 1, 0) - fRec141[1]);
			fRec140[0] = fConst22 * (fRec140[1] + (fRec141[0] - fRec141[1]));
			iRec145[0] = (((0.5f * (fTemp148 - fVec76[1])) < 0.0f) ? 1 - iRec145[1] : iRec145[1]);
			float fTemp173 = static_cast<float>(iRec145[0]) + fTemp149;
			fVec88[0] = fTemp173;
			float fTemp174 = 0.5f * fTemp173;
			fRec144[0] = fRec144[1] + fConst24 * (yc20_get_sample(fTemp174, 0, 0) - fRec144[1]);
			fRec143[0] = fConst22 * (fRec143[1] + (fRec144[0] - fRec144[1]));
			float fTemp175 = fRec143[0] * fTemp147 + fRec140[0] * fTemp144 + fRec137[0] * fTemp141 + fRec134[0] * fTemp138 + fRec131[0] * fTemp135 + fRec128[0] * fTemp123 + fRec125[0] * fTemp111 + fRec122[0] * fTemp99 + fRec119[0] * fTemp87 + fRec116[0] * fTemp75 + fRec113[0] * fTemp63 + fRec110[0] * fTemp51 + fRec107[0] * fTemp41 + fRec104[0] * fTemp31 + fRec101[0] * fTemp21 + fRec98[0] * fTemp11 + fRec95[0] * fTemp0;
			iRec148[0] = (((0.5f * (fTemp151 - fVec77[1])) < 0.0f) ? 1 - iRec148[1] : iRec148[1]);
			fRec147[0] = fRec147[1] + fConst24 * (yc20_get_sample(0.5f * (static_cast<float>(iRec148[0]) + fTemp152), 11, 0) - fRec147[1]);
			fRec146[0] = fConst25 * (fRec146[1] + (fRec147[0] - fRec147[1]));
			iRec151[0] = (((0.5f * (fTemp153 - fVec78[1])) < 0.0f) ? 1 - iRec151[1] : iRec151[1]);
			fRec150[0] = fRec150[1] + fConst24 * (yc20_get_sample(0.5f * (static_cast<float>(iRec151[0]) + fTemp154), 10, 0) - fRec150[1]);
			fRec149[0] = fConst25 * (fRec149[1] + (fRec150[0] - fRec150[1]));
			iRec154[0] = (((0.5f * (fTemp155 - fVec79[1])) < 0.0f) ? 1 - iRec154[1] : iRec154[1]);
			fRec153[0] = fRec153[1] + fConst24 * (yc20_get_sample(0.5f * (static_cast<float>(iRec154[0]) + fTemp156), 9, 0) - fRec153[1]);
			fRec152[0] = fConst25 * (fRec152[1] + (fRec153[0] - fRec153[1]));
			iRec157[0] = (((0.5f * (fTemp157 - fVec80[1])) < 0.0f) ? 1 - iRec157[1] : iRec157[1]);
			fRec156[0] = fRec156[1] + fConst24 * (yc20_get_sample(0.5f * (static_cast<float>(iRec157[0]) + fTemp158), 8, 0) - fRec156[1]);
			fRec155[0] = fConst25 * (fRec155[1] + (fRec156[0] - fRec156[1]));
			iRec160[0] = (((0.5f * (fTemp159 - fVec81[1])) < 0.0f) ? 1 - iRec160[1] : iRec160[1]);
			fRec159[0] = fRec159[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec160[0]) + fTemp160), 7, 0) - fRec159[1]);
			fRec158[0] = fConst25 * (fRec158[1] + (fRec159[0] - fRec159[1]));
			iRec163[0] = (((0.5f * (fTemp161 - fVec82[1])) < 0.0f) ? 1 - iRec163[1] : iRec163[1]);
			fRec162[0] = fRec162[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec163[0]) + fTemp162), 6, 0) - fRec162[1]);
			fRec161[0] = fConst25 * (fRec161[1] + (fRec162[0] - fRec162[1]));
			iRec166[0] = (((0.5f * (fTemp163 - fVec83[1])) < 0.0f) ? 1 - iRec166[1] : iRec166[1]);
			fRec165[0] = fRec165[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec166[0]) + fTemp164), 5, 0) - fRec165[1]);
			fRec164[0] = fConst25 * (fRec164[1] + (fRec165[0] - fRec165[1]));
			iRec169[0] = (((0.5f * (fTemp165 - fVec84[1])) < 0.0f) ? 1 - iRec169[1] : iRec169[1]);
			fRec168[0] = fRec168[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec169[0]) + fTemp166), 4, 0) - fRec168[1]);
			fRec167[0] = fConst25 * (fRec167[1] + (fRec168[0] - fRec168[1]));
			iRec172[0] = (((0.5f * (fTemp167 - fVec85[1])) < 0.0f) ? 1 - iRec172[1] : iRec172[1]);
			fRec171[0] = fRec171[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec172[0]) + fTemp168), 3, 0) - fRec171[1]);
			fRec170[0] = fConst25 * (fRec170[1] + (fRec171[0] - fRec171[1]));
			iRec175[0] = (((0.5f * (fTemp169 - fVec86[1])) < 0.0f) ? 1 - iRec175[1] : iRec175[1]);
			fRec174[0] = fRec174[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec175[0]) + fTemp170), 2, 0) - fRec174[1]);
			fRec173[0] = fConst25 * (fRec173[1] + (fRec174[0] - fRec174[1]));
			iRec178[0] = (((0.5f * (fTemp171 - fVec87[1])) < 0.0f) ? 1 - iRec178[1] : iRec178[1]);
			fRec177[0] = fRec177[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec178[0]) + fTemp172), 1, 0) - fRec177[1]);
			fRec176[0] = fConst25 * (fRec176[1] + (fRec177[0] - fRec177[1]));
			iRec181[0] = (((0.5f * (fTemp173 - fVec88[1])) < 0.0f) ? 1 - iRec181[1] : iRec181[1]);
			fRec180[0] = fRec180[1] + fConst26 * (yc20_get_sample(0.5f * (static_cast<float>(iRec181[0]) + fTemp174), 0, 0) - fRec180[1]);
			fRec179[0] = fConst25 * (fRec179[1] + (fRec180[0] - fRec180[1]));
			float fTemp176 = fRec179[0] * fTemp147 + fRec176[0] * fTemp144 + fRec173[0] * fTemp141 + fRec170[0] * fTemp138 + fRec167[0] * fTemp135 + fRec164[0] * fTemp123 + fRec161[0] * fTemp111 + fRec158[0] * fTemp99 + fRec155[0] * fTemp87 + fRec152[0] * fTemp75 + fRec149[0] * fTemp63 + fRec146[0] * fTemp51 + fRec143[0] * fTemp41 + fRec140[0] * fTemp31 + fRec137[0] * fTemp21 + fRec134[0] * fTemp11 + fRec131[0] * fTemp0;
			fRec2[0] = fRec2[1] + fConst27 * (fSlow40 * (fSlow39 * (0.25f * fTemp175 + 0.125f * fTemp150) + fSlow37 * (0.25f * fTemp176 + 0.125f * fTemp175 + 0.0625f * fTemp150)) - fRec2[1]);
			int iTemp177 = iRec185[1] < iConst28;
			iRec187[0] = 1103515245 * iRec187[1] + 12345;
			fVec89[0] = fSlow42;
			float fTemp178 = fSlow42 + fVec89[3] + fVec89[1] + fVec89[2];
			float fTemp179 = yc20_get_sample(fRec35[0], 0, 0);
			fVec90[0] = fTemp179;
			fRec188[0] = fConst29 * (0.0073745456f * fRec188[1] + 0.014380364f * (fTemp179 - fVec90[1]));
			float fTemp180 = fRec188[0] * fTemp178;
			fVec91[0] = fSlow43;
			float fTemp181 = fSlow43 + fVec91[3] + fVec91[1] + fVec91[2];
			float fTemp182 = yc20_get_sample(fRec42[0], 11, 0);
			fVec92[0] = fTemp182;
			fRec189[0] = fConst29 * (0.0073745456f * fRec189[1] + 0.014380364f * (fTemp182 - fVec92[1]));
			float fTemp183 = fRec189[0] * fTemp181;
			fVec93[0] = fSlow44;
			float fTemp184 = fSlow44 + fVec93[3] + fVec93[1] + fVec93[2];
			float fTemp185 = yc20_get_sample(fRec50[0], 10, 0);
			fVec94[0] = fTemp185;
			fRec190[0] = fConst29 * (0.0073745456f * fRec190[1] + 0.014380364f * (fTemp185 - fVec94[1]));
			float fTemp186 = fRec190[0] * fTemp184;
			fVec95[0] = fSlow45;
			float fTemp187 = fSlow45 + fVec95[3] + fVec95[1] + fVec95[2];
			float fTemp188 = yc20_get_sample(fRec58[0], 9, 0);
			fVec96[0] = fTemp188;
			fRec191[0] = fConst29 * (0.0073745456f * fRec191[1] + 0.014380364f * (fTemp188 - fVec96[1]));
			float fTemp189 = fRec191[0] * fTemp187;
			fVec97[0] = fSlow46;
			float fTemp190 = fSlow46 + fVec97[3] + fVec97[1] + fVec97[2];
			float fTemp191 = yc20_get_sample(fRec66[0], 8, 0);
			fVec98[0] = fTemp191;
			fRec192[0] = fConst29 * (0.0073745456f * fRec192[1] + 0.014380364f * (fTemp191 - fVec98[1]));
			float fTemp192 = fRec192[0] * fTemp190;
			fVec99[0] = fSlow47;
			float fTemp193 = fSlow47 + fVec99[3] + fVec99[1] + fVec99[2];
			float fTemp194 = yc20_get_sample(fRec74[0], 7, 0);
			fVec100[0] = fTemp194;
			fRec193[0] = fConst29 * (0.0073745456f * fRec193[1] + 0.014380364f * (fTemp194 - fVec100[1]));
			float fTemp195 = fRec193[0] * fTemp193;
			fVec101[0] = fSlow48;
			float fTemp196 = fSlow48 + fVec101[3] + fVec101[1] + fVec101[2];
			float fTemp197 = yc20_get_sample(fRec82[0], 6, 0);
			fVec102[0] = fTemp197;
			fRec194[0] = fConst29 * (0.0073745456f * fRec194[1] + 0.014380364f * (fTemp197 - fVec102[1]));
			float fTemp198 = fRec194[0] * fTemp196;
			fVec103[0] = fSlow49;
			float fTemp199 = fSlow49 + fVec103[3] + fVec103[1] + fVec103[2];
			float fTemp200 = yc20_get_sample(fRec90[0], 5, 0);
			fVec104[0] = fTemp200;
			fRec195[0] = fConst29 * (0.0073745456f * fRec195[1] + 0.014380364f * (fTemp200 - fVec104[1]));
			float fTemp201 = fRec195[0] * fTemp199;
			fVec105[0] = fSlow50;
			float fTemp202 = fSlow50 + fVec105[3] + fVec105[1] + fVec105[2];
			float fTemp203 = yc20_get_sample(fRec6[0], 4, 0);
			fVec106[0] = fTemp203;
			fRec196[0] = fConst29 * (0.0073745456f * fRec196[1] + 0.014380364f * (fTemp203 - fVec106[1]));
			float fTemp204 = fRec196[0] * fTemp202;
			fVec107[0] = fSlow51;
			float fTemp205 = fSlow51 + fVec107[3] + fVec107[1] + fVec107[2];
			float fTemp206 = yc20_get_sample(fRec14[0], 3, 0);
			fVec108[0] = fTemp206;
			fRec197[0] = fConst29 * (0.0073745456f * fRec197[1] + 0.014380364f * (fTemp206 - fVec108[1]));
			float fTemp207 = fRec197[0] * fTemp205;
			fVec109[0] = fSlow52;
			float fTemp208 = fSlow52 + fVec109[3] + fVec109[1] + fVec109[2];
			float fTemp209 = yc20_get_sample(fRec21[0], 2, 0);
			fVec110[0] = fTemp209;
			fRec198[0] = fConst29 * (0.0073745456f * fRec198[1] + 0.014380364f * (fTemp209 - fVec110[1]));
			float fTemp210 = fRec198[0] * fTemp208;
			fVec111[0] = fSlow53;
			float fTemp211 = fSlow53 + fVec111[3] + fVec111[1] + fVec111[2];
			float fTemp212 = yc20_get_sample(fRec28[0], 1, 0);
			fVec112[0] = fTemp212;
			fRec199[0] = fConst29 * (0.0073745456f * fRec199[1] + 0.014380364f * (fTemp212 - fVec112[1]));
			float fTemp213 = fRec199[0] * fTemp211;
			fVec113[0] = fSlow54;
			float fTemp214 = fSlow54 + fVec113[3] + fVec113[1] + fVec113[2];
			float fTemp215 = fRec188[0] * fTemp214;
			fVec114[0] = fSlow55;
			float fTemp216 = fSlow55 + fVec114[3] + fVec114[1] + fVec114[2];
			fVec115[0] = fSlow56;
			float fTemp217 = fSlow56 + fVec115[3] + fVec115[1] + fVec115[2];
			fVec116[0] = fSlow57;
			float fTemp218 = fSlow57 + fVec116[3] + fVec116[1] + fVec116[2];
			fVec117[0] = fSlow58;
			float fTemp219 = fSlow58 + fVec117[3] + fVec117[1] + fVec117[2];
			fVec118[0] = fSlow59;
			float fTemp220 = fSlow59 + fVec118[3] + fVec118[1] + fVec118[2];
			fVec119[0] = fSlow60;
			float fTemp221 = fSlow60 + fVec119[3] + fVec119[1] + fVec119[2];
			fVec120[0] = fSlow61;
			float fTemp222 = fSlow61 + fVec120[3] + fVec120[1] + fVec120[2];
			fVec121[0] = fSlow62;
			float fTemp223 = fSlow62 + fVec121[3] + fVec121[1] + fVec121[2];
			fVec122[0] = fSlow63;
			float fTemp224 = fSlow63 + fVec122[3] + fVec122[1] + fVec122[2];
			fVec123[0] = fSlow64;
			float fTemp225 = fSlow64 + fVec123[3] + fVec123[1] + fVec123[2];
			fVec124[0] = fSlow65;
			float fTemp226 = fSlow65 + fVec124[3] + fVec124[1] + fVec124[2];
			fVec125[0] = fSlow66;
			float fTemp227 = fSlow66 + fVec125[3] + fVec125[1] + fVec125[2];
			fVec126[0] = fSlow67;
			float fTemp228 = fSlow67 + fVec126[3] + fVec126[1] + fVec126[2];
			fRec201[0] = fRec201[1] + fConst30 * (yc20_get_sample(fTemp54, 11, 0) - fRec201[1]);
			fRec200[0] = fConst5 * (fRec200[1] + (fRec201[0] - fRec201[1]));
			fVec127[0] = fSlow68;
			float fTemp229 = fSlow68 + fVec127[3] + fVec127[1] + fVec127[2];
			fRec203[0] = fRec203[1] + fConst30 * (yc20_get_sample(fTemp66, 10, 0) - fRec203[1]);
			fRec202[0] = fConst5 * (fRec202[1] + (fRec203[0] - fRec203[1]));
			fVec128[0] = fSlow69;
			float fTemp230 = fSlow69 + fVec128[3] + fVec128[1] + fVec128[2];
			fRec205[0] = fRec205[1] + fConst30 * (yc20_get_sample(fTemp78, 9, 0) - fRec205[1]);
			fRec204[0] = fConst5 * (fRec204[1] + (fRec205[0] - fRec205[1]));
			fVec129[0] = fSlow70;
			float fTemp231 = fSlow70 + fVec129[3] + fVec129[1] + fVec129[2];
			fRec207[0] = fRec207[1] + fConst30 * (yc20_get_sample(fTemp90, 8, 0) - fRec207[1]);
			fRec206[0] = fConst5 * (fRec206[1] + (fRec207[0] - fRec207[1]));
			fVec130[0] = fSlow71;
			float fTemp232 = fSlow71 + fVec130[3] + fVec130[1] + fVec130[2];
			fRec209[0] = fRec209[1] + fConst31 * (yc20_get_sample(fTemp102, 7, 0) - fRec209[1]);
			fRec208[0] = fConst5 * (fRec208[1] + (fRec209[0] - fRec209[1]));
			fVec131[0] = fSlow72;
			float fTemp233 = fSlow72 + fVec131[3] + fVec131[1] + fVec131[2];
			fRec211[0] = fRec211[1] + fConst31 * (yc20_get_sample(fTemp114, 6, 0) - fRec211[1]);
			fRec210[0] = fConst5 * (fRec210[1] + (fRec211[0] - fRec211[1]));
			fVec132[0] = fSlow73;
			float fTemp234 = fSlow73 + fVec132[3] + fVec132[1] + fVec132[2];
			fRec213[0] = fRec213[1] + fConst31 * (yc20_get_sample(fTemp126, 5, 0) - fRec213[1]);
			fRec212[0] = fConst5 * (fRec212[1] + (fRec213[0] - fRec213[1]));
			fVec133[0] = fSlow74;
			float fTemp235 = fSlow74 + fVec133[3] + fVec133[1] + fVec133[2];
			fRec215[0] = fRec215[1] + fConst31 * (yc20_get_sample(fTemp4, 4, 0) - fRec215[1]);
			fRec214[0] = fConst5 * (fRec214[1] + (fRec215[0] - fRec215[1]));
			fVec134[0] = fSlow75;
			float fTemp236 = fSlow75 + fVec134[3] + fVec134[1] + fVec134[2];
			fRec217[0] = fRec217[1] + fConst32 * (yc20_get_sample(fTemp14, 3, 0) - fRec217[1]);
			fRec216[0] = fConst5 * (fRec216[1] + (fRec217[0] - fRec217[1]));
			fVec135[0] = fSlow76;
			float fTemp237 = fSlow76 + fVec135[3] + fVec135[1] + fVec135[2];
			fRec219[0] = fRec219[1] + fConst32 * (yc20_get_sample(fTemp24, 2, 0) - fRec219[1]);
			fRec218[0] = fConst5 * (fRec218[1] + (fRec219[0] - fRec219[1]));
			fVec136[0] = fSlow77;
			float fTemp238 = fSlow77 + fVec136[3] + fVec136[1] + fVec136[2];
			fRec221[0] = fRec221[1] + fConst32 * (yc20_get_sample(fTemp34, 1, 0) - fRec221[1]);
			fRec220[0] = fConst5 * (fRec220[1] + (fRec221[0] - fRec221[1]));
			fVec137[0] = fSlow78;
			float fTemp239 = fSlow78 + fVec137[3] + fVec137[1] + fVec137[2];
			fRec223[0] = fRec223[1] + fConst32 * (yc20_get_sample(fTemp44, 0, 0) - fRec223[1]);
			fRec222[0] = fConst5 * (fRec222[1] + (fRec223[0] - fRec223[1]));
			fVec138[0] = fSlow79;
			float fTemp240 = fSlow79 + fVec138[3] + fVec138[1] + fVec138[2];
			fRec225[0] = fRec225[1] + fConst33 * (yc20_get_sample(fTemp56, 11, 0) - fRec225[1]);
			fRec224[0] = fConst5 * (fRec224[1] + (fRec225[0] - fRec225[1]));
			fVec139[0] = fSlow80;
			float fTemp241 = fSlow80 + fVec139[3] + fVec139[1] + fVec139[2];
			fRec227[0] = fRec227[1] + fConst33 * (yc20_get_sample(fTemp68, 10, 0) - fRec227[1]);
			fRec226[0] = fConst5 * (fRec226[1] + (fRec227[0] - fRec227[1]));
			fVec140[0] = fSlow81;
			float fTemp242 = fSlow81 + fVec140[3] + fVec140[1] + fVec140[2];
			fRec229[0] = fRec229[1] + fConst33 * (yc20_get_sample(fTemp80, 9, 0) - fRec229[1]);
			fRec228[0] = fConst5 * (fRec228[1] + (fRec229[0] - fRec229[1]));
			fVec141[0] = fSlow82;
			float fTemp243 = fSlow82 + fVec141[3] + fVec141[1] + fVec141[2];
			fRec231[0] = fRec231[1] + fConst33 * (yc20_get_sample(fTemp92, 8, 0) - fRec231[1]);
			fRec230[0] = fConst5 * (fRec230[1] + (fRec231[0] - fRec231[1]));
			fVec142[0] = fSlow83;
			float fTemp244 = fSlow83 + fVec142[3] + fVec142[1] + fVec142[2];
			fRec233[0] = fRec233[1] + fConst34 * (yc20_get_sample(fTemp104, 7, 0) - fRec233[1]);
			fRec232[0] = fConst5 * (fRec232[1] + (fRec233[0] - fRec233[1]));
			fVec143[0] = fSlow84;
			float fTemp245 = fSlow84 + fVec143[3] + fVec143[1] + fVec143[2];
			fRec235[0] = fRec235[1] + fConst34 * (yc20_get_sample(fTemp116, 6, 0) - fRec235[1]);
			fRec234[0] = fConst5 * (fRec234[1] + (fRec235[0] - fRec235[1]));
			fVec144[0] = fSlow85;
			float fTemp246 = fSlow85 + fVec144[3] + fVec144[1] + fVec144[2];
			fRec237[0] = fRec237[1] + fConst34 * (yc20_get_sample(fTemp128, 5, 0) - fRec237[1]);
			fRec236[0] = fConst5 * (fRec236[1] + (fRec237[0] - fRec237[1]));
			fRec239[0] = fRec239[1] + fConst34 * (yc20_get_sample(fTemp6, 4, 0) - fRec239[1]);
			fRec238[0] = fConst5 * (fRec238[1] + (fRec239[0] - fRec239[1]));
			fRec241[0] = fRec241[1] + fConst35 * (yc20_get_sample(fTemp16, 3, 0) - fRec241[1]);
			fRec240[0] = fConst5 * (fRec240[1] + (fRec241[0] - fRec241[1]));
			fRec243[0] = fRec243[1] + fConst35 * (yc20_get_sample(fTemp26, 2, 0) - fRec243[1]);
			fRec242[0] = fConst5 * (fRec242[1] + (fRec243[0] - fRec243[1]));
			fRec245[0] = fRec245[1] + fConst35 * (yc20_get_sample(fTemp36, 1, 0) - fRec245[1]);
			fRec244[0] = fConst5 * (fRec244[1] + (fRec245[0] - fRec245[1]));
			fRec247[0] = fRec247[1] + fConst35 * (yc20_get_sample(fTemp46, 0, 0) - fRec247[1]);
			fRec246[0] = fConst5 * (fRec246[1] + (fRec247[0] - fRec247[1]));
			fRec249[0] = fRec249[1] + fConst36 * (yc20_get_sample(fTemp58, 11, 0) - fRec249[1]);
			fRec248[0] = fConst5 * (fRec248[1] + (fRec249[0] - fRec249[1]));
			fRec251[0] = fRec251[1] + fConst36 * (yc20_get_sample(fTemp70, 10, 0) - fRec251[1]);
			fRec250[0] = fConst5 * (fRec250[1] + (fRec251[0] - fRec251[1]));
			fRec253[0] = fRec253[1] + fConst36 * (yc20_get_sample(fTemp82, 9, 0) - fRec253[1]);
			fRec252[0] = fConst5 * (fRec252[1] + (fRec253[0] - fRec253[1]));
			fRec255[0] = fRec255[1] + fConst36 * (yc20_get_sample(fTemp94, 8, 0) - fRec255[1]);
			fRec254[0] = fConst5 * (fRec254[1] + (fRec255[0] - fRec255[1]));
			fRec257[0] = fRec257[1] + fConst37 * (yc20_get_sample(fTemp106, 7, 0) - fRec257[1]);
			fRec256[0] = fConst5 * (fRec256[1] + (fRec257[0] - fRec257[1]));
			fRec259[0] = fRec259[1] + fConst37 * (yc20_get_sample(fTemp118, 6, 0) - fRec259[1]);
			fRec258[0] = fConst5 * (fRec258[1] + (fRec259[0] - fRec259[1]));
			fRec261[0] = fRec261[1] + fConst37 * (yc20_get_sample(fTemp130, 5, 0) - fRec261[1]);
			fRec260[0] = fConst5 * (fRec260[1] + (fRec261[0] - fRec261[1]));
			fRec263[0] = fRec263[1] + fConst37 * (yc20_get_sample(fTemp8, 4, 0) - fRec263[1]);
			fRec262[0] = fConst5 * (fRec262[1] + (fRec263[0] - fRec263[1]));
			fRec265[0] = fRec265[1] + fConst38 * (yc20_get_sample(fTemp18, 3, 0) - fRec265[1]);
			fRec264[0] = fConst5 * (fRec264[1] + (fRec265[0] - fRec265[1]));
			fRec267[0] = fRec267[1] + fConst38 * (yc20_get_sample(fTemp28, 2, 0) - fRec267[1]);
			fRec266[0] = fConst5 * (fRec266[1] + (fRec267[0] - fRec267[1]));
			fRec269[0] = fRec269[1] + fConst38 * (yc20_get_sample(fTemp38, 1, 0) - fRec269[1]);
			fRec268[0] = fConst5 * (fRec268[1] + (fRec269[0] - fRec269[1]));
			fRec271[0] = fRec271[1] + fConst38 * (yc20_get_sample(fTemp48, 0, 0) - fRec271[1]);
			fRec270[0] = fConst5 * (fRec270[1] + (fRec271[0] - fRec271[1]));
			float fTemp247 = 0.25f * (fSlow86 * (fRec270[0] * fTemp147 + fRec268[0] * fTemp144 + fRec266[0] * fTemp141 + fRec264[0] * fTemp138 + fRec262[0] * fTemp135 + fRec260[0] * fTemp123 + fRec258[0] * fTemp111 + fRec256[0] * fTemp99 + fRec254[0] * fTemp87 + fRec252[0] * fTemp75 + fRec250[0] * fTemp63 + fRec248[0] * fTemp51 + fRec246[0] * fTemp41 + fRec244[0] * fTemp31 + fRec242[0] * fTemp21 + fRec240[0] * fTemp11 + fRec238[0] * fTemp0) + fRec236[0] * fTemp246 + fRec234[0] * fTemp245 + fRec232[0] * fTemp244 + fRec230[0] * fTemp243 + fRec228[0] * fTemp242 + fRec226[0] * fTemp241 + fRec224[0] * fTemp240 + fRec222[0] * fTemp239 + fRec220[0] * fTemp238 + fRec218[0] * fTemp237 + fRec216[0] * fTemp236 + fRec214[0] * fTemp235 + fRec212[0] * fTemp234 + fRec210[0] * fTemp233 + fRec208[0] * fTemp232 + fRec206[0] * fTemp231 + fRec204[0] * fTemp230 + fRec202[0] * fTemp229 + fRec200[0] * fTemp228 + fRec188[0] * fTemp227 + fRec199[0] * fTemp226 + fRec198[0] * fTemp225 + fRec197[0] * fTemp224 + fRec196[0] * fTemp223 + fRec195[0] * fTemp222 + fRec194[0] * fTemp221 + fRec193[0] * fTemp220 + fRec192[0] * fTemp219 + fRec191[0] * fTemp218 + fRec190[0] * fTemp217 + fRec189[0] * fTemp216 + fTemp215 + fTemp213 + fTemp210 + fTemp207 + fTemp204 + fTemp201 + fTemp198 + fTemp195 + fTemp192 + fTemp189 + fTemp186 + fTemp183 + fTemp180);
			float fTemp248 = fRec196[0] + fRec197[0] + fRec198[0] + fRec188[0] + fRec199[0];
			float fTemp249 = fRec262[0] + fRec264[0] + fRec266[0] + fRec270[0] + fRec268[0];
			float fTemp250 = fRec254[0] + fRec256[0] + fRec258[0] + fRec260[0] + fTemp249;
			float fTemp251 = fRec246[0] + fRec248[0] + fRec250[0] + fRec252[0] + fTemp250;
			float fTemp252 = fRec238[0] + fRec240[0] + fRec242[0] + fRec244[0] + fTemp251;
			float fTemp253 = fSlow86 * fTemp252 + fRec188[0] + fRec200[0] + fRec202[0] + fRec204[0] + fRec206[0] + fRec208[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec224[0] + fRec226[0] + fRec228[0] + fRec230[0] + fRec232[0] + fRec236[0] + fRec234[0] + 2.0f * (fRec189[0] + fRec190[0] + fRec191[0] + fRec192[0] + fRec193[0] + fRec194[0] + fRec195[0] + fTemp248);
			fVec145[0] = fTemp253 - fTemp247;
			fRec272[0] = fConst39 * (fRec272[1] + (fTemp253 - (fTemp247 + fVec145[1])));
			float fTemp254 = 0.002f * fSlow87 * fRec272[0];
			float fTemp255 = mydsp_faustpower2_f(std::min<float>(1.0f, std::max<float>(-1.0f, fTemp254 + fTemp247 + 4.656613e-16f * static_cast<float>(iRec187[0]))));
			fRec184[0] = ((iTemp177) ? fTemp255 + fRec184[1] : fTemp255);
			iRec185[0] = ((iTemp177) ? iRec185[1] + 1 : 1);
			fRec186[0] = ((iTemp177) ? fRec186[1] : fRec184[1]);
			float fTemp256 = std::log10(std::sqrt(fConst40 * fRec186[0]));
			fVec146[0] = fTemp256;
			float fTemp257 = 2e+01f * fVec146[1];
			float fTemp258 = 2e+01f * fTemp256;
			fRec183[0] = std::min<float>(1.0f, std::max<float>(0.0f, fRec183[1] + ((fTemp258 > -25.0f) ? ((fTemp257 < -25.0f) ? 1.0f : 0.0f) : 0.0f) - ((fTemp257 > -35.0f) ? ((fTemp258 < -35.0f) ? 1.0f : 0.0f) : 0.0f)));
			fRec182[0] = fConst42 * fRec182[1] + fConst41 * ((fRec183[0] > 0.5f) ? ((fRec183[1] < 0.5f) ? 1.0f : 0.0f) : 0.0f);
			float fTemp259 = std::min<float>(1.0f, fConst43 * fRec182[0]);
			fVec147[0] = fTemp259;
			fRec275[0] = fRec275[1] + fConst44 * (yc20_get_sample(fTemp60, 11, 0) - fRec275[1]);
			fRec274[0] = fConst5 * (fRec274[1] + (fRec275[0] - fRec275[1]));
			fRec277[0] = fRec277[1] + fConst44 * (yc20_get_sample(fTemp72, 10, 0) - fRec277[1]);
			fRec276[0] = fConst5 * (fRec276[1] + (fRec277[0] - fRec277[1]));
			fRec279[0] = fRec279[1] + fConst44 * (yc20_get_sample(fTemp84, 9, 0) - fRec279[1]);
			fRec278[0] = fConst5 * (fRec278[1] + (fRec279[0] - fRec279[1]));
			fRec281[0] = fRec281[1] + fConst44 * (yc20_get_sample(fTemp96, 8, 0) - fRec281[1]);
			fRec280[0] = fConst5 * (fRec280[1] + (fRec281[0] - fRec281[1]));
			fRec283[0] = fRec283[1] + fConst3 * (yc20_get_sample(fTemp108, 7, 0) - fRec283[1]);
			fRec282[0] = fConst5 * (fRec282[1] + (fRec283[0] - fRec283[1]));
			fRec285[0] = fRec285[1] + fConst3 * (yc20_get_sample(fTemp120, 6, 0) - fRec285[1]);
			fRec284[0] = fConst5 * (fRec284[1] + (fRec285[0] - fRec285[1]));
			fRec287[0] = fRec287[1] + fConst3 * (yc20_get_sample(fTemp132, 5, 0) - fRec287[1]);
			fRec286[0] = fConst5 * (fRec286[1] + (fRec287[0] - fRec287[1]));
			float fTemp260 = 0.41975f * (fSlow86 * fTemp176 + fRec128[0] * fTemp246 + fRec125[0] * fTemp245 + fRec122[0] * fTemp244 + fRec119[0] * fTemp243 + fRec116[0] * fTemp242 + fRec113[0] * fTemp241 + fRec110[0] * fTemp240 + fRec107[0] * fTemp239 + fRec104[0] * fTemp238 + fRec101[0] * fTemp237 + fRec98[0] * fTemp236 + fRec95[0] * fTemp235 + fRec87[0] * fTemp234 + fRec79[0] * fTemp233 + fRec71[0] * fTemp232 + fRec63[0] * fTemp231 + fRec55[0] * fTemp230 + fRec47[0] * fTemp229 + fRec39[0] * fTemp228 + fRec32[0] * fTemp227 + fRec25[0] * fTemp226 + fRec18[0] * fTemp225 + fRec11[0] * fTemp224 + fRec3[0] * fTemp223 + fRec286[0] * fTemp222 + fRec284[0] * fTemp221 + fRec282[0] * fTemp220 + fRec280[0] * fTemp219 + fRec278[0] * fTemp218 + fRec276[0] * fTemp217 + fRec274[0] * fTemp216 + fRec270[0] * fTemp214 + fRec268[0] * fTemp211 + fRec266[0] * fTemp208 + fRec264[0] * fTemp205 + fRec262[0] * fTemp202 + fRec260[0] * fTemp199 + fRec258[0] * fTemp196 + fRec256[0] * fTemp193 + fRec254[0] * fTemp190 + fRec252[0] * fTemp187 + fRec250[0] * fTemp184 + fRec248[0] * fTemp181 + fRec246[0] * fTemp178);
			float fTemp261 = 1.679f * (fSlow86 * (fRec146[0] + fRec149[0] + fRec152[0] + fRec155[0] + fRec158[0] + fRec161[0] + fRec164[0] + fRec167[0] + fRec170[0] + fRec173[0] + fRec176[0] + fRec179[0] + fRec131[0] + fRec134[0] + fRec137[0] + fRec143[0] + fRec140[0]) + fRec110[0] + fRec113[0] + fRec116[0] + fRec119[0] + fRec122[0] + fRec125[0] + fRec128[0] + fRec79[0] + fRec87[0] + fRec95[0] + fRec98[0] + fRec101[0] + fRec104[0] + fRec107[0] + fRec39[0] + fRec47[0] + fRec55[0] + fRec63[0] + fRec71[0] + fRec11[0] + fRec18[0] + fRec25[0] + fRec32[0] + fRec274[0] + fRec276[0] + fRec278[0] + fRec280[0] + fRec282[0] + fRec284[0] + fRec286[0] + fRec3[0] + fTemp251);
			fVec148[0] = fTemp261 - fTemp260;
			fRec273[0] = fConst39 * (fRec273[1] + (fTemp261 - (fTemp260 + fVec148[1])));
			float fTemp262 = fTemp260 + 0.002f * fSlow87 * fRec273[0];
			float fTemp263 = fSlow86 * (fRec71[0] * fTemp147 + fRec63[0] * fTemp144 + fRec55[0] * fTemp141 + fRec47[0] * fTemp138 + fRec39[0] * fTemp135 + fRec32[0] * fTemp123 + fRec25[0] * fTemp111 + fRec18[0] * fTemp99 + fRec11[0] * fTemp87 + fRec3[0] * fTemp75 + fRec286[0] * fTemp63 + fRec284[0] * fTemp51 + fRec282[0] * fTemp41 + fRec280[0] * fTemp31 + fRec278[0] * fTemp21 + fRec276[0] * fTemp11 + fRec274[0] * fTemp0) + fRec270[0] * fTemp246 + fRec268[0] * fTemp245 + fRec266[0] * fTemp244 + fRec264[0] * fTemp243 + fRec262[0] * fTemp242 + fRec260[0] * fTemp241 + fRec258[0] * fTemp240 + fRec256[0] * fTemp239 + fRec254[0] * fTemp238 + fRec252[0] * fTemp237 + fRec250[0] * fTemp236 + fRec248[0] * fTemp235 + fRec246[0] * fTemp234 + fRec244[0] * fTemp233 + fRec242[0] * fTemp232 + fRec240[0] * fTemp231 + fRec238[0] * fTemp230 + fRec236[0] * fTemp229 + fRec234[0] * fTemp228 + fRec232[0] * fTemp227 + fRec230[0] * fTemp226 + fRec228[0] * fTemp225 + fRec226[0] * fTemp224 + fRec224[0] * fTemp223 + fRec222[0] * fTemp222 + fRec220[0] * fTemp221 + fRec218[0] * fTemp220 + fRec216[0] * fTemp219 + fRec214[0] * fTemp218 + fRec212[0] * fTemp217 + fRec210[0] * fTemp216 + fRec208[0] * fTemp214 + fRec206[0] * fTemp211 + fRec204[0] * fTemp208 + fRec202[0] * fTemp205 + fRec200[0] * fTemp202 + fRec188[0] * fTemp199 + fRec199[0] * fTemp196 + fRec198[0] * fTemp193 + fRec197[0] * fTemp190 + fRec196[0] * fTemp187 + fRec195[0] * fTemp184 + fRec194[0] * fTemp181 + fRec193[0] * fTemp178;
			float fTemp264 = 0.25f * fTemp263;
			float fTemp265 = fRec222[0] + fRec224[0] + fRec226[0] + fRec228[0] + fRec230[0] + fRec232[0] + fRec234[0] + fRec236[0] + fTemp252;
			float fTemp266 = fRec188[0] + fRec200[0] + fRec202[0] + fRec204[0] + fRec206[0] + fRec208[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fTemp265;
			float fTemp267 = fSlow86 * (fRec39[0] + fRec47[0] + fRec55[0] + fRec63[0] + fRec71[0] + fRec11[0] + fRec18[0] + fRec25[0] + fRec32[0] + fRec274[0] + fRec276[0] + fRec278[0] + fRec280[0] + fRec282[0] + fRec284[0] + fRec3[0] + fRec286[0]) + fRec193[0] + fRec194[0] + fRec195[0] + fRec196[0] + fRec197[0] + fRec198[0] + fRec199[0] + fTemp266;
			fVec149[0] = fTemp267 - fTemp264;
			fRec288[0] = fConst39 * (fRec288[1] + (fTemp267 - (fTemp264 + fVec149[1])));
			float fTemp268 = 0.002f * fSlow87 * fRec288[0];
			float fTemp269 = fTemp247 + fTemp254;
			float fTemp270 = fSlow90 * fTemp262;
			fVec150[0] = fTemp270;
			fRec290[0] = fRec290[1] + fConst3 * (fTemp270 - fRec290[1]);
			fRec289[0] = fRec289[1] + fConst3 * (fRec290[0] - fRec289[1]);
			float fTemp271 = 0.25f * (fSlow86 * fTemp175 + fRec87[0] * fTemp246 + fRec79[0] * fTemp245 + fRec71[0] * fTemp244 + fRec63[0] * fTemp243 + fRec55[0] * fTemp242 + fRec47[0] * fTemp241 + fRec39[0] * fTemp240 + fRec32[0] * fTemp239 + fRec25[0] * fTemp238 + fRec18[0] * fTemp237 + fRec11[0] * fTemp236 + fRec3[0] * fTemp235 + fRec286[0] * fTemp234 + fRec284[0] * fTemp233 + fRec282[0] * fTemp232 + fRec280[0] * fTemp231 + fRec278[0] * fTemp230 + fRec276[0] * fTemp229 + fRec274[0] * fTemp228 + fRec270[0] * fTemp227 + fRec268[0] * fTemp226 + fRec266[0] * fTemp225 + fRec264[0] * fTemp224 + fRec262[0] * fTemp223 + fRec260[0] * fTemp222 + fRec258[0] * fTemp221 + fRec256[0] * fTemp220 + fRec254[0] * fTemp219 + fRec252[0] * fTemp218 + fRec250[0] * fTemp217 + fRec248[0] * fTemp216 + fRec246[0] * fTemp214 + fRec244[0] * fTemp211 + fRec242[0] * fTemp208 + fRec240[0] * fTemp205 + fRec238[0] * fTemp202 + fRec236[0] * fTemp199 + fRec234[0] * fTemp196 + fRec232[0] * fTemp193 + fRec230[0] * fTemp190 + fRec228[0] * fTemp187 + fRec226[0] * fTemp184 + fRec224[0] * fTemp181 + fRec222[0] * fTemp178);
			float fTemp272 = fSlow86 * (fRec110[0] + fRec113[0] + fRec116[0] + fRec119[0] + fRec122[0] + fRec125[0] + fRec128[0] + fRec131[0] + fRec134[0] + fRec137[0] + fRec140[0] + fRec143[0] + fRec95[0] + fRec98[0] + fRec101[0] + fRec107[0] + fRec104[0]) + fRec79[0] + fRec87[0] + fRec39[0] + fRec47[0] + fRec55[0] + fRec63[0] + fRec71[0] + fRec11[0] + fRec18[0] + fRec25[0] + fRec32[0] + fRec274[0] + fRec276[0] + fRec278[0] + fRec280[0] + fRec282[0] + fRec284[0] + fRec286[0] + fRec3[0] + fTemp265;
			fVec151[0] = fTemp272 - fTemp271;
			fRec293[0] = fConst39 * (fRec293[1] + (fTemp272 - (fTemp271 + fVec151[1])));
			float fTemp273 = fTemp271 + 0.002f * fSlow87 * fRec293[0];
			float fTemp274 = fSlow92 * fTemp273;
			fVec152[0] = fTemp274;
			fRec292[0] = fRec292[1] + fConst38 * (fTemp274 - fRec292[1]);
			fRec291[0] = fRec291[1] + fConst38 * (fRec292[0] - fRec291[1]);
			float fTemp275 = 0.25f * (fTemp180 + fSlow86 * fTemp150 + fRec286[0] * fTemp246 + fRec284[0] * fTemp245 + fRec282[0] * fTemp244 + fRec280[0] * fTemp243 + fRec278[0] * fTemp242 + fRec276[0] * fTemp241 + fRec274[0] * fTemp240 + fRec270[0] * fTemp239 + fRec268[0] * fTemp238 + fRec266[0] * fTemp237 + fRec264[0] * fTemp236 + fRec262[0] * fTemp235 + fRec260[0] * fTemp234 + fRec258[0] * fTemp233 + fRec256[0] * fTemp232 + fRec254[0] * fTemp231 + fRec252[0] * fTemp230 + fRec250[0] * fTemp229 + fRec248[0] * fTemp228 + fRec246[0] * fTemp227 + fRec244[0] * fTemp226 + fRec242[0] * fTemp225 + fRec240[0] * fTemp224 + fRec238[0] * fTemp223 + fRec236[0] * fTemp222 + fRec234[0] * fTemp221 + fRec232[0] * fTemp220 + fRec230[0] * fTemp219 + fRec228[0] * fTemp218 + fRec226[0] * fTemp217 + fRec224[0] * fTemp216 + fRec222[0] * fTemp214 + fRec220[0] * fTemp211 + fRec218[0] * fTemp208 + fRec216[0] * fTemp205 + fRec214[0] * fTemp202 + fRec212[0] * fTemp199 + fRec210[0] * fTemp196 + fRec208[0] * fTemp193 + fRec206[0] * fTemp190 + fRec204[0] * fTemp187 + fRec202[0] * fTemp184 + fRec200[0] * fTemp181);
			float fTemp276 = fSlow86 * (fRec79[0] + fRec87[0] + fRec95[0] + fRec98[0] + fRec101[0] + fRec104[0] + fRec107[0] + fRec39[0] + fRec47[0] + fRec55[0] + fRec63[0] + fRec71[0] + fRec11[0] + fRec18[0] + fRec25[0] + fRec3[0] + fRec32[0]) + fRec274[0] + fRec276[0] + fRec278[0] + fRec280[0] + fRec282[0] + fRec284[0] + fRec286[0] + fTemp266;
			fVec153[0] = fTemp276 - fTemp275;
			fRec296[0] = fConst39 * (fRec296[1] + (fTemp276 - (fTemp275 + fVec153[1])));
			float fTemp277 = fTemp275 + 0.002f * fSlow87 * fRec296[0];
			float fTemp278 = fSlow94 * fTemp277;
			fVec154[0] = fTemp278;
			fRec295[0] = fRec295[1] + fConst35 * (fTemp278 - fRec295[1]);
			fRec294[0] = fRec294[1] + fConst35 * (fRec295[0] - fRec294[1]);
			float fTemp279 = 0.25f * (fTemp180 + fTemp183 + fTemp186 + fTemp189 + fTemp192 + fTemp195 + fTemp198 + fTemp201 + fTemp204 + fTemp207 + fTemp210 + fTemp213 + fTemp215 + fSlow86 * (fRec32[0] * fTemp147 + fRec25[0] * fTemp144 + fRec18[0] * fTemp141 + fRec11[0] * fTemp138 + fRec3[0] * fTemp135 + fRec286[0] * fTemp123 + fRec284[0] * fTemp111 + fRec282[0] * fTemp99 + fRec280[0] * fTemp87 + fRec278[0] * fTemp75 + fRec276[0] * fTemp63 + fRec274[0] * fTemp51 + fRec270[0] * fTemp41 + fRec268[0] * fTemp31 + fRec266[0] * fTemp21 + fRec264[0] * fTemp11 + fRec262[0] * fTemp0) + fRec260[0] * fTemp246 + fRec258[0] * fTemp245 + fRec256[0] * fTemp244 + fRec254[0] * fTemp243 + fRec252[0] * fTemp242 + fRec250[0] * fTemp241 + fRec248[0] * fTemp240 + fRec246[0] * fTemp239 + fRec244[0] * fTemp238 + fRec242[0] * fTemp237 + fRec240[0] * fTemp236 + fRec238[0] * fTemp235 + fRec236[0] * fTemp234 + fRec234[0] * fTemp233 + fRec232[0] * fTemp232 + fRec230[0] * fTemp231 + fRec228[0] * fTemp230 + fRec226[0] * fTemp229 + fRec224[0] * fTemp228 + fRec222[0] * fTemp227 + fRec220[0] * fTemp226 + fRec218[0] * fTemp225 + fRec216[0] * fTemp224 + fRec214[0] * fTemp223 + fRec212[0] * fTemp222 + fRec210[0] * fTemp221 + fRec208[0] * fTemp220 + fRec206[0] * fTemp219 + fRec204[0] * fTemp218 + fRec202[0] * fTemp217 + fRec200[0] * fTemp216);
			float fTemp280 = fSlow86 * (fRec11[0] + fRec18[0] + fRec25[0] + fRec32[0] + fRec274[0] + fRec276[0] + fRec278[0] + fRec280[0] + fRec282[0] + fRec284[0] + fRec286[0] + fRec3[0] + fTemp249) + fRec189[0] + fRec190[0] + fRec191[0] + fRec192[0] + fRec193[0] + fRec194[0] + fRec195[0] + fRec196[0] + fRec197[0] + fRec198[0] + fRec199[0] + 2.0f * fRec188[0] + fRec200[0] + fRec202[0] + fRec204[0] + fRec206[0] + fRec208[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec224[0] + fRec226[0] + fRec228[0] + fRec230[0] + fRec232[0] + fRec234[0] + fRec236[0] + fRec238[0] + fRec240[0] + fRec242[0] + fRec244[0] + fRec246[0] + fRec248[0] + fRec250[0] + fRec252[0] + fRec254[0] + fRec256[0] + fRec260[0] + fRec258[0];
			fVec155[0] = fTemp280 - fTemp279;
			fRec299[0] = fConst39 * (fRec299[1] + (fTemp280 - (fTemp279 + fVec155[1])));
			float fTemp281 = fTemp279 + 0.002f * fSlow87 * fRec299[0];
			float fTemp282 = fSlow96 * fTemp281;
			fVec156[0] = fTemp282;
			fRec298[0] = fRec298[1] + fConst32 * (fTemp282 - fRec298[1]);
			fRec297[0] = fRec297[1] + fConst32 * (fRec298[0] - fRec297[1]);
			fRec301[0] = fConst45 * (fRec301[1] + (fTemp270 - fVec150[1]));
			float fTemp283 = 0.5416667f * fRec301[0] + fSlow99 * fTemp262;
			fVec157[0] = fTemp283;
			fRec300[0] = fConst46 * (fRec300[1] + (fTemp283 - fVec157[1]));
			fRec303[0] = fConst47 * (fRec303[1] + (fTemp274 - fVec152[1]));
			float fTemp284 = 0.5416667f * fRec303[0] + fSlow100 * fTemp273;
			fVec158[0] = fTemp284;
			fRec302[0] = fConst48 * (fRec302[1] + (fTemp284 - fVec158[1]));
			fRec305[0] = fConst49 * (fRec305[1] + (fTemp278 - fVec154[1]));
			float fTemp285 = 0.5416667f * fRec305[0] + fSlow101 * fTemp277;
			fVec159[0] = fTemp285;
			fRec304[0] = fConst50 * (fRec304[1] + (fTemp285 - fVec159[1]));
			fRec307[0] = fConst51 * (fRec307[1] + (fTemp282 - fVec156[1]));
			float fTemp286 = 0.5416667f * fRec307[0] + fSlow102 * fTemp281;
			fVec160[0] = fTemp286;
			fRec306[0] = fConst52 * (fRec306[1] + (fTemp286 - fVec160[1]));
			float fTemp287 = 0.25f * (fSlow86 * (fRec3[0] * fTemp147 + fRec286[0] * fTemp144 + fRec284[0] * fTemp141 + fRec282[0] * fTemp138 + fRec280[0] * fTemp135 + fRec278[0] * fTemp123 + fRec276[0] * fTemp111 + fRec274[0] * fTemp99 + fRec270[0] * fTemp87 + fRec268[0] * fTemp75 + fRec266[0] * fTemp63 + fRec264[0] * fTemp51 + fRec262[0] * fTemp41 + fRec260[0] * fTemp31 + fRec258[0] * fTemp21 + fRec256[0] * fTemp11 + fRec254[0] * fTemp0) + fRec252[0] * fTemp246 + fRec250[0] * fTemp245 + fRec248[0] * fTemp244 + fRec246[0] * fTemp243 + fRec244[0] * fTemp242 + fRec242[0] * fTemp241 + fRec240[0] * fTemp240 + fRec238[0] * fTemp239 + fRec236[0] * fTemp238 + fRec234[0] * fTemp237 + fRec232[0] * fTemp236 + fRec230[0] * fTemp235 + fRec228[0] * fTemp234 + fRec226[0] * fTemp233 + fRec224[0] * fTemp232 + fRec222[0] * fTemp231 + fRec220[0] * fTemp230 + fRec218[0] * fTemp229 + fRec216[0] * fTemp228 + fRec214[0] * fTemp227 + fRec212[0] * fTemp226 + fRec210[0] * fTemp225 + fRec208[0] * fTemp224 + fRec206[0] * fTemp223 + fRec204[0] * fTemp222 + fRec202[0] * fTemp221 + fRec200[0] * fTemp220 + fRec188[0] * fTemp219 + fRec199[0] * fTemp218 + fRec198[0] * fTemp217 + fRec197[0] * fTemp216 + fRec196[0] * fTemp214 + fRec195[0] * fTemp211 + fRec194[0] * fTemp208 + fRec193[0] * fTemp205 + fRec192[0] * fTemp202 + fRec191[0] * fTemp199 + fRec190[0] * fTemp196 + fRec189[0] * fTemp193 + fRec188[0] * fTemp190 + fRec199[0] * fTemp187 + fRec198[0] * fTemp184 + fRec197[0] * fTemp181 + fRec196[0] * fTemp178);
			float fTemp288 = fSlow86 * (fRec274[0] + fRec276[0] + fRec278[0] + fRec280[0] + fRec282[0] + fRec284[0] + fRec286[0] + fRec3[0] + fTemp250) + 2.0f * fTemp248 + fRec189[0] + fRec190[0] + fRec191[0] + fRec192[0] + fRec193[0] + fRec194[0] + fRec195[0] + fRec200[0] + fRec202[0] + fRec204[0] + fRec206[0] + fRec208[0] + fRec210[0] + fRec212[0] + fRec214[0] + fRec216[0] + fRec218[0] + fRec220[0] + fRec222[0] + fRec224[0] + fRec226[0] + fRec228[0] + fRec230[0] + fRec232[0] + fRec234[0] + fRec236[0] + fRec238[0] + fRec240[0] + fRec242[0] + fRec244[0] + fRec246[0] + fRec248[0] + fRec252[0] + fRec250[0];
			fVec161[0] = fTemp288 - fTemp287;
			fRec308[0] = fConst39 * (fRec308[1] + (fTemp288 - (fTemp287 + fVec161[1])));
			float fTemp289 = (fSlow120 * (fSlow119 * fTemp269 + fSlow117 * (fTemp287 + 0.002f * fSlow87 * fRec308[0]) + fSlow115 * fTemp281 + fSlow113 * (fTemp264 + fTemp268) + fSlow111 * fTemp277 + fSlow109 * fTemp273 + fSlow107 * fTemp262) + fSlow105 * (fSlow103 * (fRec306[0] + fRec304[0] + fRec302[0] + fRec300[0]) + fSlow98 * (fRec297[0] + fRec294[0] + fRec291[0] + fRec289[0])) + fSlow88 * (0.25f * (fTemp269 + fTemp263) + fTemp268 + 0.5f * fTemp262) * std::max<float>(fSlow41, 0.25f * (fTemp259 + fVec147[2] + fVec147[3] + fVec147[4])) + fRec2[0] * (4.5f * fRec1[0] + 0.5f)) * (0.05f * fRec0[0] + 0.001f);
			output0[i0] = static_cast<FAUSTFLOAT>(fTemp289);
			output1[i0] = static_cast<FAUSTFLOAT>(fTemp289);
			fRec0[1] = fRec0[0];
			fRec1[1] = fRec1[0];
			for (int j0 = 3; j0 > 0; j0 = j0 - 1) {
				fVec0[j0] = fVec0[j0 - 1];
			}
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			iRec5[1] = iRec5[0];
			fVec1[1] = fVec1[0];
			iRec8[1] = iRec8[0];
			fVec2[1] = fVec2[0];
			iRec9[1] = iRec9[0];
			fVec3[1] = fVec3[0];
			iRec10[1] = iRec10[0];
			fVec4[1] = fVec4[0];
			fRec4[1] = fRec4[0];
			fRec3[1] = fRec3[0];
			for (int j1 = 3; j1 > 0; j1 = j1 - 1) {
				fVec5[j1] = fVec5[j1 - 1];
			}
			fRec14[1] = fRec14[0];
			iRec13[1] = iRec13[0];
			fVec6[1] = fVec6[0];
			iRec15[1] = iRec15[0];
			fVec7[1] = fVec7[0];
			iRec16[1] = iRec16[0];
			fVec8[1] = fVec8[0];
			iRec17[1] = iRec17[0];
			fVec9[1] = fVec9[0];
			fRec12[1] = fRec12[0];
			fRec11[1] = fRec11[0];
			for (int j2 = 3; j2 > 0; j2 = j2 - 1) {
				fVec10[j2] = fVec10[j2 - 1];
			}
			fRec21[1] = fRec21[0];
			iRec20[1] = iRec20[0];
			fVec11[1] = fVec11[0];
			iRec22[1] = iRec22[0];
			fVec12[1] = fVec12[0];
			iRec23[1] = iRec23[0];
			fVec13[1] = fVec13[0];
			iRec24[1] = iRec24[0];
			fVec14[1] = fVec14[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			for (int j3 = 3; j3 > 0; j3 = j3 - 1) {
				fVec15[j3] = fVec15[j3 - 1];
			}
			fRec28[1] = fRec28[0];
			iRec27[1] = iRec27[0];
			fVec16[1] = fVec16[0];
			iRec29[1] = iRec29[0];
			fVec17[1] = fVec17[0];
			iRec30[1] = iRec30[0];
			fVec18[1] = fVec18[0];
			iRec31[1] = iRec31[0];
			fVec19[1] = fVec19[0];
			fRec26[1] = fRec26[0];
			fRec25[1] = fRec25[0];
			for (int j4 = 3; j4 > 0; j4 = j4 - 1) {
				fVec20[j4] = fVec20[j4 - 1];
			}
			fRec35[1] = fRec35[0];
			iRec34[1] = iRec34[0];
			fVec21[1] = fVec21[0];
			iRec36[1] = iRec36[0];
			fVec22[1] = fVec22[0];
			iRec37[1] = iRec37[0];
			fVec23[1] = fVec23[0];
			iRec38[1] = iRec38[0];
			fVec24[1] = fVec24[0];
			fRec33[1] = fRec33[0];
			fRec32[1] = fRec32[0];
			for (int j5 = 3; j5 > 0; j5 = j5 - 1) {
				fVec25[j5] = fVec25[j5 - 1];
			}
			fRec42[1] = fRec42[0];
			iRec41[1] = iRec41[0];
			fVec26[1] = fVec26[0];
			iRec43[1] = iRec43[0];
			fVec27[1] = fVec27[0];
			iRec44[1] = iRec44[0];
			fVec28[1] = fVec28[0];
			iRec45[1] = iRec45[0];
			fVec29[1] = fVec29[0];
			iRec46[1] = iRec46[0];
			fVec30[1] = fVec30[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			for (int j6 = 3; j6 > 0; j6 = j6 - 1) {
				fVec31[j6] = fVec31[j6 - 1];
			}
			fRec50[1] = fRec50[0];
			iRec49[1] = iRec49[0];
			fVec32[1] = fVec32[0];
			iRec51[1] = iRec51[0];
			fVec33[1] = fVec33[0];
			iRec52[1] = iRec52[0];
			fVec34[1] = fVec34[0];
			iRec53[1] = iRec53[0];
			fVec35[1] = fVec35[0];
			iRec54[1] = iRec54[0];
			fVec36[1] = fVec36[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			for (int j7 = 3; j7 > 0; j7 = j7 - 1) {
				fVec37[j7] = fVec37[j7 - 1];
			}
			fRec58[1] = fRec58[0];
			iRec57[1] = iRec57[0];
			fVec38[1] = fVec38[0];
			iRec59[1] = iRec59[0];
			fVec39[1] = fVec39[0];
			iRec60[1] = iRec60[0];
			fVec40[1] = fVec40[0];
			iRec61[1] = iRec61[0];
			fVec41[1] = fVec41[0];
			iRec62[1] = iRec62[0];
			fVec42[1] = fVec42[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			for (int j8 = 3; j8 > 0; j8 = j8 - 1) {
				fVec43[j8] = fVec43[j8 - 1];
			}
			fRec66[1] = fRec66[0];
			iRec65[1] = iRec65[0];
			fVec44[1] = fVec44[0];
			iRec67[1] = iRec67[0];
			fVec45[1] = fVec45[0];
			iRec68[1] = iRec68[0];
			fVec46[1] = fVec46[0];
			iRec69[1] = iRec69[0];
			fVec47[1] = fVec47[0];
			iRec70[1] = iRec70[0];
			fVec48[1] = fVec48[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			for (int j9 = 3; j9 > 0; j9 = j9 - 1) {
				fVec49[j9] = fVec49[j9 - 1];
			}
			fRec74[1] = fRec74[0];
			iRec73[1] = iRec73[0];
			fVec50[1] = fVec50[0];
			iRec75[1] = iRec75[0];
			fVec51[1] = fVec51[0];
			iRec76[1] = iRec76[0];
			fVec52[1] = fVec52[0];
			iRec77[1] = iRec77[0];
			fVec53[1] = fVec53[0];
			iRec78[1] = iRec78[0];
			fVec54[1] = fVec54[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			for (int j10 = 3; j10 > 0; j10 = j10 - 1) {
				fVec55[j10] = fVec55[j10 - 1];
			}
			fRec82[1] = fRec82[0];
			iRec81[1] = iRec81[0];
			fVec56[1] = fVec56[0];
			iRec83[1] = iRec83[0];
			fVec57[1] = fVec57[0];
			iRec84[1] = iRec84[0];
			fVec58[1] = fVec58[0];
			iRec85[1] = iRec85[0];
			fVec59[1] = fVec59[0];
			iRec86[1] = iRec86[0];
			fVec60[1] = fVec60[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			for (int j11 = 3; j11 > 0; j11 = j11 - 1) {
				fVec61[j11] = fVec61[j11 - 1];
			}
			fRec90[1] = fRec90[0];
			iRec89[1] = iRec89[0];
			fVec62[1] = fVec62[0];
			iRec91[1] = iRec91[0];
			fVec63[1] = fVec63[0];
			iRec92[1] = iRec92[0];
			fVec64[1] = fVec64[0];
			iRec93[1] = iRec93[0];
			fVec65[1] = fVec65[0];
			iRec94[1] = iRec94[0];
			fVec66[1] = fVec66[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			for (int j12 = 3; j12 > 0; j12 = j12 - 1) {
				fVec67[j12] = fVec67[j12 - 1];
			}
			iRec97[1] = iRec97[0];
			fVec68[1] = fVec68[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			for (int j13 = 3; j13 > 0; j13 = j13 - 1) {
				fVec69[j13] = fVec69[j13 - 1];
			}
			iRec100[1] = iRec100[0];
			fVec70[1] = fVec70[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			for (int j14 = 3; j14 > 0; j14 = j14 - 1) {
				fVec71[j14] = fVec71[j14 - 1];
			}
			iRec103[1] = iRec103[0];
			fVec72[1] = fVec72[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			for (int j15 = 3; j15 > 0; j15 = j15 - 1) {
				fVec73[j15] = fVec73[j15 - 1];
			}
			iRec106[1] = iRec106[0];
			fVec74[1] = fVec74[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			for (int j16 = 3; j16 > 0; j16 = j16 - 1) {
				fVec75[j16] = fVec75[j16 - 1];
			}
			iRec109[1] = iRec109[0];
			fVec76[1] = fVec76[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			iRec112[1] = iRec112[0];
			fVec77[1] = fVec77[0];
			fRec111[1] = fRec111[0];
			fRec110[1] = fRec110[0];
			iRec115[1] = iRec115[0];
			fVec78[1] = fVec78[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			iRec118[1] = iRec118[0];
			fVec79[1] = fVec79[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			iRec121[1] = iRec121[0];
			fVec80[1] = fVec80[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			iRec124[1] = iRec124[0];
			fVec81[1] = fVec81[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			iRec127[1] = iRec127[0];
			fVec82[1] = fVec82[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			iRec130[1] = iRec130[0];
			fVec83[1] = fVec83[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			iRec133[1] = iRec133[0];
			fVec84[1] = fVec84[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			iRec136[1] = iRec136[0];
			fVec85[1] = fVec85[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			iRec139[1] = iRec139[0];
			fVec86[1] = fVec86[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			iRec142[1] = iRec142[0];
			fVec87[1] = fVec87[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			iRec145[1] = iRec145[0];
			fVec88[1] = fVec88[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			iRec148[1] = iRec148[0];
			fRec147[1] = fRec147[0];
			fRec146[1] = fRec146[0];
			iRec151[1] = iRec151[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			iRec154[1] = iRec154[0];
			fRec153[1] = fRec153[0];
			fRec152[1] = fRec152[0];
			iRec157[1] = iRec157[0];
			fRec156[1] = fRec156[0];
			fRec155[1] = fRec155[0];
			iRec160[1] = iRec160[0];
			fRec159[1] = fRec159[0];
			fRec158[1] = fRec158[0];
			iRec163[1] = iRec163[0];
			fRec162[1] = fRec162[0];
			fRec161[1] = fRec161[0];
			iRec166[1] = iRec166[0];
			fRec165[1] = fRec165[0];
			fRec164[1] = fRec164[0];
			iRec169[1] = iRec169[0];
			fRec168[1] = fRec168[0];
			fRec167[1] = fRec167[0];
			iRec172[1] = iRec172[0];
			fRec171[1] = fRec171[0];
			fRec170[1] = fRec170[0];
			iRec175[1] = iRec175[0];
			fRec174[1] = fRec174[0];
			fRec173[1] = fRec173[0];
			iRec178[1] = iRec178[0];
			fRec177[1] = fRec177[0];
			fRec176[1] = fRec176[0];
			iRec181[1] = iRec181[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec2[1] = fRec2[0];
			iRec187[1] = iRec187[0];
			for (int j17 = 3; j17 > 0; j17 = j17 - 1) {
				fVec89[j17] = fVec89[j17 - 1];
			}
			fVec90[1] = fVec90[0];
			fRec188[1] = fRec188[0];
			for (int j18 = 3; j18 > 0; j18 = j18 - 1) {
				fVec91[j18] = fVec91[j18 - 1];
			}
			fVec92[1] = fVec92[0];
			fRec189[1] = fRec189[0];
			for (int j19 = 3; j19 > 0; j19 = j19 - 1) {
				fVec93[j19] = fVec93[j19 - 1];
			}
			fVec94[1] = fVec94[0];
			fRec190[1] = fRec190[0];
			for (int j20 = 3; j20 > 0; j20 = j20 - 1) {
				fVec95[j20] = fVec95[j20 - 1];
			}
			fVec96[1] = fVec96[0];
			fRec191[1] = fRec191[0];
			for (int j21 = 3; j21 > 0; j21 = j21 - 1) {
				fVec97[j21] = fVec97[j21 - 1];
			}
			fVec98[1] = fVec98[0];
			fRec192[1] = fRec192[0];
			for (int j22 = 3; j22 > 0; j22 = j22 - 1) {
				fVec99[j22] = fVec99[j22 - 1];
			}
			fVec100[1] = fVec100[0];
			fRec193[1] = fRec193[0];
			for (int j23 = 3; j23 > 0; j23 = j23 - 1) {
				fVec101[j23] = fVec101[j23 - 1];
			}
			fVec102[1] = fVec102[0];
			fRec194[1] = fRec194[0];
			for (int j24 = 3; j24 > 0; j24 = j24 - 1) {
				fVec103[j24] = fVec103[j24 - 1];
			}
			fVec104[1] = fVec104[0];
			fRec195[1] = fRec195[0];
			for (int j25 = 3; j25 > 0; j25 = j25 - 1) {
				fVec105[j25] = fVec105[j25 - 1];
			}
			fVec106[1] = fVec106[0];
			fRec196[1] = fRec196[0];
			for (int j26 = 3; j26 > 0; j26 = j26 - 1) {
				fVec107[j26] = fVec107[j26 - 1];
			}
			fVec108[1] = fVec108[0];
			fRec197[1] = fRec197[0];
			for (int j27 = 3; j27 > 0; j27 = j27 - 1) {
				fVec109[j27] = fVec109[j27 - 1];
			}
			fVec110[1] = fVec110[0];
			fRec198[1] = fRec198[0];
			for (int j28 = 3; j28 > 0; j28 = j28 - 1) {
				fVec111[j28] = fVec111[j28 - 1];
			}
			fVec112[1] = fVec112[0];
			fRec199[1] = fRec199[0];
			for (int j29 = 3; j29 > 0; j29 = j29 - 1) {
				fVec113[j29] = fVec113[j29 - 1];
			}
			for (int j30 = 3; j30 > 0; j30 = j30 - 1) {
				fVec114[j30] = fVec114[j30 - 1];
			}
			for (int j31 = 3; j31 > 0; j31 = j31 - 1) {
				fVec115[j31] = fVec115[j31 - 1];
			}
			for (int j32 = 3; j32 > 0; j32 = j32 - 1) {
				fVec116[j32] = fVec116[j32 - 1];
			}
			for (int j33 = 3; j33 > 0; j33 = j33 - 1) {
				fVec117[j33] = fVec117[j33 - 1];
			}
			for (int j34 = 3; j34 > 0; j34 = j34 - 1) {
				fVec118[j34] = fVec118[j34 - 1];
			}
			for (int j35 = 3; j35 > 0; j35 = j35 - 1) {
				fVec119[j35] = fVec119[j35 - 1];
			}
			for (int j36 = 3; j36 > 0; j36 = j36 - 1) {
				fVec120[j36] = fVec120[j36 - 1];
			}
			for (int j37 = 3; j37 > 0; j37 = j37 - 1) {
				fVec121[j37] = fVec121[j37 - 1];
			}
			for (int j38 = 3; j38 > 0; j38 = j38 - 1) {
				fVec122[j38] = fVec122[j38 - 1];
			}
			for (int j39 = 3; j39 > 0; j39 = j39 - 1) {
				fVec123[j39] = fVec123[j39 - 1];
			}
			for (int j40 = 3; j40 > 0; j40 = j40 - 1) {
				fVec124[j40] = fVec124[j40 - 1];
			}
			for (int j41 = 3; j41 > 0; j41 = j41 - 1) {
				fVec125[j41] = fVec125[j41 - 1];
			}
			for (int j42 = 3; j42 > 0; j42 = j42 - 1) {
				fVec126[j42] = fVec126[j42 - 1];
			}
			fRec201[1] = fRec201[0];
			fRec200[1] = fRec200[0];
			for (int j43 = 3; j43 > 0; j43 = j43 - 1) {
				fVec127[j43] = fVec127[j43 - 1];
			}
			fRec203[1] = fRec203[0];
			fRec202[1] = fRec202[0];
			for (int j44 = 3; j44 > 0; j44 = j44 - 1) {
				fVec128[j44] = fVec128[j44 - 1];
			}
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			for (int j45 = 3; j45 > 0; j45 = j45 - 1) {
				fVec129[j45] = fVec129[j45 - 1];
			}
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			for (int j46 = 3; j46 > 0; j46 = j46 - 1) {
				fVec130[j46] = fVec130[j46 - 1];
			}
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			for (int j47 = 3; j47 > 0; j47 = j47 - 1) {
				fVec131[j47] = fVec131[j47 - 1];
			}
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			for (int j48 = 3; j48 > 0; j48 = j48 - 1) {
				fVec132[j48] = fVec132[j48 - 1];
			}
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			for (int j49 = 3; j49 > 0; j49 = j49 - 1) {
				fVec133[j49] = fVec133[j49 - 1];
			}
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			for (int j50 = 3; j50 > 0; j50 = j50 - 1) {
				fVec134[j50] = fVec134[j50 - 1];
			}
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			for (int j51 = 3; j51 > 0; j51 = j51 - 1) {
				fVec135[j51] = fVec135[j51 - 1];
			}
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			for (int j52 = 3; j52 > 0; j52 = j52 - 1) {
				fVec136[j52] = fVec136[j52 - 1];
			}
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			for (int j53 = 3; j53 > 0; j53 = j53 - 1) {
				fVec137[j53] = fVec137[j53 - 1];
			}
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			for (int j54 = 3; j54 > 0; j54 = j54 - 1) {
				fVec138[j54] = fVec138[j54 - 1];
			}
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			for (int j55 = 3; j55 > 0; j55 = j55 - 1) {
				fVec139[j55] = fVec139[j55 - 1];
			}
			fRec227[1] = fRec227[0];
			fRec226[1] = fRec226[0];
			for (int j56 = 3; j56 > 0; j56 = j56 - 1) {
				fVec140[j56] = fVec140[j56 - 1];
			}
			fRec229[1] = fRec229[0];
			fRec228[1] = fRec228[0];
			for (int j57 = 3; j57 > 0; j57 = j57 - 1) {
				fVec141[j57] = fVec141[j57 - 1];
			}
			fRec231[1] = fRec231[0];
			fRec230[1] = fRec230[0];
			for (int j58 = 3; j58 > 0; j58 = j58 - 1) {
				fVec142[j58] = fVec142[j58 - 1];
			}
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			for (int j59 = 3; j59 > 0; j59 = j59 - 1) {
				fVec143[j59] = fVec143[j59 - 1];
			}
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			for (int j60 = 3; j60 > 0; j60 = j60 - 1) {
				fVec144[j60] = fVec144[j60 - 1];
			}
			fRec237[1] = fRec237[0];
			fRec236[1] = fRec236[0];
			fRec239[1] = fRec239[0];
			fRec238[1] = fRec238[0];
			fRec241[1] = fRec241[0];
			fRec240[1] = fRec240[0];
			fRec243[1] = fRec243[0];
			fRec242[1] = fRec242[0];
			fRec245[1] = fRec245[0];
			fRec244[1] = fRec244[0];
			fRec247[1] = fRec247[0];
			fRec246[1] = fRec246[0];
			fRec249[1] = fRec249[0];
			fRec248[1] = fRec248[0];
			fRec251[1] = fRec251[0];
			fRec250[1] = fRec250[0];
			fRec253[1] = fRec253[0];
			fRec252[1] = fRec252[0];
			fRec255[1] = fRec255[0];
			fRec254[1] = fRec254[0];
			fRec257[1] = fRec257[0];
			fRec256[1] = fRec256[0];
			fRec259[1] = fRec259[0];
			fRec258[1] = fRec258[0];
			fRec261[1] = fRec261[0];
			fRec260[1] = fRec260[0];
			fRec263[1] = fRec263[0];
			fRec262[1] = fRec262[0];
			fRec265[1] = fRec265[0];
			fRec264[1] = fRec264[0];
			fRec267[1] = fRec267[0];
			fRec266[1] = fRec266[0];
			fRec269[1] = fRec269[0];
			fRec268[1] = fRec268[0];
			fRec271[1] = fRec271[0];
			fRec270[1] = fRec270[0];
			fVec145[1] = fVec145[0];
			fRec272[1] = fRec272[0];
			fRec184[1] = fRec184[0];
			iRec185[1] = iRec185[0];
			fRec186[1] = fRec186[0];
			fVec146[1] = fVec146[0];
			fRec183[1] = fRec183[0];
			fRec182[1] = fRec182[0];
			for (int j61 = 4; j61 > 0; j61 = j61 - 1) {
				fVec147[j61] = fVec147[j61 - 1];
			}
			fRec275[1] = fRec275[0];
			fRec274[1] = fRec274[0];
			fRec277[1] = fRec277[0];
			fRec276[1] = fRec276[0];
			fRec279[1] = fRec279[0];
			fRec278[1] = fRec278[0];
			fRec281[1] = fRec281[0];
			fRec280[1] = fRec280[0];
			fRec283[1] = fRec283[0];
			fRec282[1] = fRec282[0];
			fRec285[1] = fRec285[0];
			fRec284[1] = fRec284[0];
			fRec287[1] = fRec287[0];
			fRec286[1] = fRec286[0];
			fVec148[1] = fVec148[0];
			fRec273[1] = fRec273[0];
			fVec149[1] = fVec149[0];
			fRec288[1] = fRec288[0];
			fVec150[1] = fVec150[0];
			fRec290[1] = fRec290[0];
			fRec289[1] = fRec289[0];
			fVec151[1] = fVec151[0];
			fRec293[1] = fRec293[0];
			fVec152[1] = fVec152[0];
			fRec292[1] = fRec292[0];
			fRec291[1] = fRec291[0];
			fVec153[1] = fVec153[0];
			fRec296[1] = fRec296[0];
			fVec154[1] = fVec154[0];
			fRec295[1] = fRec295[0];
			fRec294[1] = fRec294[0];
			fVec155[1] = fVec155[0];
			fRec299[1] = fRec299[0];
			fVec156[1] = fVec156[0];
			fRec298[1] = fRec298[0];
			fRec297[1] = fRec297[0];
			fRec301[1] = fRec301[0];
			fVec157[1] = fVec157[0];
			fRec300[1] = fRec300[0];
			fRec303[1] = fRec303[0];
			fVec158[1] = fVec158[0];
			fRec302[1] = fRec302[0];
			fRec305[1] = fRec305[0];
			fVec159[1] = fVec159[0];
			fRec304[1] = fRec304[0];
			fRec307[1] = fRec307[0];
			fVec160[1] = fVec160[0];
			fRec306[1] = fRec306[0];
			fVec161[1] = fVec161[0];
			fRec308[1] = fRec308[0];
		}
	}

};

#endif
