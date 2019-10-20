cmake_minimum_required(VERSION 3.15)
project(Google_tests)

set(GOOGLETEST_VERSION 1.10.0)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


