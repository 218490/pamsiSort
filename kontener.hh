#ifndef KONTENER_HH
#define KONTENER_HH

#include <iostream>
#include <cstdio>

class kontener {
  int ile;
  int* tablica;
  int wczytano_pomyslnie;
public:
  void wczytywanie();
  void uzupelnij_tablice();
  int policz_wczytane();
  void wczytaj();


#endif
