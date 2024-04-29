#!/bin/sh

os=$(uname -o)

echo 
echo +===============================+
echo + Building Mrald-Craft License..+
echo +===============================+
echo 

cd license
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

cd ../..

echo 
echo +===============================+
echo + Building Mrald-Craft Lexer.. ++
echo +===============================+
echo 

cd lexer
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

cd ../..

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
	./bin/Debug/cli.exe
else
	./bin/cli
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
	./bin/Debug/parser.exe
else
	./bin/parser
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
	./bin/Debug/linter.exe
else
	./bin/linter
fi

cd ../..

echo 
echo +===============================+
echo + Building Mrald-Craft Format.. +
echo +===============================+
echo 

cd formatter
mkdir -p build
cd build
cmake ..
cmake --build . --config Debug

echo 
echo +===============================+
echo + Testing Mrald-Craft Format..  +
echo +===============================+
echo 

if [[ "$os" == 'Msys' ]]; then
	./bin/Debug/formatter.exe
else
	./bin/formatter
fi

cd ../..

echo 
echo +===============================+
echo + Mrald-Craft Build Done. +++++++
echo +===============================+
echo 
