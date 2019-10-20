#!/usr/bin/env bash
set -e
set +x

(
  mkdir -p build
  cd build || exit
  cmake ../
  make
  ./src/rock_paper_scissors_app
)
