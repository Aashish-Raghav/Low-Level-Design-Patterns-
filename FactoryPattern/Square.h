#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <iostream>
using namespace std;

class Square : public Shape {
public:
    void draw() override {
        cout << "Square" << endl;
    }
};

#endif