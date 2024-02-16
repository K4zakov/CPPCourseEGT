#include "Rectangle.h"

Rectangle::Rectangle(string color, double width, double height) : Shape(color) {
	this->width = width;
	this->height = height;
}
double Rectangle::area() const {
	return width * height;
}

void Rectangle::draw() {
	cout << "Drawing a :" << color << " rectangle" << endl;
}