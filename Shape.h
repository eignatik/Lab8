#ifndef LAB8_SHAPE_H
#define LAB8_SHAPE_H


class Shape {
protected:
    int x, y;
public:
    int getX() const {
        return x;
    }
    int getY() const {
        return y;
    }
    bool isMoreLeft(Shape* shape) {
        return (x < shape->getX());
    }
    bool isMoreRight(Shape* shape) {
        return (x > shape->getX());
    }
    bool isUpper(Shape* shape) {
        return (y > shape->getY());
    }
    bool isMoreDown(Shape* shape) {
        return (y < shape->getY());
    }
    virtual void draw() const = 0;
};


#endif //LAB8_SHAPE_H
