#ifndef LISTA_HH
#define LISTA_HH

class ILista{
public:
    virtual void Add(int, int) = 0; // (argument, index)
    virtual void Remove(int) = 0;   // (index)
    virtual bool isEmpty() = 0;     // sprawdza czy pusta
    virtual int Get(int) = 0;       //(index) zwraca wartosc pod zadanym indexem
    virtual int Size() = 0;         // zwraca ilosc elementow w liscie
};
#endif
