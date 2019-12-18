#include <iostream>
#include "collection.h"
#include "set.h"

int main()
{
    COLLECTION p;

    SET t;
    t.add(12);
    t.add(12);
    t.add(456);
    t.add(16);
    std::cout<<t;
    t.erase(1);

    std::cout<<t;
    return 0;
}
