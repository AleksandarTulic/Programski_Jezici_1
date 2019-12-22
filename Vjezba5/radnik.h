#pragma once
#include <iostream>

using std::cin;
using std::string;
using std::cout;

class radnik{
private:
    string ime;
    string prezime;
    int k;
public:
    static int broj_r;
    static int cena;
    static int visina_n;

    void input();
    void print();
    static int ukupna_sredstva();
};
