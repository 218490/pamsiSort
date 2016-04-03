#include "Stoper.hh"
#include <sys/time.h>

void Stoper::Start(){
	gettimeofday(Time_Start, NULL);
}

void Stoper::Stop(){
	gettimeofday(Time_Stop, NULL);
}

double Stoper::Get_Elapsed_Time(){
return this->Elapsed_Time =	(Time_Stop->tv_sec-Time_Start->tv_sec)*1000000 + Time_Stop->tv_usec-Time_Start->tv_usec;
 }

void Stoper::Dump_To_File(string Nazwa_Pliku){
	this->File_To_Dump.open(Nazwa_Pliku+=".txt", ios::app | ios::out);
	if (File_To_Dump.is_open()) this->File_To_Dump << this->Get_Elapsed_Time() << endl;
	else cerr << "\t\t\tERROR \nBrak dostepu do pliku" << endl;
	this->File_To_Dump.close();
}
