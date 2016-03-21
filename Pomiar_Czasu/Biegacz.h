#ifndef BIEGACZ_H
#define BIEGACZ_H

#include "IRunnable.h"
#include "Tablica.h"

class Biegacz : public IRunnable{
public:
	Tablica Tab;
	bool Prepare(int);
	bool Run();
};
#endif

