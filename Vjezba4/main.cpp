#include <iostream>
#include "dk.h"

int main()
{
    static TACKA a;
    TACKA *b = new TACKA;

    double d1;
    double d2;
    std::cout<<"UNESITE KOO. STATIC TACKE: \n";
    std::cin>>d1;
    std::cin>>d2;
    a.set_tacka(d1, d2);
    std::cout<<"UNESITE KOO. DYNAMIC TACKE: \n";
    std::cin>>d1;
    std::cin>>d2;
    b->set_tacka(d1,d2);

    std::cout<<"STATIC : "<<a.get_x()<<" "<<a.get_y()<<"\n";
    std::cout<<"DYNAMIC: "<<b->get_x()<<" "<<b->get_y()<<"\n";

    std::cout<<"RASTOJANJE: "<<a.dist(*b)<<"\n";

    a.change(2.5, 2.5);
    b->change(2.5, 2.5);

    std::cout<<"STATIC : "<<a.get_x()<<" "<<a.get_y()<<"\n";
    std::cout<<"DYNAMIC: "<<b->get_x()<<" "<<b->get_y()<<"\n";

    delete b;
    return 0;
}
