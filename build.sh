#!/bin/bash
echo "Compiling C program..."
mkdir -p build
gcc src/guess.c -o build/guess
echo "Build Complete"

