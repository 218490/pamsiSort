#include <cstdio>
#include <iostream>
#include "kontener.hh"

using namespace std;

int main(int argc, char *argv[])
{
  kontener skrzynia;

  skrzynia.wczytywanie();
  skrzynia.uzupelnij_tablice();
  skrzynia.policz_wczytane();

}
