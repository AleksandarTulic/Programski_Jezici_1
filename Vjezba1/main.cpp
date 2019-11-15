#include <iostream>
#include "complex.h"

int main()
{
    COMPLEX a(2, 3);

    a.ispis();

    ++a;

    a.ispis();

    COMPLEX b(12, -1);
    b.ispis();

    b = b.sabiranje(a, b);

    b.ispis();

    b = b.umnozak(a, b);

    b.ispis();
    return 0;
}
