#pragma once
#include "sistem.h"

class niz{
    private:
        sistem *p;
        int bp;
        int bt;
    public:
        friend int getCardinal(niz &);
        niz(int n);
        void operator+=(sistem a);
        sistem operator-(int i);
        ~niz();
};
