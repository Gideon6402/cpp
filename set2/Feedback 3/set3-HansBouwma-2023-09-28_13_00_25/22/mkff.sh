#!/bin/bash

name=$1

# Make sure we have no name conflicts
if [ -d $name ]; then
    echo "folder \"${name}\" already exists - aborting"
    exit
fi

# Create the folder structure.
mkdir $name
cd $name
touch ${name}.ih
touch ${name}.hh

# Add a guard claus to the external header.
echo "#ifndef ${name}_hh"       >> ${name}.hh
echo "#define ${name}_hh"       >> ${name}.hh
echo ""                         >> ${name}.hh
echo "// Declarations go here:" >> ${name}.hh
echo ""                         >> ${name}.hh
echo ""                         >> ${name}.hh
echo "#endif"                   >> ${name}.hh

# Add include to main.ih
cd ..
echo "#include \"${name}/${name}.hh\"" >> main.ih

# Add files to order.txt
echo ""                       >> order.txt
echo "\"${name}/${name}.hh\"" >> order.txt
echo "\"${name}/${name}.ih\"" >> order.txt

