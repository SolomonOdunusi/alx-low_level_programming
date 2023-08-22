#!/bin/bash
gcc inject.c -c -fPIC
gcc inject.o -shared -o libinject.so
LD_PRELOAD=/$PWD/libinject.so ./gm 9 8 10 24 75 9
