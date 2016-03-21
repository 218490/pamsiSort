#include "stdafx.h"
#include "Stoper.h"

void Stoper::Start(){
	this->Time_Start = clock();
}

void Stoper::Stop(){
	this->Time_Stop = clock();
}

double Stoper::Get_Elapsed_Time(){
	return this->Elapsed_Time = (this->Time_Stop - this->Time_Start) / (double)CLOCKS_PER_SEC;
}

void Stoper::Dump_To_File(string Nazwa_Pliku){
	this->File_To_Dump.open(Nazwa_Pliku+=".txt", ios::app);
	if (File_To_Dump.is_open()) this->File_To_Dump << Elapsed_Time << endl;
	else cerr << "\t\t\tERROR \nBrak dostepu do pliku" << endl;
	this->File_To_Dump.close();
}