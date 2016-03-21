#include "stdafx.h"
#include "Sedzia.h"


int Sedzia::GetSize(){
	return	this->Mierzony.Tab.WhatSize();
}

void Sedzia::Mierz(){
	this->Mierzony.Prepare(GetSize());
	this->Czasomierz.Start();
	this->Mierzony.Run();
	this->Czasomierz.Stop();
	this->Czasomierz.Get_Elapsed_Time();
	this->Czasomierz.Dump_To_File("Pomiary");
}