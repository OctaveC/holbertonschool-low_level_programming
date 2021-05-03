#!/bin/bash
gcc *.c -c -fpic *.c
gcc -shared -o liball.so *.o
