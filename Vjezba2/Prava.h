#pragma once
#include <iostream>

using namespace std;

class Prava{
    private:
        double p;
        double q;
        friend ostream& operator<<(ostream&, const Prava&);
    public:
        Prava();
        Prava(double, double);
        double operator() (double);
        double& operator[] (int);
};
