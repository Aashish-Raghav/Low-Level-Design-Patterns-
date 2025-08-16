#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "decorator.h"

class Mushroom : public Decorator {
public:
    Mushroom(BasePizza* p) : Decorator(p) {}
    double cost() override {
        return pizza->cost() + 30.0;
    }
};

#endif
