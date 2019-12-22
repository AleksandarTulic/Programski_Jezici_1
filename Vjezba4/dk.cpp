#include "dk.h"

void TACKA::set_tacka(double a, double b){
    this->x = a;
    this->y = b;
}

double TACKA::dist(TACKA &a){
    double d1 = abs(a.get_x() - this->x);
    double d2 = abs(a.get_y() - this->y);

    return sqrt( d1*d1 + d2*d2 );
}

double TACKA::get_x(){
    return this->x;
}

double TACKA::get_y(){
    return this->y;
}

void TACKA::change(double a, double b){
    this->x+=a;
    this->y+=b;
}
