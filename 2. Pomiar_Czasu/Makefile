FLAGS= -c -Wall -std=c++11 -I inc
#Biegacz.hh Sedzia.hh Stoper.hh Tablica.hh

all: Pomiar_Czasu.o Tablica.o Sedzia.o Stoper.o Biegacz.o
	g++ -Wall -std=c++11 Pomiar_Czasu.o Tablica.o Sedzia.o Stoper.o Biegacz.o -o Tablica

Pomiar_Czasu.o: src/Pomiar_Czasu.cpp 
	g++ $(FLAGS) src/Pomiar_Czasu.cpp

Tablica.o: src/Tablica.cpp inc/Tablica.hh
	g++ $(FLAGS) src/Tablica.cpp

Sedzia.o: src/Sedzia.cpp inc/Sedzia.hh
	g++ $(FLAGS) src/Sedzia.cpp

Stoper.o: src/Stoper.cpp inc/Stoper.hh
	g++ $(FLAGS) src/Stoper.cpp

Biegacz.o: src/Biegacz.cpp inc/Biegacz.hh
	g++ $(FLAGS) src/Biegacz.cpp

clean:
	rm -f *.o Tablica

