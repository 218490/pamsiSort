#ifndef ISTOPER_H
#define ISTOPER_H

#include <string>

class IStoper{
public:
	virtual void Start() = 0;
	virtual void Stop() = 0;
	virtual double Get_Elapsed_Time() = 0;
	virtual void Dump_To_File(std::string) = 0;
};
#endif