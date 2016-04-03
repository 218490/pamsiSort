#ifndef SEDZIA_HH
#define SEDZIA_HH

#include "Biegacz.hh"
#include "Stoper.hh"
#include "Tablica.hh"

class Sedzia
{
public:
	Stoper Czasomierz;
	Biegacz Mierzony;

	void Mierz(int);

};
#endif
