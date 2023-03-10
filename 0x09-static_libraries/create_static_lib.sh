#!/bin/bash

# Get the current directory
dir=$(pwd)

# Set the library name
libname="liball.a"

# Create an empty library file
touch $liball

# Loop through all the C files in the directory
for file in $dir/*.c
do
  # Compile the file and create an object file
  gcc -c $file -o ${file%.c}.o

  # Add the object file to the library
  ar rcs $liball ${file%.c}.o
done
