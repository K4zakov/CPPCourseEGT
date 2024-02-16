#include "Rectangle.h"

Rectangle::Rectangle(string color) : Shape(color) {

}

void Rectangle::draw() {
	cout << "Drawing a :" << color << " rectangle" << endl;
}