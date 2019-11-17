#include <iostream>
#include <cstdlib>
#include "prava.h"
#include "sistem.h"
#include "niz.h"

int main()
{
    int n;
    std::cout<<"Broj pravih, n=";
    std::cin>>n;

    Prava *pr = new Prava[n];

    for (int i=0;i<n;i++){
        double a,b;
        std::cout<<i+1<<". prava:\n";
        std::cout<<"    p=";
        std::cin>>a;
        std::cout<<"    q=";
        std::cin>>b;
        pr[i][0] = a;
        pr[i][1] = b;
    }

    sistem *prr = new sistem[((n-1)*n)/2];
    int br = 0;

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if ( i != j ){
                prr[br] = sistem(pr[i][0], pr[i][1], pr[j][0], pr[j][1]);
                prr[br]();
                br++;
            }
        }
    }

    int red = 1;
    for (int i=0;i<br;i++){
        if ( prr->rj ){
            if ( prr[i].getX() >= 0 && prr[i].getY() >= 0 ){
                std::cout<<"Sistem "<<red<<": \n";
                std::cout<<prr[i];
                std::cout<<"\n";
                red++;
            }
        }
    }
    return 0;
}
