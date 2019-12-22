#pragma once
#include <iostream>

using  std::cin;
using std::cout;
using std::endl;
using std::string;

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
    void input();
    void print();
    void mult_matrica(const matrica &);
};
