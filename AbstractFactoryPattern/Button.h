#ifndef BUTTON_H
#define BUTTON_H

#include "AbstractButton.h"
#include <iostream>

class WindowsButton : public Button{
public: 
    void render() override {
        std::cout << "Rendering Windows Button" << std::endl;
    }
};

class MacOSButton : public Button{
public: 
    void render() override {
        std::cout << "Rendering MacOS Button" << std::endl;
    }
};

#endif