cmake_minimum_required(VERSION 3.15)
project(divider)

add_subdirectory(rock-paper-scissors)
set(SOURCE_FILES main.cpp)

add_executable(rock_paper_scissors_app ${SOURCE_FILES})
target_link_libraries(rock_paper_scissors_app rock_paper_scissors)