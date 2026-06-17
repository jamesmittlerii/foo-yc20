PREFIX=/usr/local
LIBDIR=$(PREFIX)/lib
BINDIR=$(PREFIX)/bin
DATADIR=$(PREFIX)/share
LV2_PATH=$(LIBDIR)/lv2
DESKTOPDIR=$(DATADIR)/applications
VERSION=
FAUST=faust
PKG_CONFIG=pkg-config
OS=$(shell uname)
BUILD_MACHINE := $(shell $(CXX) -dumpmachine 2>/dev/null)
VSTSDK=./vstsdk2.4
JACKSDK=./jack-1.9.6

# <jack/ringbuffer.h> from vendored jack sources, or MSYS2 jack2 if installed.
ifeq ($(wildcard $(JACKSDK)/jack/ringbuffer.h),$(JACKSDK)/jack/ringbuffer.h)
JACK_CFLAGS = -I$(JACKSDK)
else ifneq ($(wildcard $(JACKSDK)/include/jack/ringbuffer.h),)
JACK_CFLAGS = -I$(JACKSDK)/include
else ifneq ($(shell $(PKG_CONFIG) --exists jack 2>/dev/null && echo yes),)
JACK_CFLAGS = `$(PKG_CONFIG) --cflags jack`
else
JACK_CFLAGS = `$(PKG_CONFIG) --cflags jack2`
endif

# jack1: libjack/ringbuffer.c — older jack: common/ringbuffer.c
ifeq ($(wildcard $(JACKSDK)/libjack/ringbuffer.c),$(JACKSDK)/libjack/ringbuffer.c)
JACK_RINGBUFFER_C = $(JACKSDK)/libjack/ringbuffer.c
else
JACK_RINGBUFFER_C = $(JACKSDK)/common/ringbuffer.c
endif

CXX11 = $(CXX) -std=c++11

OBJS_NODEPS=src/lv2.o src/foo-yc20.o src/configuration.o src/graphics.o src/yc20-precalc.o
OBJS_JACK=src/yc20-jack.o src/main-cli.o
OBJS_GTKJACK=src/main-gui.o src/foo-yc20-ui.o
OBJS_GTK=src/foo-yc20-ui2.o src/lv2-ui.o
OBJS_CAIRO=src/yc20-base-ui.o

OBJS_DSP_STANDALONE=src/faust-dsp-standalone.o
OBJS_DSP_PLUGIN=src/faust-dsp-plugin.o

LV2_PLUGIN=src/foo-yc20.lv2/foo-yc20.so
LV2_UI=src/foo-yc20.lv2/foo-yc20-lv2ui.so

ifeq ($(CFLAGS),)
ifeq ($(OS), Darwin)
CFLAGS=-O3 -ffast-math -ftree-vectorize -arch ppc -arch i386 -arch x86_64
else
CFLAGS=-O3 -march=nocona -mfpmath=sse -ffast-math -ftree-vectorize
endif
endif

CFLAGS_X = $(CFLAGS) -fPIC -DVERSION=$(VERSION) -Isrc/ -Iinclude/ -DPREFIX=$(PREFIX) -Wall

FAUST_INCLUDEDIR?=/e/Program\ Files/Faust/include
ifneq ($(wildcard $(FAUST_INCLUDEDIR)/faust/dsp/dsp.h),)
CFLAGS_X += -I$(FAUST_INCLUDEDIR)
endif

ifneq ($(wildcard /e/Program\ Files/Faust/bin/faust.exe),)
FAUST := /e/Program\ Files/Faust/bin/faust.exe
endif

ifneq ($(findstring MINGW,$(OS))$(findstring mingw,$(BUILD_MACHINE)),)
CFLAGS_X += -D_USE_MATH_DEFINES=1
CFLAGS_X += -DWIN32=1 -D__WIN32__=1
CFLAGS_X += -DCAIRO_WIN32_STATIC_BUILD
# Fully static cairo into the DLL (no MSYS2 libcairo-2.dll beside the plugin).
VST_CAIRO_LIBS := $(filter-out -pthread,$(shell $(PKG_CONFIG) --static --libs cairo))
VST_WINPTHREAD_LIBS := -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive
VST_LINK_LIBS := -Wl,-Bstatic $(VST_CAIRO_LIBS) -liconv $(VST_WINPTHREAD_LIBS) -Wl,-Bdynamic -lkernel32 -luser32 -lgdi32 -lmsimg32 -lole32
else
CFLAGS_X += -D__cdecl=
endif

$(OBJS_NODEPS): CFLAGS_use = $(CFLAGS_X)
$(OBJS_JACK): CFLAGS_use = $(CFLAGS_X) `$(PKG_CONFIG) --cflags jack`
$(OBJS_GTKJACK): CFLAGS_use = $(CFLAGS_X) `$(PKG_CONFIG) --cflags gtk+-2.0` `$(PKG_CONFIG) --cflags jack`
$(OBJS_GTK): CFLAGS_use = $(CFLAGS_X) `$(PKG_CONFIG) --cflags gtk+-2.0`
$(OBJS_LV2): CFLAGS_use = $(CFLAGS_X)
$(OBJS_CAIRO): CFLAGS_use = $(CFLAGS_X) `$(PKG_CONFIG) --cflags cairo`

$(OBJS_DSP_STANDALONE) $(OBJS_DSP_PLUGIN): CFLAGS_use = $(CFLAGS_X)

.cpp.o:
	$(CXX11) $< $(CFLAGS_use) -c -o $@

.c.o:
	$(CXX11) $< $(CFLAGS_use) -c -o $@

all: foo-yc20 foo-yc20-cli lv2

lv2: $(LV2_PLUGIN) $(LV2_UI)

## GUI version
OBJS_FOO_YC20=src/foo-yc20.o src/configuration.o src/yc20-jack.o src/main-gui.o src/foo-yc20-ui.o src/yc20-base-ui.o src/graphics.o src/yc20-precalc.o $(WIN32_RC)

foo-yc20: $(OBJS_FOO_YC20) $(OBJS_DSP_STANDALONE)
	$(CXX11) $(OBJS_FOO_YC20) $(OBJS_DSP_STANDALONE) `$(PKG_CONFIG) --libs gtk+-2.0` `$(PKG_CONFIG) --libs jack` $(LDFLAGS_YC20) -o foo-yc20

## CLI version
OBJS_FOO_YC20_CLI=src/foo-yc20.o src/configuration.o src/main-cli.o src/yc20-jack.o src/yc20-precalc.o

foo-yc20-cli: $(OBJS_FOO_YC20_CLI) $(OBJS_DSP_STANDALONE)
	$(CXX11) $(OBJS_FOO_YC20_CLI) $(OBJS_DSP_STANDALONE) $(LDFLAGS_YC20_CLI) `$(PKG_CONFIG) --libs jack` -o foo-yc20-cli

## LV2 version
OBJS_LV2=src/lv2.o src/foo-yc20.o src/yc20-precalc.o

$(LV2_PLUGIN): $(OBJS_LV2) $(OBJS_DSP_PLUGIN)
	$(CXX11) $(OBJS_LV2) $(OBJS_DSP_PLUGIN) -fPIC -shared -o $(LV2_PLUGIN) $(LDFLAGS_YC20_LV2)

## LV2 UI
OBJS_LV2_UI=src/lv2-ui.o src/foo-yc20-ui2.o src/yc20-base-ui.o src/graphics.o

$(LV2_UI): $(OBJS_LV2_UI)
	$(CXX11) $(OBJS_LV2_UI) -fPIC -shared `$(PKG_CONFIG) --libs gtk+-2.0` -o $(LV2_UI) $(LDFLAGS_YC20_LV2)

## VSTi - Windows via MinGW (32-bit in MSYS2 MinGW32, 64-bit in MSYS2 MinGW64).
## Jack is only used at compile time for ringbuffer.h; runtime uses jackringbuffer.o.
OBJS_VSTI_LINUX=src/vsti.o src/vstplugmain.o src/foo-yc20.o src/yc20-precalc.o src/yc20-base-ui.o src/graphics.o src/jackringbuffer.o
OBJS_VSTI=src/vsti.o src/vstplugmain.o src/foo-yc20.o src/yc20-precalc.o src/yc20-base-ui.o src/graphics.o src/jackringbuffer.o $(WIN32_RC)

VST_MACHINE := $(shell $(CXX) -dumpmachine 2>/dev/null)
ifeq ($(findstring x86_64,$(VST_MACHINE)),x86_64)
VST_DLL = FooYC20_x64.dll
VST_ARCH = x86_64
else ifeq ($(findstring i686,$(VST_MACHINE)),i686)
VST_DLL = FooYC20.dll
VST_ARCH = i686
else
VST_DLL = FooYC20.dll
VST_ARCH = unknown
endif

VST_BUILD_DIR = build/vst
VST_PLUGIN = $(VST_BUILD_DIR)/$(VST_DLL)

$(WIN32_RC): src/win32.rc
	$(WINDRES) src/win32.rc -o src/win32.o

VST_CFLAGS = -I$(VSTSDK) -I$(VSTSDK)/public.sdk/source/vst2.x -I$(VSTSDK)/pluginterfaces/vst2.x $(JACK_CFLAGS)

src/vsti.o src/vstplugmain.o src/yc20-base-ui.o src/graphics.o: CFLAGS_use = $(CFLAGS_X) $(VST_CFLAGS) `$(PKG_CONFIG) --cflags cairo`

src/vstplugmain.o: $(VSTSDK)/public.sdk/source/vst2.x/vstplugmain.cpp
	$(CXX11) $(CFLAGS_use) $(VSTSDK)/public.sdk/source/vst2.x/vstplugmain.cpp -c -o src/vstplugmain.o

vsti-check-deps:
	@test -f "$(VSTSDK)/public.sdk/source/vst2.x/audioeffectx.h" || ( \
		echo "Missing VST2 SDK at $(VSTSDK)"; \
		echo "  Expected: $(VSTSDK)/public.sdk/source/vst2.x/audioeffectx.h"; \
		echo "  Download Steinberg VST2 SDK 2.4 and extract/symlink as ./vstsdk2.4"; \
		echo "  Or: make VSTSDK=/path/to/vstsdk2.4 vsti-windows64"; \
		exit 1)
	@test -f "$(VSTSDK)/pluginterfaces/vst2.x/aeffect.h" || ( \
		echo "Missing $(VSTSDK)/pluginterfaces/vst2.x/aeffect.h"; \
		echo "  Your VST SDK layout looks incomplete (need pluginterfaces/vst2.x/)"; \
		exit 1)
	@test -f "$(JACK_RINGBUFFER_C)" || ( \
		echo "Missing ringbuffer.c under $(JACKSDK)"; \
		echo "  Expected: libjack/ringbuffer.c (jack1) or common/ringbuffer.c (older jack)"; \
		exit 1)
	@if [ ! -f "$(JACKSDK)/jack/ringbuffer.h" ] && [ ! -f "$(JACKSDK)/include/jack/ringbuffer.h" ] && ! $(PKG_CONFIG) --exists jack 2>/dev/null && ! $(PKG_CONFIG) --exists jack2 2>/dev/null; then \
		echo "Missing jack/ringbuffer.h under $(JACKSDK)"; \
		echo "  jack1 uses a submodule: cd $(JACKSDK) && git submodule update --init --recursive"; \
		echo "  Or: pacman -S mingw-w64-$(VST_ARCH)-jack2"; \
		exit 1; \
	fi
	@$(PKG_CONFIG) --exists cairo || (echo "Missing cairo (MSYS2: pacman -S mingw-w64-$(VST_ARCH)-cairo)" && exit 1)
	@echo "VST build arch: $(VST_ARCH) ($(VST_MACHINE)) -> $(VST_DLL)"

vsti-linux: $(OBJS_VSTI_LINUX) $(OBJS_DSP_PLUGIN) src/vsti.def
	@mkdir -p $(VST_BUILD_DIR)
	$(CXX11) -Wall -s -shared $(CFLAGS) $(VSTFLAGS) $(OBJS_VSTI_LINUX) $(OBJS_DSP_PLUGIN) -o $(VST_PLUGIN) `$(PKG_CONFIG) --libs cairo`
	@echo "Built $(VST_PLUGIN)"

vsti-windows: vsti-check-deps $(OBJS_VSTI) $(OBJS_DSP_PLUGIN) src/vsti.def
	@mkdir -p $(VST_BUILD_DIR)
	$(CXX11) -Wall -s -shared -mwindows -static-libgcc -static-libstdc++ $(CFLAGS) src/vsti.def $(VSTFLAGS) $(OBJS_VSTI) $(OBJS_DSP_PLUGIN) -o $(VST_PLUGIN) $(VST_LINK_LIBS)
	@echo "Built $(VST_PLUGIN) for $(VST_ARCH)"

vsti-windows64:
	@if ! echo "$(VST_MACHINE)" | grep -q x86_64; then \
		echo "vsti-windows64 requires the MSYS2 MinGW64 shell (x86_64-w64-mingw32-g++)"; \
		echo "Current compiler: $(CXX) -> $(VST_MACHINE)"; \
		exit 1; \
	fi
	$(MAKE) vsti-windows

$(BIN): $(OBJ)

include/graphics-png.h: graphics/background-black.png graphics/background-blue.png graphics/background-red.png graphics/background-white.png graphics/license.png graphics/potentiometer.png graphics/black_0.png graphics/black_1.png graphics/black_2.png graphics/black_3.png graphics/green_0.png graphics/green_1.png graphics/green_2.png graphics/green_3.png graphics/white_0.png graphics/white_1.png graphics/white_2.png graphics/white_3.png
	echo "" > include/graphics-png.h
	xxd -i graphics/background-black.png >> include/graphics-png.h
	xxd -i graphics/background-blue.png >> include/graphics-png.h
	xxd -i graphics/background-red.png >> include/graphics-png.h
	xxd -i graphics/background-white.png >> include/graphics-png.h
	xxd -i graphics/license.png >> include/graphics-png.h
	xxd -i graphics/potentiometer.png >> include/graphics-png.h
	xxd -i graphics/black_0.png >> include/graphics-png.h
	xxd -i graphics/black_1.png >> include/graphics-png.h
	xxd -i graphics/black_2.png >> include/graphics-png.h
	xxd -i graphics/black_3.png >> include/graphics-png.h
	xxd -i graphics/green_0.png >> include/graphics-png.h
	xxd -i graphics/green_1.png >> include/graphics-png.h
	xxd -i graphics/green_2.png >> include/graphics-png.h
	xxd -i graphics/green_3.png >> include/graphics-png.h
	xxd -i graphics/white_0.png >> include/graphics-png.h
	xxd -i graphics/white_1.png >> include/graphics-png.h
	xxd -i graphics/white_2.png >> include/graphics-png.h
	xxd -i graphics/white_3.png >> include/graphics-png.h


src/jackringbuffer.o: $(JACK_RINGBUFFER_C)
	$(CC) $(CFLAGS) $(JACK_CFLAGS) -Isrc/jack-build -c $(JACK_RINGBUFFER_C) -o src/jackringbuffer.o

src/osxresources.o: ../tools/osx/src/osxresources.mm
	$(CC) $(CFLAGS) -o src/osxresources.o -c ../tools/osx/src/osxresources.mm

vstosx: $(OBJS_VSTI) $(OBJS_DSP_PLUGIN) src/osxresources.o
	$(CXX11) $(CFLAGS) \
	-I$(VSTSDK)/public.sdk -I$(VSTSDK)/vstgui.sf -I$(VSTSDK)/ \
	`$(PKG_CONFIG) --cflags cairo` \
	-bundle -framework Carbon -framework CoreFoundation -framework AppKit \
	`$(PKG_CONFIG) --libs cairo` \
	src/jackringbuffer.o src/osxresources.o \
	$(OBJS_VSTI) $(OBJS_DSP_PLUGIN) \
	-o vstosx

## clean

clean: cb
	rm -f $(OBJS_DSP_STANDALONE) $(OBJS_DSP_PLUGIN)

cb:
	rm -f foo-yc20 foo-yc20-cli $(LV2_PLUGIN) $(LV2_UI)
	rm -rf $(VST_BUILD_DIR)
	rm -f FooYC20.dll FooYC20_x64.dll FooYC20.so vstosx
	rm -f $(OBJS_FOO_YC20) $(OBJS_FOO_YC20_CLI) $(OBJS_LV2) $(OBJS_LV2_UI) $(OBJS_VSTI)
	rm -f src/jackringbuffer.o src/osxresources.o


install: foo-yc20
	install -Dm 755 foo-yc20 $(DESTDIR)$(BINDIR)/foo-yc20
	install -Dm 755 foo-yc20-cli $(DESTDIR)$(BINDIR)/foo-yc20-cli
	install -d $(DESTDIR)$(DATADIR)/foo-yc20/graphics
	install -m 644 graphics/icon.png $(DESTDIR)$(DATADIR)/foo-yc20/graphics
	cat foo-yc20.desktop.in | sed 's!%PREFIX%!$(PREFIX)!' > foo-yc20.desktop
	install -Dm 644 foo-yc20.desktop $(DESTDIR)$(DESKTOPDIR)/foo-yc20.desktop
	rm foo-yc20.desktop
	install -d $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
	install -m 755 src/foo-yc20.lv2/*.so $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
	install -m 644 src/foo-yc20.lv2/*.ttl $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2


uninstall:
	rm $(DESTDIR)$(BINDIR)/foo-yc20
	rm $(DESTDIR)$(BINDIR)/foo-yc20-cli
	rm $(DESTDIR)$(DESKTOPDIR)/foo-yc20.desktop
	rm -r $(DESTDIR)$(DATADIR)/foo-yc20
	rm -r $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2


## Targets only for those with Faust installed

generate-source:
	$(FAUST) faust/standalone.dsp > gen/yc20-dsp-standalone.cpp
	$(FAUST) faust/plugin.dsp     > gen/yc20-dsp-plugin.cpp

generate-source-vec:
	$(FAUST) -vec faust/standalone.dsp > gen/yc20-dsp-standalone.cpp
	$(FAUST) -vec faust/plugin.dsp	  > gen/yc20-dsp-plugin.cpp


basic-test:
	$(FAUST) -a jack-console.cpp faust/yc20.dsp > gen/basic.cpp
	$(CXX11) $(CFLAGS) -Isrc/ gen/basic.cpp -o basic `$(PKG_CONFIG) --cflags --libs jack`

## test compilation
# For semi-automated testing, this line is handy:
# make testit && ./testit in.wav out.wav && mhwaveedit out.wav

testit: faust/test.dsp faust/oscillator.dsp src/polyblep.cpp Makefile
	rm -rf faust/test-svg/
	$(FAUST) -svg -a sndfile.cpp faust/test.dsp > gen/test.cpp
	$(CXX11) $(CFLAGS) -Isrc/ gen/test.cpp `$(PKG_CONFIG) --cflags --libs sndfile` -o testit

$(OBJS_NODEPS) $(OBJS_JACK) $(OBJS_GTKJACK) $(OBJS_LV2) $(OBJS_CAIRO): include/*.h
src/graphics.o: include/graphics-png.h

$(OBJS_DSP_STANDALONE): gen/yc20-dsp-standalone.cpp
$(OBJS_DSP_PLUGIN): gen/yc20-dsp-plugin.cpp



