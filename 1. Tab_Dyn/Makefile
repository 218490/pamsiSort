FLAGS= -c -Wall -std=c++11

all: tablica_dynamiczna.o Tablica.o
	g++ -Wall -std=c++11 tablica_dynamiczna.o Tablica.o -o Tablica

tablica_dynamiczna.o: tablica_dynamiczna.cpp
	g++ $(FLAGS) tablica_dynamiczna.cpp

Tablica.o: Tablica.cpp Tablica.hh
	g++ $(FLAGS) Tablica.cpp

clean:
	rm -f *.o Tablica
