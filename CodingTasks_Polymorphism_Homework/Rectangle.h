#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(string color, double width, double height);
	double area() const override;
	void draw();
private:
	double width;
	double height;
};

