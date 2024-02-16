#pragma once
#include "Shape.h"

class Circle : public Shape {
protected:
    double radius;

public:
    Circle(const string& col, double r) : Shape(col), radius(r) {}

    virtual void draw() const override;
};

