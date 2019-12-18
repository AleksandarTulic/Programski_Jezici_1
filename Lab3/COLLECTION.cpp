#include "collection.h"

COLLECTION::COLLECTION(int broj) : n(broj), bt(0){
    p = new int[n];
}

COLLECTION::COLLECTION() : n(0), bt(0){
    p = nullptr;
}

COLLECTION::COLLECTION(const COLLECTION &buff){
    n = buff.n;
    bt = buff.bt;
    delete [] p;
    p = new int[n];
    for (int i=0;i<n;i++){
        p[i] = buff.p[i];
    }
}

COLLECTION::~COLLECTION(){
    delete [] p;
}

std::ostream &operator<<(std::ostream &print, const COLLECTION &buff){
    std::cout<<"Kolekcija od "<<buff.bt<<" elemenata je: \n";
    for (int i=0;i<buff.bt;i++){
        print<<buff.p[i]<<std::endl;
    }

    return print;
}

void COLLECTION::add(int broj){
    if ( bt + 1 <= n ){
        p[bt] = broj;
        bt++;
    }else{
        COLLECTION buff(*this);
        delete [] p;
        p = new int[n + 1];

        for (int i=0;i<n;i++){
            p[i] = buff.p[i];
        }

        p[n] = broj;
        n++;
        bt++;
    }
}

void COLLECTION::erase(int index){
    if ( index > bt || index < 0 ){
        return;
    }else{
        for (int i=index+1;i<=bt;i++){
            p[i-1] = p[i];
        }

        bt--;
    }
}

std::istream &operator>>(std::istream &input, COLLECTION &a){
    std::cout<<"Unesite velicinu niza: \n";
    input>>a.n;
    a.p = new int[a.n];

    for (int i=0;i<a.n;i++){
        int b;
        input>>b;
        a.add(b);
    }

    return input;
}
