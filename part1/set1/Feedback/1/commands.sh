#!/usr/bin/env bash

# Compile down to an object file.
g++ -Wall -Werror --std=c++23 -c hello.cc -o hello.o

# Create an executable from the object file.
g++ -Wall -Werror --std=c++23 -s hello.o -o hello.out
# JB: Yes, though some of the options are ignored by the linker.

# Store the programme output to a file.
./hello.out > output.txt

# Construct the file with all the sizes.
echo "bytes	filename" > sizes.txt

for file in hello* /usr/include/c++/13.2.1/iostream; do
	echo "$(du -sb $file)" >> sizes.txt
done 
# JB: Good! You know how to use a shell :-)
