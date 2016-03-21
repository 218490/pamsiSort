// Pomiar_Czasu.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "Stoper.h"
#include "Tablica.h"
#include "Biegacz.h"
#include "Sedzia.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main(int argc, _TCHAR* argv[])
{
	/*Stoper S;
	S.Start();	
	S.Stop();	
	S.Get_Elapsed_Time();
	std::cout << S.Get_Elapsed_Time();
	//S.Dump_To_File("Pliczek");
	*/

	Sedzia Pan_Mierzacy;
	Pan_Mierzacy.GetSize();
	Pan_Mierzacy.Mierz();

	return 0;
}

