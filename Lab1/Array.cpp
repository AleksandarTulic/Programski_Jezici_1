#include <iostream>
#include "Array.h"

Array::Array(int s){
    niz = new double[s];
    n = s;
}

void Array::InputArray(double value){
    double *p = niz;

    for (int i=0;i<n;i++){
        *(p + i) = value;
    }
}

void Array::PrintArray(){
    for (int i=0;i<n;i++){
        std::cout<<niz[i]<<"\n";
    }
}

Array::~Array(){
    delete [] niz;
}
