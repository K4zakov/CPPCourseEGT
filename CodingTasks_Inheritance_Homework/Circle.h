#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(const string& col) : Shape(col) {}

    virtual void draw() const override;
};

