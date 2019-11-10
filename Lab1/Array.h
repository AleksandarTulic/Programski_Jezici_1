#pragma once

class Array{
    private:
        int n;
        double *niz; //pokaziv na dinamicki niz
    public:
        Array(int); //kontruktor koji alocira memoriju i dimenziju niza
        void InputArray(double); // dodaje se vrijednosti
        void PrintArray(); // ispisujemo vrijednosti
        ~Array(); //destruktor
};
