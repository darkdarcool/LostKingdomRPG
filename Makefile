main: main.o util.o
	g++ main.o util.o -o main

util.o: util.cpp
	g++ -c util.cpp

char.o: char.cpp
	g++ -c char.cpp

main.o: main.cpp
	g++ -c main.cpp