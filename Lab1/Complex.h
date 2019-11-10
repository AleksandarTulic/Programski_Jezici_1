#pragma once

class Complex{
    private:
        double real;
        double img;
    public:
        Complex();
        Complex(double, double);
        void SetImaginary(double);
        void SetReal(double);
        double GetReal();
        double GetImaginary();
};
