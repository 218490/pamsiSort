#ifndef STOS_HH
#define STOS_HH

class stos{
public:

    stos();
    virtual bool isEmpty() = 0;     // sprawdza czy pusty
    virtual int Size() = 0;         // zwraca ilosc elemtow na stosie
    virtual void Push(int) = 0;     // (wartosc) wcrzuca na stos
    virtual void Pop() = 0;         // sciaga ze stosu
    virtual int Top() = 0;          // zwraca wartosc ostatniego elementu na stosie
    virtual void Swap() = 0;        // zamienia ostatni element  przedostatnim

};


#endif
