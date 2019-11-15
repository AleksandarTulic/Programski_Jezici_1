#pragma once

class COMPLEX{
    private:
        int real;
        int img;
    public:
        COMPLEX();
        COMPLEX(double, double);
        void ispis();
        COMPLEX umnozak(COMPLEX, COMPLEX);
        COMPLEX sabiranje(COMPLEX, COMPLEX);
        COMPLEX oduzimanje(COMPLEX, COMPLEX);
        void operator++ (); //prefiksni
        void operator-- (); // prefiksni
};
