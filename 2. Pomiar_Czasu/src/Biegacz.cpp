#include "Biegacz.hh"


bool Biegacz::Prepare(int Size_To_Make){
	this->Tab.SetSize(Size_To_Make);
	return true;
}

bool Biegacz::Run(){
	for (int i = 0; i < this->Tab.WhatSize(); i++) this->Tab.FillArray(i, i);
	return true;
}
