#include "Tablica.hh"
#include <iostream>
#include <sys/time.h>

using namespace std;


int main()
{
	// zmienne potrzebne do pomiaru czasu
	timeval *start = new timeval;
	timeval *stop = new timeval;
	// zmienna okreslajaca iloma elementami "inicjujemy" tablice
	int Nowy_Rozmiar;
	// zmienne do testow
	Tablica Tab_1;
	Tablica Tab_2;
	Tablica Tab_3;
	int PowiekszXRazy = 2;

	cout << "Poczatkowy rozmiar tablicy tablicy:" << Tab_1.WhatSize() << endl;//Tab_1.Rozmiar << endl;
	cout << "Wprowadz nowy wymiar tablicy: ";
	cin >> Nowy_Rozmiar;

	cout << "O ile razy chcesz zwiekszac tablice:";
	cin >> PowiekszXRazy;

	//Zwiekszanie rozmiaru tablicy o 1 miejsce
    gettimeofday(start, NULL);
	while (Nowy_Rozmiar > Tab_1.WhatSize())	Tab_1.Powiekszanie_O1();//Tab_1.tablica = Tab_1.Powiekszanie_O1();
	gettimeofday(stop, NULL);
	double czas_1 = (stop->tv_sec-start->tv_sec)*1000000 + stop->tv_usec-start->tv_usec;

	//Zwiekszanie rozmiaru tablicy dwukrotnie
	gettimeofday(start,NULL);
	while (Nowy_Rozmiar > Tab_2.WhatSize()) Tab_2.Powiekszanie_xRazy(PowiekszXRazy);//Tab_2.tablica = Tab_2.Powiekszanie_xRazy(PowiekszXRazy);
	if (Nowy_Rozmiar < Tab_2.WhatSize()) Tab_2.SetSize(Nowy_Rozmiar);//Tab_2.tablica = Tab_2.SetSize(Nowy_Rozmiar);
	gettimeofday(stop, NULL);
	double czas_2 = (stop->tv_sec-start->tv_sec)*1000000 + stop->tv_usec-start->tv_usec;


	//Zwiekszanie rozmiaru tablicy do kwadratu obecnego rozmiaru
	gettimeofday(start,NULL);
	while (Nowy_Rozmiar>Tab_3.WhatSize()) Tab_3.Powiekszanie_Potega();//Tab_3.tablica = Tab_3.Powiekszanie_Potega();
	if (Nowy_Rozmiar < Tab_3.WhatSize()) Tab_3.SetSize(Nowy_Rozmiar);//Tab_3.tablica = Tab_3.SetSize(Nowy_Rozmiar);
	gettimeofday(stop, NULL);
	double czas_3 = (stop->tv_sec-start->tv_sec)*1000000 + stop->tv_usec-start->tv_usec;

	cout << "Czas wykonywania algorytmu zwiekszania zakresu tablicy zajmuje:" << endl;
	cout << "O jedno pole: \t\t\t\t\t" << czas_1 << " mikrosekund" << endl
		<< "O zadana krotnosc powiekszenia: \t\t" << czas_2 << " mikrosekund" << endl
		<< "O kwadrat obecnego rozmiaru: \t\t\t" << czas_3 << " mikrosekund" << endl;

/*
	for (int i = 0; i < Nowy_Rozmiar; i++) Tab_1.FillArray(i, i);
	for (int i = 0; i < Nowy_Rozmiar; i++) cout << Tab_1.Print(i)<<".";

	Tab_1.Powiekszanie_O1();
	for (int i = 0; i < Nowy_Rozmiar; i++) cout << Tab_1.Print(i)<<".";
*/


	return 0;
}

