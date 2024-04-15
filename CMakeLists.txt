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

#third party library
set(EIGEN3_INCLUDE_DIR "W:\\mylib\\eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")


find_package(Eigen3 3.4 REQUIRED)

if(TARGET Eigen3::Eigen)
    message(STATUS "Found Eigen3: ${Eigen3_VERSION}")
else()
    message(FATAL_ERROR "Could not find Eigen3")
endif()



add_subdirectory(src)