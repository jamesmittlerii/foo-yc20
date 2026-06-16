PREFIX=/usr/local
LIBDIR=$(PREFIX)/lib
BINDIR=$(PREFIX)/bin
DATADIR=$(PREFIX)/share
LV2_PATH=$(LIBDIR)/lv2
DESKTOPDIR=$(DATADIR)/applications
VERSION=
FAUST?=faust
PKG_CONFIG=pkg-config
OS=$(shell uname)
VSTSDK=./vstsdk2.4
JACKSDK=./jack-1.9.6

CXX11 = $(CXX) -std=c++11

OBJS_NODEPS=src/lv2.o src/foo-yc20.o src/configuration.o src/graphics.o src/yc20-precalc.o
OBJS_JACK=src/yc20-jack.o src/main-cli.o
OBJS_GTKJACK=src/main-gui.o src/foo-yc20-ui.o
OBJS_GTK=src/foo-yc20-ui2.o src/lv2-ui.o
OBJS_CAIRO=src/yc20-base-ui.o

OBJS_DSP_STANDALONE=src/faust-dsp-standalone.o
OBJS_DSP_PLUGIN=src/faust-dsp-plugin.o

LV2_PLUGIN_BASENAME=foo-yc20.so
LV2_BUILD_BUNDLE_DIR=build/lv2/foo-yc20.lv2
LV2_PLUGIN=$(LV2_BUILD_BUNDLE_DIR)/$(LV2_PLUGIN_BASENAME)
LV2_UI=$(LV2_BUILD_BUNDLE_DIR)/foo-yc20-lv2ui.so

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

ifneq (,$(filter MINGW% MSYS%,$(OS)))
CFLAGS_X += -D_USE_MATH_DEFINES=1
CFLAGS_X += -DWIN32=1
LV2_PLUGIN_BASENAME=foo-yc20.dll
LDFLAGS_YC20_LV2 += -static -static-libgcc -static-libstdc++ -Wl,-Bstatic -lstdc++ -lgcc -Wl,-Bdynamic
MINGW_LIBSTDCPP := $(shell $(CXX) -print-file-name=libstdc++-6.dll)
MINGW_LIBGCC := $(shell $(CXX) -print-file-name=libgcc_s_seh-1.dll)
MINGW_LIBWINPTHREAD := $(shell $(CXX) -print-file-name=libwinpthread-1.dll)
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

all: foo-yc20 foo-yc20-cli lv2-headless

lv2: lv2-headless
lv2-headless: $(LV2_PLUGIN)

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
	mkdir -p $(LV2_BUILD_BUNDLE_DIR)
	$(CXX11) $(OBJS_LV2) $(OBJS_DSP_PLUGIN) -fPIC -shared -o $(LV2_PLUGIN) $(LDFLAGS_YC20_LV2)

## LV2 UI
OBJS_LV2_UI=src/lv2-ui.o src/foo-yc20-ui2.o src/yc20-base-ui.o src/graphics.o

$(LV2_UI): $(OBJS_LV2_UI)
	mkdir -p $(LV2_BUILD_BUNDLE_DIR)
	$(CXX11) $(OBJS_LV2_UI) -fPIC -shared `$(PKG_CONFIG) --libs gtk+-2.0` -o $(LV2_UI) $(LDFLAGS_YC20_LV2)

## VSTi - only compiles for windows with MinGW32. 
##        Note: Jack is used in compile flags to provide access to the ringbuffer.h. there
##              is no runtime dependency or even a library as we use the separately compiled ringbuffer.o
OBJS_VSTI_LINUX=src/vsti.o src/vstplugmain.o src/foo-yc20.o src/yc20-precalc.o src/yc20-base-ui.o src/graphics.o src/jackringbuffer.o
OBJS_VSTI=src/vsti.o src/vstplugmain.o src/foo-yc20.o src/yc20-precalc.o src/yc20-base-ui.o src/graphics.o src/jackringbuffer.o $(WIN32_RC)

$(WIN32_RC): src/win32.rc
	$(WINDRES) src/win32.rc -o src/win32.o

src/vsti.o src/vstplugmain.o: CFLAGS_use = $(CFLAGS_X) -I$(VSTSDK) -I$(VSTSDK)/public.sdk/source/vst2.x `$(PKG_CONFIG) --cflags cairo jack`

src/vstplugmain.o: $(VSTSDK)/public.sdk/source/vst2.x/vstplugmain.cpp
	$(CXX11) $(CFLAGS_use)  $(VSTSDK)/public.sdk/source/vst2.x/vstplugmain.cpp -c -o src/vstplugmain.o

vsti-linux: $(OBJS_VSTI_LINUX) $(OBJS_DSP_PLUGIN) src/vsti.def
	$(CXX11) -Wall -s -shared $(CFLAGS) $(VSTFLAGS) $(OBJS_VSTI_LINUX) $(OBJS_DSP_PLUGIN) -o FooYC20.so `$(PKG_CONFIG) --libs cairo`

vsti-windows: $(OBJS_VSTI) $(OBJS_DSP_PLUGIN) src/vsti.def
	$(CXX11) -Wall -s -shared -mwindows -static $(CFLAGS) src/vsti.def $(VSTFLAGS) $(OBJS_VSTI) $(OBJS_DSP_PLUGIN) -o FooYC20.dll `$(PKG_CONFIG) --libs --static cairo`

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


src/jackringbuffer.o: $(JACKSDK)/common/ringbuffer.c
	$(CC) $(CFLAGS) \
	-I$(JACKSDK)/posix/ \
	-I$(JACKSDK)/common/ \
	-c $(JACKSDK)/common/ringbuffer.c \
	-o src/jackringbuffer.o

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
	rm -f foo-yc20 foo-yc20-cli src/foo-yc20.lv2/foo-yc20.so src/foo-yc20.lv2/foo-yc20.dll $(LV2_PLUGIN) $(LV2_UI) FooYC20.dll
	rm -f $(OBJS_FOO_YC20) $(OBJS_FOO_YC20_CLI) $(OBJS_LV2) $(OBJS_LV2_UI) $(OBJS_VSTI)
	rm -f src/jackringbuffer.o src/osxresources.o vstosx
	rm -f tests/headless-dsp-test


install: lv2-headless
	install -d $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
	install -m 755 $(LV2_PLUGIN) $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
	install -m 644 src/foo-yc20.lv2/*.ttl $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
ifneq (,$(filter MINGW% MSYS%,$(OS)))
	rm -f $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2/foo-yc20.so
	perl -0777 -i -pe 's/lv2:binary\s*<foo-yc20\.so>\s*;/lv2:binary      <foo-yc20.dll>;/' "$(DESTDIR)$(LV2_PATH)/foo-yc20.lv2/manifest.ttl"
ifneq ($(MINGW_LIBSTDCPP),libstdc++-6.dll)
	install -m 755 "$(MINGW_LIBSTDCPP)" $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
endif
ifneq ($(MINGW_LIBGCC),libgcc_s_seh-1.dll)
	install -m 755 "$(MINGW_LIBGCC)" $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
endif
ifneq ($(MINGW_LIBWINPTHREAD),libwinpthread-1.dll)
	install -m 755 "$(MINGW_LIBWINPTHREAD)" $(DESTDIR)$(LV2_PATH)/foo-yc20.lv2
endif
endif


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

HEADLESS_TEST_EXE=tests/headless-dsp-test
HEADLESS_TEST_OBJS=tests/headless-dsp-test.o src/foo-yc20.o src/yc20-precalc.o src/faust-dsp-plugin.o

tests/headless-dsp-test.o: CFLAGS_use = $(CFLAGS_X)

$(HEADLESS_TEST_EXE): $(HEADLESS_TEST_OBJS)
	$(CXX11) $(HEADLESS_TEST_OBJS) -o $(HEADLESS_TEST_EXE)

headless-test: $(HEADLESS_TEST_EXE)
	./$(HEADLESS_TEST_EXE)

test: headless-test

$(OBJS_NODEPS) $(OBJS_JACK) $(OBJS_GTKJACK) $(OBJS_LV2) $(OBJS_CAIRO): include/*.h
src/graphics.o: include/graphics-png.h

$(OBJS_DSP_STANDALONE): gen/yc20-dsp-standalone.cpp
$(OBJS_DSP_PLUGIN): gen/yc20-dsp-plugin.cpp



