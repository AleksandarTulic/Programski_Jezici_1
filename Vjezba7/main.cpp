#include "matrica.h"

int main()
{
    matrica a(2, 3);
    matrica b(3, 2);

    cin>>a;
    cin>>b;

    a.print();
    b.print();

    matrica d = a * b;

    d.print();
    return 0;
}
