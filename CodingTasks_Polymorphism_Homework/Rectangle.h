#pragma once
#include "Shape.h"

class Rectangle : public Shape {
protected:
    double width;
    double height;

public:
    Rectangle(const string& col, double w, double h) : Shape(col), width(w), height(h) {}

    virtual void draw() const override;
};


