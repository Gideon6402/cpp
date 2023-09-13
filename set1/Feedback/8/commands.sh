#!/bin/bash

g++ --std=c++23 -Wall -Werror main.cc -o main.out

# Shows how the first argument can be printed when there are multiple:
./main.out 1 foo bar > output.txt
