#include "radnik.h"

void radnik::input(){
    cout<<"Unesite sljdece vrijednosti: \n";
    cout<<"Ime radnika: ";
    cin>>ime;
    cout<<"Prezime radnika: ";
    cin>>prezime;
    cout<<"Koeficijent strucne spreme radnika: ";
    cin>>k;
}

void radnik::print(){
    cout<<"Ime    : "<<this->ime<<"\n";
    cout<<"Prezime: "<<this->prezime<<"\n";
    cout<<"Plata  : "<<this->k * cena<<"\n";
    cout<<"\n";
}

int radnik::ukupna_sredstva(){
    return broj_r * visina_n;
}

/*

ILI:

int ukupna_sredstva(){
    return radnik::broj_r * radnik::visina_n;
}

*/
