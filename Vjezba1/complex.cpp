#include <iostream>
#include "complex.h"

COMPLEX::COMPLEX() : real(0) , img(0)
{
}

COMPLEX::COMPLEX(double a, double b){
    real = a;
    img = b;
}

COMPLEX COMPLEX::oduzimanje(COMPLEX a, COMPLEX b){
    COMPLEX c;
    c.real = a.real - b.real;
    c.img = a.img - b.img;
    return c;
}

COMPLEX COMPLEX::sabiranje(COMPLEX a, COMPLEX b){
    COMPLEX c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

COMPLEX COMPLEX::umnozak(COMPLEX a, COMPLEX b){
    COMPLEX c;
    c.real = a.real * b.real + (-1 * a.img * b.img);
    c.img = a.img * b.real + a.real * b.img;;
    return c;
}

void COMPLEX::operator++(){
    (this->real)++;
    (this->img)++;
}

void COMPLEX::operator--(){
    (this->real)++;
    (this->img)++;
}

void COMPLEX::ispis(){
    std::cout<<this->real<<" "<<this->img<<std::endl;
}
