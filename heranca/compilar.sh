#!/bin/bash
source ./compilar.sh
cd src/
g++ -c *.cpp
cd ..
g++ main.cpp src/*.o -o programa