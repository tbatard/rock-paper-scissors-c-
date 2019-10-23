cmake_minimum_required(VERSION 3.7.2)
project(rock_paper_scissors)

set(SOURCE_FILES RockPaperScissors.cpp RockPaperScissors.h RockPaperScissorsApp.cpp RockPaperScissorsApp.h)

add_library(rock_paper_scissors SHARED STATIC ${SOURCE_FILES})