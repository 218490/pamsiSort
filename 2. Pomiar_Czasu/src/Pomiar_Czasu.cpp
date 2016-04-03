// Pomiar_Czasu.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

//#include "stdafx.h"
#include "Stoper.hh"
#include "Tablica.hh"
#include "Biegacz.hh"
#include "Sedzia.hh"
#include <iostream>
#include <ctime>
#include <cstdlib>

#include <unistd.h>
using namespace std;

int main()
{

	cout <<endl<< " Rozpoczynam pomiar.." << endl<<endl;
    int i[5] = {10, 1000, 10000, 30000, 10};
	Sedzia Pan_Mierzacy;
	for(int j = 0; j<5;j++){
	Pan_Mierzacy.Mierz(i[j]);
    }
    cout << " \t\t\t\t\t\tPomiar ukonczony.."<<endl<<"Dane znajduja sie w pliku 'Pomiary.txt'"<<endl;

	return 0;
}

