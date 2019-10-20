#!/usr/bin/env bash
set -e
set +x

(
  mkdir -p build
  cd build || exit
  cmake ../
  make
  ./test/rock_paper_scissors_tests
)
