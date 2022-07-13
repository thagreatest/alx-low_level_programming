#!/bin/bash
gcc -c -fpic *.c
gcc *.c -shared -o liball.so