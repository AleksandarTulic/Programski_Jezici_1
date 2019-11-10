#include <iostream>
#include "Complex.h"

Complex::Complex() : real(0), img(0){ // ukoliko ne saljemo nikakve vrijednosti on podrazumijeva da su nule
}

Complex::Complex(double a, double b) : real(a), img(b){ // konstruktor dojeljuje vrijednosti
}

void Complex::SetReal(double a){
    real = a;
}

void Complex::SetImaginary(double b){
    img = b;
}

double Complex::GetReal(){
    return real;
}

double Complex::GetImaginary(){
    return img;
}
