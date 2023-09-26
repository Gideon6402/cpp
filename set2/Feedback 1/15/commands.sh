#!/bin/bash

g++ --std=c++23 -Wall -Werror main.cc -o main.out

./main.out < file.txt > output.txt
