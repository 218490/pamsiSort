#include "stdafx.h"
#include "Tablica.h"


Tablica::Tablica()
{
}


Tablica::~Tablica()
{
}

void Tablica::Powiekszanie_O1(){
	this->Rozmiar++;
	int * tab = new int[this->Rozmiar];
	for (int i = 0; i<this->Rozmiar; i++) tab[i] = this->tablica[i];
	delete[] this->tablica;
	//return tab;
	this->tablica = tab;
}

void Tablica::Powiekszanie_xRazy(int IleRazy){
	this->Rozmiar *= IleRazy;
	int * tab = new int[this->Rozmiar];
	for (int i = 0; i <= (this->Rozmiar) / IleRazy; i++) tab[i] = this->tablica[i];
	delete[] this->tablica;
	//return tab;
	this->tablica = tab;

}

void Tablica::Powiekszanie_Potega(){
	this->Rozmiar *= this->Rozmiar;
	int * tab = new int[Rozmiar];
	for (int i = 0; i <= (this->Rozmiar) / this->Rozmiar; i++) tab[i] = this->tablica[i];
	delete[] this->tablica;
	//return tab;
	this->tablica = tab;

}

void Tablica::SetSize(int n_wymiar){
	this->Rozmiar = n_wymiar;
	int * tab = new int[Rozmiar];
	for (int i = 0; i<Rozmiar; i++) tab[i] = this->tablica[i];
	delete[] this->tablica;
	//return tab;
	this->tablica = tab;

}

int Tablica::WhatSize(){
	return this->Rozmiar;
}

void Tablica::FillArray(int Index, int Wartosc){
	this->tablica[Index] = Wartosc;
}

int Tablica::Print(int Index){
	return this->tablica[Index];
}