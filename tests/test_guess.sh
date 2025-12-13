#!/bin/bash
echo "Running Test..."
./build/guess <<< "10" | grep "Correct guess!"
