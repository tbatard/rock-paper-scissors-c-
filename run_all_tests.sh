#!/usr/bin/env bash
set -e
set +x

cmake -H. -Bbuild
cmake --build build
./build/test/rock_paper_scissors_tests
