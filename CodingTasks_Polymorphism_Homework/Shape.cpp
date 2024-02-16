#include "Shape.h"

Shape::Shape(string color)
{
	this->color = color;
}

void Shape::draw()
{
	cout << "Drawing a " << color << " shape" << endl;
}

