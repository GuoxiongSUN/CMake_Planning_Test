cmake_minimum_required(VERSION 3.29.0)
project(CMake_Planning_Test
    VERSION 1.0
    DESCRIPTION "A test project for CMake Planning"
    HOMEPAGE_URL "https://github.com/GuoxiongSUN/CMake_Planning_Test"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
set(Show_Result_Dir ${CMAKE_SOURCE_DIR}/src/show_result)


add_subdirectory(src)