cmake_minimum_required(VERSION 3.20)

project(foo-yc20 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(GNUInstallDirs)

if(WIN32)
  set(default_lv2_bundle_dir "$ENV{USERPROFILE}/.lv2/foo-yc20.lv2")
  set(default_faust_include "E:/Program Files/Faust/include")
  set(YC20_LV2_BINARY_NAME "foo-yc20.dll")
else()
  set(default_lv2_bundle_dir "${CMAKE_INSTALL_FULL_LIBDIR}/lv2/foo-yc20.lv2")
  set(default_faust_include "/usr/include")
  set(YC20_LV2_BINARY_NAME "foo-yc20.so")
endif()

set(YC20_LV2_BUNDLE_DIR "${default_lv2_bundle_dir}" CACHE PATH "LV2 bundle install directory")
set(FAUST_INCLUDE_DIR "${default_faust_include}" CACHE PATH "Faust include directory")

if(NOT EXISTS "${FAUST_INCLUDE_DIR}/faust/dsp/dsp.h")
  message(FATAL_ERROR "Faust headers not found under ${FAUST_INCLUDE_DIR}. Set -DFAUST_INCLUDE_DIR=...")
endif()

configure_file(
  "${CMAKE_SOURCE_DIR}/src/foo-yc20.lv2/manifest.ttl.in"
  "${CMAKE_BINARY_DIR}/foo-yc20.lv2/manifest.ttl"
  @ONLY
)

file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/foo-yc20.lv2")

set(yc20_common_sources
  src/foo-yc20.cpp
  src/yc20-precalc.c
  src/faust-dsp-plugin.cpp
)

# This file has a .c extension but includes C++-only headers/types.
set_source_files_properties(src/yc20-precalc.c PROPERTIES LANGUAGE CXX)

add_library(foo-yc20-lv2 MODULE
  src/lv2.cpp
  ${yc20_common_sources}
)

set_target_properties(foo-yc20-lv2 PROPERTIES
  OUTPUT_NAME "foo-yc20"
  PREFIX ""
)

if(WIN32)
  set_target_properties(foo-yc20-lv2 PROPERTIES SUFFIX ".dll")
endif()

# Raspberry Pi OS / Debian ship older libstdc++ and glibc than Ubuntu 24.04 CI hosts.
# Statically link the C++ runtime; build the ARM64 artifact in a Bookworm container (see CI).
option(YC20_STATIC_LIBSTDCXX "Statically link libstdc++/libgcc on Unix LV2 builds" ON)
if(YC20_STATIC_LIBSTDCXX AND UNIX AND NOT APPLE)
  target_link_options(foo-yc20-lv2 PRIVATE -static-libstdc++ -static-libgcc)
endif()

target_include_directories(foo-yc20-lv2 PRIVATE
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/src"
  "${FAUST_INCLUDE_DIR}"
)

target_compile_definitions(foo-yc20-lv2 PRIVATE
  PREFIX="${CMAKE_INSTALL_PREFIX}"
  VERSION=""
)

if(WIN32)
  target_compile_definitions(foo-yc20-lv2 PRIVATE
    _USE_MATH_DEFINES
    WIN32
    __WIN32__
  )
endif()

add_executable(headless-dsp-test
  tests/headless-dsp-test.cpp
  ${yc20_common_sources}
)

target_include_directories(headless-dsp-test PRIVATE
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/src"
  "${FAUST_INCLUDE_DIR}"
)

target_compile_definitions(headless-dsp-test PRIVATE
  PREFIX="${CMAKE_INSTALL_PREFIX}"
  VERSION=""
)

if(WIN32)
  target_compile_definitions(headless-dsp-test PRIVATE
    _USE_MATH_DEFINES
    WIN32
    __WIN32__
  )
endif()

add_custom_target(test-headless
  COMMAND headless-dsp-test
  DEPENDS headless-dsp-test
  COMMENT "Running headless DSP regression test"
)

if(WIN32)
  add_custom_target(test-msvc DEPENDS test-headless)
endif()

add_custom_command(TARGET foo-yc20-lv2 POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
          $<TARGET_FILE:foo-yc20-lv2>
          "${CMAKE_BINARY_DIR}/foo-yc20.lv2/${YC20_LV2_BINARY_NAME}"
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
          "${CMAKE_SOURCE_DIR}/src/foo-yc20.lv2/foo-yc20.ttl"
          "${CMAKE_BINARY_DIR}/foo-yc20.lv2/foo-yc20.ttl"
  COMMAND ${CMAKE_COMMAND} -E copy_if_different
          "${CMAKE_BINARY_DIR}/foo-yc20.lv2/manifest.ttl"
          "${CMAKE_BINARY_DIR}/foo-yc20.lv2/manifest.ttl"
)

install(TARGETS foo-yc20-lv2
  LIBRARY DESTINATION "${YC20_LV2_BUNDLE_DIR}"
  RUNTIME DESTINATION "${YC20_LV2_BUNDLE_DIR}"
)

install(FILES
  "${CMAKE_SOURCE_DIR}/src/foo-yc20.lv2/foo-yc20.ttl"
  "${CMAKE_BINARY_DIR}/foo-yc20.lv2/manifest.ttl"
  DESTINATION "${YC20_LV2_BUNDLE_DIR}"
)
