#include <iostream>
#include "Complex.h"
#include "Array.h"

int main()
{
    Complex c(1.34, 17.288);

    std::cout<<"Real part: "<<c.GetReal()<<std::endl;
    std::cout<<"Imaginary part: "<<c.GetImaginary()<<std::endl;
    c.SetImaginary(0.7765);
    std::cout<<"Imaginary part: "<<c.GetImaginary()<<std::endl;

    Array arr(10);
    arr.InputArray(12.91);
    arr.PrintArray();
    return 0;
}
