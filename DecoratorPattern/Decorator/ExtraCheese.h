#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "decorator.h"

class ExtraCheese : public Decorator{
public:
    ExtraCheese(BasePizza* p) : Decorator(p){};
    double cost() override {
        return pizza->cost() + 50.0;
    }
};

#endif
