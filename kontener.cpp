#include "kontener.hh"
#include <iostream>
#include <cstdio>

using namespace std;

class kontener {
  

  int ile = 0;
  int* tablica = new int[ile];
  int wczytano_pomyslnie = 0;
public:
 
  void wczytywanie()
  { 
    int ile = 10;
    this->tablica = new int[ile];
   }
 

  void uzupelnij_tablice()
  {
    for(int i=0;i < ile; i++) this->tablica[i] = i;
  }

  int policz_wczytane()
  {
  this->wczytano_pomyslnie = sizeof(tablica)/sizeof(tablica[0]);
  return wczytano_pomyslnie;
  }
  

  void wczytaj()
  {
    this->tablica = new int[this->ile]
      for(int i = 0; i < this->ile; i++)
	{
	  if(i == this->ile - 1) ile++;
	  tablica[i] = i;

	}
  }


   
};
