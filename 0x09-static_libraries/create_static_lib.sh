#!/bin/bash

# Loop through all the C files in the directory
for file in *.c
do
  # Compile the file and create an object file
  gcc -c $file -o ${file%.c}.o

  # Add the object file to the library
  ar rcs liball.a ${file%.c}.o
done
