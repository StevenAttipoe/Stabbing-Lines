#!/bin/sh
echo "Start testing Stab Line Program"
echo "Compiling testStabLineProg"
g++ -std=c++17 -c readPoints.cpp
g++ -std=c++17 -c readLines.cpp
g++ -std=c++17 -c printLineByCoords.cpp
g++ -std=c++17 -c getStabLines.cpp

echo "Compiling testStabLineProg.o"
g++ -std=c++17 -c testStabLineProg.cpp

echo "Creating the main Program testStabLineProg"
g++ -std=c++17 testStabLineProg.o readPoints.o readLines.o printLineByCoords.o getStabLines.o \ 
-o testStabLineProg

echo "Done Creating Test Stab Line Program"

