#ifndef SEDZIA_HH
#define SEDZIA_HH

#include "Biegacz.h"
#include "Stoper.h"
#include "Tablica.h"

class Sedzia
{
public:
	Stoper Czasomierz;
	Biegacz Mierzony;

	void Mierz();
	int GetSize();

};
#endif