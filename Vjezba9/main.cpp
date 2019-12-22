#include "niz.h"

int main()
{
    niz A(3);
    add(123, A);
    add(45, A);
    add(45, A);
    cout<<A;
    add(456900, A);
    cout<<A;

    niz B(2);
    add(123, B);
    add(45, B);
    add(45, B);
    add(456900, B);

    if ( A == B ){
        cout<<"DA";
    }else{
        cout<<"NE";
    }
    return 0;
}
