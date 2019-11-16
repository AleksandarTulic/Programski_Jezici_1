#pragma once
#include "prava.h"

class sistem{
    private:
        Prava a;
        Prava b;
        double xr;
        double yr;
        bool rj;
        friend std::ostream& operator<<(std::ostream&, sistem&);
    public:
        sistem();
        sistem(double, double, double, double);
        bool operator()();
        double getX();
        double getY();
};
