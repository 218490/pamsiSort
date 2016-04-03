#include "Sedzia.hh"
#include <iostream>

void Sedzia::Mierz(int Zadany_Rozmiar_Do_Biegu){
	this->Mierzony.Prepare(Zadany_Rozmiar_Do_Biegu);
	this->Czasomierz.Start();
	this->Mierzony.Run();
	this->Czasomierz.Stop();
	this->Czasomierz.Get_Elapsed_Time();
	this->Czasomierz.Dump_To_File("Pomiary");
}
