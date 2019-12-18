#include "set.h"

void SET::add(int broj){
    for (int i=0;i<bt;i++){
        if ( broj == COLLECTION::p[i] ){
            return;
        }
    }

    if ( bt + 1 <= n ){
        p[bt] = broj;
        bt++;
    }else{
        SET buff(*this);
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

void SET::erase(int index){
    COLLECTION::erase(index);
}
