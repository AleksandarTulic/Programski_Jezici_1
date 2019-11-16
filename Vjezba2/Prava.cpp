#include <iostream>
#include "prava.h"

Prava::Prava() : p(0) , q(0){
}

Prava::Prava(double a, double b){
    p = a;
    q = b;
}

std::ostream& operator<<(std::ostream& os, const Prava &a){
    if ( a.q < 0.0 )
        return os<<"oznaka: y = "<<a.p<<"x - "<<a.q*(-1)<<"\n";
    else
        return os<<"oznaka: y = "<<a.p<<"x + "<<a.q<<"\n";
}

double Prava::operator()(double x){
    return this->p * x + this->q;
}

double& Prava::operator[](int x){
    if ( !x ){
        return this->p;
    }else{
        return this->q;
    }
}
