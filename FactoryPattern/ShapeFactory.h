#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "Shape.h"
#include "Circle.h"
#include "Square.h"

class ShapeFactory {
public:
    Shape* getShape(const string &s){
        if (s == "Circle") {
            return new Circle();
        } else if (s == "Square") {
            return new Square();
        }
        return nullptr;
    }

};

#endif