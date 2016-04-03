//#include "Bubble_Sort.hh"
//#include "Tablica.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Bubble_Sort(int Array[]){
 int Rozmiar = sizeof(Array)/sizeof(Array[0]);
 for(int i = 0; i < Rozmiar; i++)
   for(int j = 1; j < Rozmiar - 1; j++)
     if(Array[j-1]>Array[j])  swap(Array[j-1],Array[j]);
}


int main(){
  int *Tab;
  Tab = new int[10];
  for(int i =0; i < 10; i++) Tab[i] = 9-i;

  for (int i = 0; i < 10; i++) cout << Tab[i];

  return 0;
 
}
