#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library named liball.a from the object files
ar rcs liball.a *.o

# Clean up: remove the temporary object files
rm *.o

echo "Static library liball.a created successfully."
