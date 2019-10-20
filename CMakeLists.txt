cmake_minimum_required(VERSION 3.15)
project(rock_paper_scissors_c__)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES HelloWorld.cpp HelloWorld.h)

add_executable(rock_paper_scissors main.cpp ${SOURCE_FILES})

add_subdirectory(Google_tests)

add_executable(Google_Tests_run ${SOURCE_FILES} HelloWorldTest.cpp)
target_link_libraries(Google_Tests_run gtest_main)