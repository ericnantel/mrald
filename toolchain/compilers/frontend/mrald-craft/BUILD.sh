#!/bin/sh

os=$(uname -o)

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

if [[ "$os" == 'Msys' ]]; then
	./bin/Debug/mrald_craft_cli.exe
else
	./bin/mrald_craft_cli
fi

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

if [[ "$os" == 'Msys' ]]; then
	./bin/Debug/mrald_craft_parser.exe
else
	./bin/mrald_craft_parser
fi

cd ../..

echo 
echo +===============================+
echo + Building Mrald-Craft Linter.. +
echo +===============================+
echo 

cd linter
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

echo 
echo +===============================+
echo + Testing Mrald-Craft Linter..  +
echo +===============================+
echo 

if [[ "$os" == 'Msys' ]]; then
	./bin/Debug/mrald_craft_linter.exe
else
	./bin/mrald_craft_linter
fi

cd ../..

echo 
echo +===============================+
echo + Mrald-Craft Build Done. +++++++
echo +===============================+
echo 
