#pragma once
#include <iostream>

using  std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;

class matrica{
private:
    int r;
    int c;
    int **m;
public:
    matrica();
    matrica(int, int);
    matrica(const matrica &);
    ~matrica();
    istream &input(istream &);
    void print();
    //void mult_matrica(const matrica &);
    friend istream &operator>>(istream &, matrica &);
    matrica operator*(const matrica &);
    void operator=(const matrica &);
};
