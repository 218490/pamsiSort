#pragma once

#ifndef STOS_H
#define STOS_H

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T>
class Stos
{
	Stos *Stack = NULL;
	T Wartosc;
	Stos *Wskaznik;
	string Elementy_Stosu;
	bool is_empty();

public:
	void push(T);
	T pop();
	T peak();
	string to_string(); //const;

	//friend ostream& operator<< (ostream &, Stos  &);
};

/*class Var
{
public:
	int tmpint;
	float tmpfloat;
	string tmpstring;
	friend istream& operator >> (istream &, Var&);
	friend ostream &operator << (ostream &wejscie, Var &Var);
};*/
#endif
