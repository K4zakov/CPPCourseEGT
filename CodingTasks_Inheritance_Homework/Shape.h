#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string& col) : color(col) {}
    virtual ~Shape() {}

    virtual void draw() const = 0;
};

