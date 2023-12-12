#!/bin/sh

#echo 
#echo +===============================+
#echo + Cleaning Mrald-Craft.. ++++++++
#echo +===============================+
#echo 

#rm -d -R ./cli/build
#rm -d -R ./parser/build
#rm -d -R ./scanner/build

echo 
echo +===============================+
echo + Building Mrald-Craft CLI.. ++++
echo +===============================+
echo 

cd cli
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

echo 
echo +===============================+
echo + Testing Mrald-Craft CLI.. +++++
echo +===============================+
echo 

./bin/Debug/mrald_craft_cli.exe

cd ../..

echo 
echo +===============================+
echo + Building Mrald-Craft Parser.. +
echo +===============================+
echo 

cd parser
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

echo 
echo +===============================+
echo + Testing Mrald-Craft Parser.. ++
echo +===============================+
echo 

./bin/Debug/mrald_craft_parser.exe

cd ../..

echo 
echo +===============================+
echo + Building Mrald-Craft Scanner..+
echo +===============================+
echo 

cd scanner
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

echo 
echo +===============================+
echo + Testing Mrald-Craft Scanner.. +
echo +===============================+
echo 

./bin/Debug/mrald_craft_scanner.exe

cd ../..

echo 
echo +===============================+
echo + Mrald-Craft Build Done. +++++++
echo +===============================+
echo 
