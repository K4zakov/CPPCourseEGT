

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
void printArea(const Shape* shape) {
	cout << "Area of shape : " << shape->area() << endl;
}

int main()
{
	Circle circle("Red", 5.5);
	Rectangle rectangle("Black", 6.0, 8.2);
	circle.draw();
	printArea(&circle);
	rectangle.draw();
	printArea(&rectangle);
}

