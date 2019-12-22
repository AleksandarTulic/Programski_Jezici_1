#include "niz.h"

niz::niz() : n(0), t(0), a(NULL) {}

niz::niz(int broj) : n(broj), t(0), a(new int[broj]) {}

niz::niz(const niz &b) : n(b.n), t(b.n-1){
    a = new int[n];

    std::copy(b.a, b.a + n, a);
}

niz::~niz(){
    delete [] a;
}

void add(int broj, niz &b){
    if ( b.t + 1 > b.n ){
        niz c(b);

        delete [] b.a;

        b.a = new int[b.n + INC];
        std::copy(c.a, c.a + b.n, b.a);

        b.a[b.t++] = broj;
        b.n+=INC;
    }else{
        b.a[b.t++] = broj;
    }
}

int operator==(const niz &d1, const niz &d2){
    if ( d1.t != d2.t ){
        return 0;
    }else{
        for (int i=0;i<d1.t;i++){
            if ( d1.a[i] != d2.a[i] ){
                return 0;
            }
        }

        return 1;
    }
}

std::ostream &operator<<(std::ostream &ispis, const niz &b){
    ispis<<"Elementi niza su: ";

    for (int i=0;i<b.t;i++){
        ispis<<b.a[i]<<" ";
    }

    return ispis;
}
