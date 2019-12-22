#include "tekst.h"

tekst::tekst() : n(0), niz(NULL) {}

tekst::tekst(char *a){
    n = 0;
    while ( a[n++] != '\0' );

    niz = new char[n+1];

    std::copy(a, a + n, niz);
}

tekst::tekst(const tekst &a) : n(a.n){
    niz = new char[n];
    std::copy(a.niz, a.niz + n, niz);
}

void tekst::operator+(const tekst &a){
    char *buff = new char[n];
    std::copy(niz, niz + n, buff);

    delete [] niz;

    niz = new char[n + a.n];

    std::copy(buff, buff + n, niz);
    std::copy(a.niz, a.niz + a.n, niz + n);
    n+= a.n;
}

void tekst::operator=(const tekst &a){
    delete [] niz;

    n = a.n;

    niz = new char[a.n];

    std::copy(a.niz, a.niz + a.n, niz);
}

tekst::~tekst(){
    delete [] niz;
}

ostream &operator<<(ostream &ispis, const tekst &a){
    ispis<<"Elementi niza su: ";
    for (int i=0;i<a.n;i++){
        ispis<<a.niz[i]<<" ";
    }

    ispis<<endl;

    return ispis;
}

istream &operator>>(istream &unos, tekst &a){
    cout<<"Unesite broj elemenata niza: ";
    unos>>a.n;
    cout<<"Unesite ele. niza: ";

    a.niz = new char[a.n];

    for (int i=0;i<a.n;i++){
        unos>>a.niz[i];
    }

    return unos;
}
