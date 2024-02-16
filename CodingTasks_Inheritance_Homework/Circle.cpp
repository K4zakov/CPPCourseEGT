#include "Circle.h"

Circle::Circle(string color) : Shape(color) {

}

void Circle::draw() {
	cout << "Drawing a :" << color << " circle" << endl;
}