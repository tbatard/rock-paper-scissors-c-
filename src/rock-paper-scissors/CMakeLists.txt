cmake_minimum_required(VERSION 3.15)
project(rock_paper_scissors)

set(SOURCE_FILES HelloWorld.h HelloWorld.cpp)

add_library(rock_paper_scissors SHARED STATIC ${SOURCE_FILES})