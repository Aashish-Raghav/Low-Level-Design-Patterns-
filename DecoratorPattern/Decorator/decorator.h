#ifndef DECORATOR_H
#define DECORATOR_H

#include "../Base/BasePizza.h"

class Decorator : public BasePizza {
protected:
    BasePizza* pizza;
public:
    Decorator(BasePizza* p) : pizza(p) {}
};

#endif