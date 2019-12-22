#include "niz.h"

int main()
{
    niz A(3);
    add(12, A);
    add(-34, A);
    add(45, A);
    cout<<A;
    add(456900, A);
    cout<<A;
    return 0;
}
