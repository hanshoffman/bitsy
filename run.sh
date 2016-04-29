#!/bin/bash

make clean
rm -rf out.txt
make
if [ `echo $?` = 0 ]; then
    clear
    time ./bitsy > out.txt
fi
