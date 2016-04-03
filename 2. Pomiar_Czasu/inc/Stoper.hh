#ifndef STOPER_HH
#define STOPER_HH

#include "IStoper.hh"
#include <sys/time.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Stoper:public IStoper{
private:
	timeval *Time_Start = new timeval;
	timeval *Time_Stop = new timeval;
	double Elapsed_Time;
	fstream File_To_Dump;
public:
	void Start();
	void Stop();
	double Get_Elapsed_Time();
	void Dump_To_File(string);
};
#endif
