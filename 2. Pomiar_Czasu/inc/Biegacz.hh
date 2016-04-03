#ifndef BIEGACZ_HH
#define BIEGACZ_HH

#include "IRunnable.hh"
#include "Tablica.hh"

class Biegacz : public IRunnable{
public:
	Tablica Tab;
	bool Prepare(int);
	bool Run();
};
#endif

