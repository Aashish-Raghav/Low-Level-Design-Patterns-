#ifndef MACOS_FACTORY_H
#define MACOS_FACTORY_H

#include "UIFactory.h"
#include "Button.h"

class MacOSFactory: public UIFactory{
public:
    Button* createButton() override{
        return new MacOSButton();
    }
};

#endif