project("ArmyofTwoRecompLib")

add_compile_options(
    -fno-strict-aliasing
)

if (WIN32)
    add_compile_options(/fp:strict)
else()
    add_compile_options(-ffp-model=strict)
endif()

set(ARMYOFTWO_RECOMP_PPC_RECOMPILED_SOURCES 
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_config.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_context.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_func_mapping.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_recomp_shared.h"
)

set(XENOS_RECOMP_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/shader/shader_cache.h") ## Taken from XenosRecomp

foreach(i RANGE 0 248)
    list(APPEND ARMYOFTWO_RECOMP_PPC_RECOMPILED_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_recomp.${i}.cpp")
endforeach()

add_library(ArmyofTwoRecompLib 
    ${ARMYOFTWO_RECOMP_PPC_RECOMPILED_SOURCES}
    ${XENOS_RECOMP_INCLUDE}
)

target_include_directories(ArmyofTwoRecompLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_precompile_headers(ArmyofTwoRecompLib PUBLIC "ppc/ppc_recomp_shared.h")
