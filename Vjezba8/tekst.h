#pragma once
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

class tekst{
private:
    int n;
    char *niz;
public:
    tekst();
    tekst(char *);
    tekst(const tekst &);
    ~tekst();
    friend ostream &operator<<(ostream &, const tekst &);
    friend istream &operator>>(istream &, tekst &);
    void operator=(const tekst &);
    void operator+(const tekst &);
};
