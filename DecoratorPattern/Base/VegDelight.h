#ifndef VEGDELIGHT_H
#define VEGDELIGHT_H

#include "BasePizza.h"

class VegDelight : public BasePizza {
public:
    double cost() override {
        return 300.0;
    }
};

#endif
