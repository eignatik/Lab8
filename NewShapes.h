#include <stdio.h>
#include <iostream>
#include "Shape.cpp"

#ifndef LAB8_NEWSHAPES_H
#define LAB8_NEWSHAPES_H


using namespace std;

class Circle : public Shape {
public:
    Circle(int _x, int _y) {
        x = _x;
        y = _y;
    }
    virtual void draw() const {
        cout << "Circle" << " {" << x << ", " << y << "}" << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(int _x, int _y) {
        x = _x;
        y = _y;
    }
    virtual void draw() const {
        cout << "Triangle" << " {" << x << ", " << y << "}" << endl;
    }
};

class Square : public Shape {
public:
    Square(int _x, int _y) {
        x = _x;
        y = _y;
    }
    virtual void draw() const {
        cout << "Square" << " {" << x << ", " << y << "}" << endl;
    }
};



#endif //LAB8_NEWSHAPES_H
