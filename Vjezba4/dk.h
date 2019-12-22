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
    double get_x();
    double get_y();

};
