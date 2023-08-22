#!/bin/bash
gcc inject.c -c -fPIC
gcc inject.o -shared -o libinject.so
export LD_PRELOA=D/$PWD/libinject.so

