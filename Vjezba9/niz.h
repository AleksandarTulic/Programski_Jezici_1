#pragma once
#include <iostream>
const int INC = 10;
using std::cin;
using std::cout;
using std::endl;

class niz{
private:
    int n;
    int t;
    int *a;
public:
    niz();
    niz(int);
    niz(const niz &);
    ~niz();
    friend void add(int, niz &);
    friend void destroy(int);
    friend int operator==(const niz &, const niz &);
    friend std::ostream &operator<<(std::ostream &, const niz &);
};
