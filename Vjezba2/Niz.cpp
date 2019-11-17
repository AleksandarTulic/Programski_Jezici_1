#include <iostream>
#include "niz.h"

niz::niz(int n){
    bp = n;
    bt = n;
    p = new sistem[n];
}

void niz::operator+=(sistem a){
    a();
    if ( a.rj == false ){
        return;
    }

    if ( bt < bp ){
        bt++;
        p[bt] = a;
    }else{
        bt++;
        bp++;

        sistem *novi = new sistem[bt];
        for (int i=0;i<bt-1;i++){
            novi[i] = p[i];
        }

        novi[bt-1] = a;

        delete [] p;

        p = novi;
    }
}

sistem niz::operator-(int i){ //smatramo da ovdje uvijek se moze obrisati element jer nisu naveli da treba raiti provjeru
    for (int j=i;j<bt;j++){
        p[j-1] = p[j];
    }
    bt--;

    return p[0];
}

niz::~niz(){
    delete [] p;
}

int getCardinal(niz &a){
    return a.bt;
}
