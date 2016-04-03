#ifndef TABLICA_H
#define TABLICA_H
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class tablica
{
private:
  int start_size = 10;
  int* Tablica = new int[start_size];
  int new_size = 0;

public:

  void nadaj_rozmiar(int rozmiar)
  {
    this->new_size = rozmiar;
  }
  
  void zwieksz_plus1()
  {
    for(int i = this->start_size; i <= this->new_size-1; i++)
      {
	
	int** Zmienna_Tab =new int*[i];
	Zmienna_Tab = &Tablica;  
	delete[] this->Tablica;
	this->Tablica = new int[i+1];
	this->Tablica = *Zmienna_Tab;
      }
  }

  void zwieksz_x2()
  {
    for(int i = this->start_size; i <= this->new_size-1;i = i*2)
      {
	int** Zmienna_Tab = new int*[2*i];
	for(int i = this->start_size; i <= this->new_size-1;i++)
	  {
	     Zmienna_Tab[i] = &Tablica[i];
	     delete[]this->Tablica;
	     this->Tablica = new int[1*i];
	     this->Tablica = (*Zmienna_Tab);
    	  }
	
      }  
    
  }

  void wypelnij_tablice()
 {
      for(int i = 0; i <= this->new_size-1; i++) this->Tablica[i] = i;
    }
  
  void dodaj50()
    {
      for(int i = 0; i <= this->new_size-1; i++) this->Tablica[i] = i+50;
    }
  
  void wypisz()
  {
    for(int i = 0; i <= this->new_size-1; i++) cout<<this->Tablica[i]<< "\t";
  }
};


int main(int argc, char *argv[])
{
  tablica Tab;
  clock_t StartTime = clock();
  clock_t StopTime;
  double time;

 Tab.nadaj_rozmiar(100);
 Tab.zwieksz_plus1();
 // Tab.zwieksz_x2();
 Tab.wypelnij_tablice();
 Tab.wypisz();
 Tab.dodaj50();
 Tab.wypisz();
 StopTime = clock();
 time = (StopTime-StartTime)/(double) CLOCKS_PER_SEC;
 cout <<endl << "Mineło " << time << "sekund."<<endl;
}

#endif // TABLICA_H
