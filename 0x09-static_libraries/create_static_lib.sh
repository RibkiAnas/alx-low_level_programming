#!/bin/bash
# Create an object file for each .c file
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Create the static library from all object files
ar -rc liball.a *.o
