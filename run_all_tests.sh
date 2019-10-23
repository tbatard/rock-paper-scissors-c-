#!/usr/bin/env bash
set -e
set +x

cmake -H. -Bbuild
cmake --build build
./build/bin/rock_paper_scissors_tests
