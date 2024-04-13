cmake_minimum_required(VERSION 3.0)

project(raylib_wrapper)


set(CUSTOM_BUILD_DIR "${CMAKE_SOURCE_DIR}/build/_deps/raylib-wrapper-build")

set(CMAKE_BINARY_DIR "${CUSTOM_BUILD_DIR}")
set(EXECUTABLE_OUTPUT_PATH "${CUSTOM_BUILD_DIR}")
set(LIBRARY_OUTPUT_PATH "${CUSTOM_BUILD_DIR}")

set(SOURCES 
    src/RaylibWrapper.cpp
)

set(HEADERS 
    include/RaylibWrapper.hpp
)

add_library(raylib_wrapper ${SOURCES} ${HEADERS})

target_link_libraries(raylib_wrapper PRIVATE raylib)

target_include_directories(raylib_wrapper PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

