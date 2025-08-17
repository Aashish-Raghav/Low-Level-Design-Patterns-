#ifndef UI_FACTORY_H
#define UI_FACTORY_H

#include "AbstractButton.h"

class UIFactory{
public:
    virtual Button* createButton() = 0;
};

#endif