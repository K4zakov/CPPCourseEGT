#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(const string& col) : Shape(col) {}

    virtual void draw() const override;
};

