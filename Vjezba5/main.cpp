#include <iostream>
#include "radnik.h"

int radnik::broj_r = 0;
int radnik::cena = 0;
int radnik::visina_n = 0;

int main()
{
    cout<<"Unesite broj radnika: ";
    cin>>radnik::broj_r;
    cout<<"Cijena rada: ";
    cin>>radnik::cena;
    cout<<"Visina naknade za prevoz: ";
    cin>>radnik::visina_n;

    radnik *p = new radnik[radnik::broj_r];

    for (int i=0;i<radnik::broj_r;i++){
        p[i].input();
        //(p + i)->input();
    }

    for (int i=0;i<radnik::broj_r;i++){
        p[i].print();
    }

    cout<<"Velicina sredstava potrebnih da se iplati za naknadu: "<<radnik::ukupna_sredstva()<<"\n";

    delete [] p;
    return 0;
}
