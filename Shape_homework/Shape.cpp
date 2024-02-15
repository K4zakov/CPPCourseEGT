#include "Shape.h"
#include <iostream>

void Shape::draw() const {
    std::cout << "Drawing a shape" << std::endl;
}

Shape::~Shape() {} // Virtual destructor