#pragma once
#include <iostream>

class COLLECTION{
protected:
    int *p;
    int n;
    int bt;
public:
    COLLECTION(int);
    COLLECTION();
    COLLECTION(const COLLECTION &);
    virtual void add(int);
    virtual void erase(int);
    virtual ~COLLECTION();
    friend std::ostream &operator<<(std::ostream &, const COLLECTION &);
    friend std::istream &operator>>(std::istream &, COLLECTION &);
};
