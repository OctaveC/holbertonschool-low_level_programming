#!/bin/bash
gcc *.c -c -Wall -pedantic -Werror -Wextra -fpic *.c
gcc -shared -o liball.so *.o
