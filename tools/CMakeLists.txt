cmake_policy(SET CMP0077 NEW)

add_subdirectory(${ARMYOFTWO_RECOMP_TOOLS_ROOT}/disasm)

add_subdirectory("${ARMYOFTWO_RECOMP_TOOLS_ROOT}/XenonUtils")







#[[
set(MSDF_ATLAS_BUILD_STANDALONE OFF)
set(MSDF_ATLAS_USE_SKIA OFF)
set(MSDF_ATLAS_NO_ARTERY_FONT ON)
set(MSDFGEN_DISABLE_PNG ON)
#set(MSDFGEN_CORE_ONLY ON) # Ainsley

set(SDL2MIXER_DEPS_SHARED OFF)
set(SDL2MIXER_VENDORED ON)
set(SDL2MIXER_FLAC OFF)
set(SDL2MIXER_MOD OFF)
set(SDL2MIXER_MP3 OFF)
set(SDL2MIXER_MIDI OFF)
set(SDL2MIXER_OPUS OFF)
set(SDL2MIXER_VORBIS "VORBISFILE")
set(SDL2MIXER_WAVPACK OFF)

add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/disasm)
add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/bc_diff)
add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/file_to_c)
add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/fshasher)
add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/x_decompress)

if (NOT TARGET libzstd)
    add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/zstd/build/cmake")
endif()

if (NOT TARGET fmt::fmt)
    add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/fmt)
endif()

if (NOT TARGET tomlplusplus::tomlplusplus)
    add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/tomlplusplus)
endif()

if (NOT TARGET xxHash::xxhash)
    add_subdirectory(${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/xxHash/cmake_unofficial)
endif()

add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/msdf-atlas-gen")
add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/o1heap")
add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/SDL")
add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/SDL_mixer")
add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/XenonUtils")
add_subdirectory("${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/XenosRecomp")
]]