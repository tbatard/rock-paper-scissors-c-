cmake_minimum_required(VERSION 3.7.2)
project(rock_paper_scissors_c__)

set(CMAKE_CXX_STANDARD 14)

set(ROCK_PAPER_SCISSORS_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/rock-paper-scissors)

add_subdirectory(src)
add_subdirectory(test)
