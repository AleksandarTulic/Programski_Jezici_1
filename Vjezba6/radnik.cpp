#include "matrica.h"

matrica::matrica() : r(0), c(0), m(NULL) {}

matrica::matrica(int rr, int cc) : r(rr), c(cc){
    m = new int*[r];

    for (int i=0;i<r;i++){
        m[i] = new int[c];
    }
}

matrica::matrica(const matrica &a) : r(a.r), c(a.c) {
    m = new int*[r];

    for (int i=0;i<r;i++){
        m[i] = new int[c];
    }

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            m[i][j] = a.m[i][j];
        }
    }
}

matrica::~matrica(){
    for (int i=0;i<r;i++){
        delete [] m[i];
    }

    delete [] m;
}

void matrica::input(){
    if ( r != 0 ){
        cout<<"Unesite ele. matrica: \n";
        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                cout<<"["<<i+1<<", "<<j+1<<"] = ";
                cin>>m[i][j];
            }
        }
    }
}

void matrica::print(){
    if ( r != 0 ){
        cout<<"Ele. matrice su: \n";

        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                cout<<"["<<i+1<<", "<<j+1<<"] = "<<m[i][j]<<endl;
            }
        }
    }
}

void matrica::mult_matrica(const matrica &a){
    if ( r == a.c ){

        matrica b(r, a.c);

        for (int i=0;i<r;i++){
            int vr = 0;
            for (int j=0;j<a.c;j++){
                vr = 0;
                for (int k=0;k<a.r;k++){
                    vr+=m[i][k] * a.m[k][j];
                }
                b.m[i][j] = vr;
            }
        }

        r = b.r;
        c = b.c;

        for (int i=0;i<r;i++){
            delete [] m[i];
        }

        delete [] m;

        m = new int*[b.r];
        for (int i=0;i<b.r;i++){
            m[i] = new int[b.c];
        }

        for (int i=0;i<b.r;i++){
            for (int j=0;j<b.c;j++){
                m[i][j] = b.m[i][j];
            }
        }
    }else{
        cout<<"Nemoguca je operacija mnozenja matrica\n";
    }
}
