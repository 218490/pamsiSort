#ifndef IKOLEJKA_H
#define IKOLEJKA_H

class IKolejka{
public:
    virtual bool isEmpty() = 0;     // sprawdza czy kolejka jest pusta
    virtual int Back() = 0;         // zwraca wartosc ostaniego elementu
    virtual int Front() = 0;        // zwraca wartosc pierwszego elemetnu
    virtual void Push(int) = 0;     // (wartosc)wrzuca elemet na koniec kolejki
    virtual void Pop() = 0;         // sciaga element z kolejki
    virtual int Size() = 0;         // zwraca ilosc elemntow w kolejce
};
#endif
