#include <iostream>
#include <ctime>

using namespace std;
// klasa zawierajaca tablice dynamiczna i metody do jej powiekszania/pomniejszania
class Tablica {

public:
  int Rozmiar = 10;
  int * tablica = new int[Rozmiar];
// powiekszanie tablicy o jedno miejsce az do momentu dopasowania
  int * Powiekszanie_O1(){
    this->Rozmiar++;
    int * tab = new int[this->Rozmiar];
    for(int i=0; i<this->Rozmiar; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
// powiekszanie tablicy dwukrotnie
  int * Powiekszanie_xRazy(int IleRazy){
    this->Rozmiar*=IleRazy;
    int * tab = new int[this->Rozmiar];
    for(int i=0; i<=(this->Rozmiar)/IleRazy; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
// powiekszanie tablicy potegowo
  int * Powiekszanie_Potega(){
    this->Rozmiar*=this->Rozmiar;
    int * tab = new int[Rozmiar];
    for(int i=0; i<=(this->Rozmiar)/this->Rozmiar; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
//pomniejszanie tablicy do zadanego wymiaru w przypadku zarezerwowania nadmiernej ilosci pamieci, lub do "suchego" uzycia
  int * SetSize(int n_wymiar){
    this->Rozmiar = n_wymiar;
    int * tab = new int[Rozmiar];
    for(int i=0; i<Rozmiar; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
};



int main()
{
 // zmienne potrzebne do pomiaru czasu
 clock_t TimeStart, TimeStop;
 // zmienna okreslajaca iloma elementami "inicjujemy" tablice
 int Nowy_Rozmiar;
 // zmienne do testow
 Tablica Tab_1;
 Tablica Tab_2;
 Tablica Tab_3;
 // domyslny zadeklarowany rozmiar, inicjacja nie jest wymagana gdy jest reczny wybor zmiennej
 int PowiekszXRazy=2;

cout<<"Poczatkowy rozmiar tablicy tablicy:"<<Tab_1.Rozmiar<<endl;
cout<<"Wprowadz nowy wymiar tablicy: ";
cin>>Nowy_Rozmiar;

cout << "O ile razy chcesz zwiekszac tablice:";
cin >> PowiekszXRazy;

//Zwiekszanie rozmiaru tablicy o 1 miejsce
  TimeStart = clock();
  while(Nowy_Rozmiar>Tab_1.Rozmiar) Tab_1.tablica=Tab_1.Powiekszanie_O1();
  TimeStop = clock();
  double czas_1 = (TimeStop-TimeStart)/(double) CLOCKS_PER_SEC;

//Zwiekszanie rozmiaru tablicy dwukrotnie
  TimeStart = clock();
  while(Nowy_Rozmiar>Tab_2.Rozmiar) Tab_2.tablica=Tab_2.Powiekszanie_xRazy(PowiekszXRazy);
  if(Nowy_Rozmiar<Tab_2.Rozmiar) Tab_2.tablica=Tab_2.SetSize(Nowy_Rozmiar);
  TimeStop = clock();
  double czas_2 = (TimeStop-TimeStart)/(double) CLOCKS_PER_SEC;

//Zwiekszanie rozmiaru tablicy do kwadratu obecnego rozmiaru
  TimeStart = clock();
  while(Nowy_Rozmiar>Tab_3.Rozmiar) Tab_3.tablica=Tab_3.Powiekszanie_Potega();
  if(Nowy_Rozmiar<Tab_3.Rozmiar) Tab_3.tablica=Tab_3.SetSize(Nowy_Rozmiar);
  TimeStop = clock();
  double czas_3 = (TimeStop-TimeStart)/(double) CLOCKS_PER_SEC;

cout<<"Czas wykonywania algorytmu zwiekszania zakresu tablicy zajmuje:"<<endl;
cout<<"O jedno pole: \t\t\t\t\t"<<czas_1<<" sekund"<<endl
<<"O zadana krotnosc powiekszenia: \t\t"<<czas_2<<" sekund"<<endl
<<"O kwadrat obecnego rozmiaru: \t\t\t"<<czas_3<<" sekund"<<endl;

    return 0;
}
