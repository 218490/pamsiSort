#include "stdafx.h"
#include "Stos.h"
#include <string>



using namespace std;


/*
ostream& Stos::operator<< (const int element)
{
	ostream *wyjscie;
	if (!is_empty())
	{
		return cout << this->peak() << endl;
		this->pop();
	}
	return cout << 'l';
}
*/


template <typename T>
void Stos<T>::push(T Nowa_Wartosc)
{
	//if (this->is_empty) Stos *Stack = NULL;

	Stos *Nowy_Ele = new Stos;
	if (!Nowy_Ele) return;
	Nowy_Ele->Wskaznik = Stack;
	Nowy_Ele->Wartosc = Nowa_Wartosc;
	Stack = Nowy_Ele;
}
template <typename T>
T Stos<T>::pop()
{
	T tmp;

	if (!this->Stack) return 0;

	Stos *Stary = Stack;
	tmp = Stary->Wartosc;
	Stack = Stary->Wskaznik;
	delete Stary;

	return tmp;
}

template <typename T>
T Stos<T>::peak()
{
	T tmp;

	if (!this->Stack) return 0;

	Stos *Stary = Stack;
	tmp = Stary->Wartosc;

	return tmp;
}

template <typename T>
string Stos<T>::to_string() //const
{
	T tmp = NULL;
	string tmp_s;
	while (!this->is_empty())
	{

		tmp = this->peak();
		tmp_s = std::to_string(tmp);
		this->Elementy_Stosu += tmp_s;
		this->pop();
		if (!this->is_empty()) this->Elementy_Stosu += ", ";
	}

	return this->Elementy_Stosu;
}

template <typename T>
bool Stos<T>::is_empty()
{
	if (Stack == NULL) return true;
	else return false;

}

/*
istream &operator >> (istream &wejscie, Var& Var) {
	try
	{
		wejscie >> Var.tmpint;
		return wejscie;
	}
	catch (const std::exception& ex)
	{
		try
		{
			wejscie >> Var.tmpfloat;
			return wejscie;
		}
		catch (const std::exception& ex)
		{
			try
			{
				wejscie >> Var.tmpstring;
				return wejscie;
			}
			catch (const std::exception& ex)
			{
				cerr << "Exception:" << "Nieobs³ugiwany typ danych" << ex.what();

			}

		}
	}
}
*/