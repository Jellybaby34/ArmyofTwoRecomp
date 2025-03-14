project("XenonUtils")

add_library(XenonUtils
    "disasm.cpp" 
    "xex.cpp" 
    "image.cpp" 
    "xdbf_wrapper.cpp"
    "xex_patcher.cpp"
    "memory_mapped_file.cpp"
    "${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/libmspack/libmspack/mspack/lzxd.c"
    "${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/tiny-AES-c/aes.c"
)

target_compile_definitions(XenonUtils
    PRIVATE
        NOMINMAX
)

target_include_directories(XenonUtils 
    PUBLIC 
        .
    PRIVATE
        "${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/libmspack/libmspack/mspack"
        "${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/tiny-AES-c"
        "${ARMYOFTWO_RECOMP_THIRDPARTY_ROOT}/TinySHA1"
)

target_link_libraries(XenonUtils 
    PUBLIC
        disasm
)
