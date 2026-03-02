cmake_minimum_required(VERSION 3.20)
project(ShaderCompiler C CXX)
add_executable(lemon EXCLUDE_FROM_ALL "${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/misc/lemon.c")
target_compile_options(lemon PRIVATE "-std=c89")
add_custom_command(
    OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/mojoshader_parser_hlsl.h"
    MAIN_DEPENDENCY "${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/mojoshader_parser_hlsl.lemon"
    DEPENDS lemon "${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/misc/lempar.c"
    COMMAND $<TARGET_FILE:lemon>
    ARGS -q "-T${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/misc/lempar.c" "${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/mojoshader_parser_hlsl.lemon"
)
add_subdirectory(glsl-optimizer EXCLUDE_FROM_ALL)
add_subdirectory(hlsl2glslfork EXCLUDE_FROM_ALL)
set(COMPILER_SOURCES
    main.cpp
    md5/md5.c
    mojoshader/mojoshader.c
    mojoshader/mojoshader_common.c
    mojoshader/mojoshader_preprocessor.c
    mojoshader/mojoshader_lexer.c
    mojoshader/mojoshader_compiler.c
    # add more mojoshader .c files if we get undefined reference pls
)
add_executable(ShaderCompiler ${COMPILER_SOURCES})
set_source_files_properties(
    mojoshader/mojoshader_compiler.c
    PROPERTIES OBJECT_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/mojoshader/mojoshader_parser_hlsl.h"
)
target_include_directories(ShaderCompiler PRIVATE
    .
    ./md5
    ./mojoshader
    ./glsl-optimizer/include
    ./hlsl2glslfork/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../ClientShared
)
target_link_libraries(ShaderCompiler PRIVATE
    glsl_optimizer
    hlsl2glsl
)
