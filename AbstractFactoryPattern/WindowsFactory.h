#ifndef WINDOWS_FACTORY_H
#define WINDOWS_FACTORY_H

#include "UIFactory.h"
#include "Button.h"

class WindowsFactory: public UIFactory{
public:
    Button* createButton() override{
        return new WindowsButton();
    }
};

#endif