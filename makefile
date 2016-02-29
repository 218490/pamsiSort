zadanie1: zadanie.o kontener.o
	g++ zadanie.o kontener.o -o zadanie1

zadanie.o: zadanie.cpp 
	g++ -c zadanie.cpp

kontener.o: kontener.cpp kontener.hh
	g++ -c kontener.cpp
