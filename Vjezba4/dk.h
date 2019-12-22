#pragma once
#include <cmath>
#include <stdlib.h>

class TACKA{
private:
    double x;
    double y;
public:
    void set_tacka(double, double);
    void change(double, double);
    double dist(TACKA&);
    inline double get_x();
    inline double get_y();

};
