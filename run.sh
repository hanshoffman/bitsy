#!/bin/bash

make clean
rm -rf out.txt
make
clear
time ./bitsy > out.txt
