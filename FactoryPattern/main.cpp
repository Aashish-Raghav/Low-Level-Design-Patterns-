#include<bits/stdc++.h>
#include "ShapeFactory.h"
using namespace std;

int main(){
    ShapeFactory factory;
    Shape* shape1 = factory.getShape("Circle");
    Shape* shape2 = factory.getShape("Square");

    if (shape1) {
        shape1->draw();
    }
    if (shape2) {
        shape2->draw();
    }

    delete shape1;
    delete shape2;

    return 0;
}