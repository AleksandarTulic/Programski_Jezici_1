#include <iostream>
#include "sistem.h"

sistem::sistem() : a(1, 0), b(-1, 0), xr(0), yr(0), rj(false){
}

sistem::sistem(double p1, double q1, double p2, double q2){
    Prava aa(p1, q1);
    Prava bb(p2, q2);
    a = aa;
    b = bb;
    xr = yr = 0;
    rj = false;
}

bool sistem::operator()(){
    if ( a[0] == b[0] ){
        rj = false;
    }else{
        rj = true;

        xr = (a[1] - b[1]) / (b[0] - a[0]);
        yr = b[0] * xr + b[1];
    }

    return rj;
}

double sistem::getX(){
    return xr;
}

double sistem::getY(){
    return yr;
}

std::ostream& operator<<(std::ostream& os, sistem &s){
    if ( !s.rj ){
        return os<<"ne postoji tacno jedno rjesenje sistema";
    }else{
        if ( s.a[1] < 0.0 ){
            if ( s.b[1] < 0 ){
                return os<<"oznaka: y = "<<s.a[0]<<"x - "<<s.a[1]*(-1)<<"\n"<<"oznaka: y = "<<s.b[0]<<"x - "<<s.b[1]*(-1)<<"\n"<<"rjesnje: ("<<s.xr<<", "<<s.yr<<")\n";
            }else{
                return os<<"oznaka: y = "<<s.a[0]<<"x - "<<s.a[1]*(-1)<<"\n"<<"oznaka: y = "<<s.b[0]<<"x + "<<s.b[1]<<"\n"<<"rjesnje: ("<<s.xr<<", "<<s.yr<<")\n";
            }
        }else{
            if ( s.b[1] < 0 ){
                return os<<"oznaka: y = "<<s.a[0]<<"x + "<<s.a[1]<<"\n"<<"oznaka: y = "<<s.b[0]<<"x - "<<s.b[1]*(-1)<<"\n"<<"rjesnje: ("<<s.xr<<", "<<s.yr<<")\n";
            }else{
                return os<<"oznaka: y = "<<s.a[0]<<"x + "<<s.a[1]<<"\n"<<"oznaka: y = "<<s.b[0]<<"x + "<<s.b[1]<<"\n"<<"rjesnje: ("<<s.xr<<", "<<s.yr<<")\n";
            }
        }
    }
}
