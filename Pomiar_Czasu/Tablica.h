#ifndef TABLICA_H
#define TABLICA_H
// klasa zawierajaca tablice dynamiczna i metody do jej powiekszania/pomniejszania
class Tablica
{
public:
	Tablica();
	~Tablica();
private:
	int Rozmiar = 10;
	int * tablica = new int[Rozmiar];
public:
	
	void Powiekszanie_O1();				// powiekszanie tablicy o jedno miejsce az do momentu dopasowania
	void Powiekszanie_xRazy(int);		// powiekszanie tablicy dwukrotnie		
	void Powiekszanie_Potega();			// powiekszanie tablicy potegowo	
	void SetSize(int);					// pomniejszanie tablicy do zadanego wymiaru
	int	WhatSize();						// Zwraca rozmiar tablicy
	void FillArray(int,int);			// Uzupelnia tablice w miescu arg1, wartoscia arg2
	int Print(int);						// zwraca wartoœæ w tablicy o indeksie argumentu
};
#endif