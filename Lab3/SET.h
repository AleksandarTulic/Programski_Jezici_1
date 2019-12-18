#pragma once
#include <iostream>
#include "collection.h"

class SET : public COLLECTION{
public:
    virtual void add(int) override;
    virtual void erase(int) override;
};
