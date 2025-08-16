#ifndef VEGMAGARITA_H
#define VEGMAGARITA_H

#include "BasePizza.h"

class VegMargherita : public BasePizza {
public:
    double cost() override {
        return 250.0;
    }
};

#endif
