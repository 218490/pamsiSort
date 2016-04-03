// klasa zawierajaca tablice dynamiczna i metody do jej powiekszania/pomniejszania
class Tablica {

public:
  int Rozmiar = 10;
  double * tablica = new double[Rozmiar];
// powiekszanie tablicy o jedno miejsce az do momentu dopasowania
  double * Powiekszanie_O1(){
    this->Rozmiar++;
    double * tab = new double[this->Rozmiar];
    for(int i=0; i<this->Rozmiar; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
// powiekszanie tablicy dwukrotnie
  double * Powiekszanie_xRazy(int IleRazy){
    this->Rozmiar*=IleRazy;
    double * tab = new double[this->Rozmiar];
    for(int i=0; i<=(this->Rozmiar)/IleRazy; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
// powiekszanie tablicy potegowo
  double * Powiekszanie_Potega(){
    this->Rozmiar*=this->Rozmiar;
    double * tab = new double[Rozmiar];
    for(int i=0; i<=(this->Rozmiar)/this->Rozmiar; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
//pomniejszanie tablicy do zadanego wymiaru
  double * SetSize(int n_wymiar){
    this->Rozmiar = n_wymiar;
    double * tab = new double[Rozmiar];
    for(int i=0; i<Rozmiar; i++) tab[i]=this->tablica[i];
    delete [] this->tablica;
    return tab;
  }
};


class Stoper{
public:
    clock_t StartTime;
    clock_t StopTime;
    double ElapsedTime;
    int licznik_tab = 0;
    Tablica DumpArray;

    void Pomiar_Start(){
        this->StartTime = clock();
    }
    void Pomiar_Stop(){
        this->StopTime = clock();
    }
    void Get_Elapsed_Time(){
        this->ElapsedTime = (this->StopTime-this->StartTime)/ (double)CLOCKS_PER_SEC;
        if(this->DumpArray.Rozmiar == licznik_tab) this->DumpArray.Powiekszanie_O1();
        this->DumpArray.tablica[this->licznik_tab] = this->ElapsedTime;
        this->licznik_tab++;
        cout<<"this is elapsedtime()->"<<this->ElapsedTime<<endl;//DumpArray.tablica[this->licznik_tab]<<endl;

    }
    void Dump_To_File(){
        fstream plik;
        plik.open("pomiar_czasu.txt",std::ios::out);
        if (plik.good() == true) {
         for(int i = 0; i <= this->DumpArray.Rozmiar;i++){
             plik<<DumpArray.tablica[i]<<endl;
         }
        }
        else cerr<<"Brak dostepu do pliku."<<endl;
        plik.close();

    }


};
