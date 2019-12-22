#include "matrica.h"

int main()
{
    matrica a(2, 3);
    matrica b(3, 2);

    a.input();
    a.print();
    b.input();
    b.print();

    cout<<"\n";
    a.mult_matrica(b);

    a.print();
    return 0;
}
