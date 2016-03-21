#ifndef STOPER_H
#define STOPER_H

#include "IStoper.h"
#include <ctime>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Stoper:public IStoper{
private:
	clock_t Time_Start;
	clock_t Time_Stop;
	double Elapsed_Time;
	fstream File_To_Dump;
public:
	void Start();
	void Stop();
	double Get_Elapsed_Time();
	void Dump_To_File(string);
};
#endif