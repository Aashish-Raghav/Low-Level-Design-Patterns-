#include "UIFactory.h"
#include "WindowsFactory.h"
#include "MacOSFactory.h"

#include <bits/stdc++.h>

void clientCode(UIFactory* factory){
    Button* button = factory->createButton();
    button->render();
    delete button;
}

int main(){
    std::cout << "Using Windows Factory:\n";
    UIFactory* winFactory = new WindowsFactory();
    clientCode(winFactory);

    std::cout << "Using MacOS Factory:\n";
    UIFactory* macFactory = new MacOSFactory();
    clientCode(macFactory);

    return 0;
}