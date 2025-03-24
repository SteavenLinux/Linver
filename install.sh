#!/bin/sh

mkdir -p build
cd ./build/
qmake6 ../linver.pro
make
sudo make install
