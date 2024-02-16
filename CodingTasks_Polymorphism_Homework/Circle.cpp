#include "Circle.h"

Circle::Circle(string color, double radius) : Shape(color) {
	this->radius = radius;
}
double Circle::area() const {
	double PI = 3.14;
		return PI * radius * radius;
}
void Circle::draw() {
	cout << "Drawing a :" << color << " circle" << endl;
}