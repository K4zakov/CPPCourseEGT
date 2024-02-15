#include "Box.h"


Box::Box(double width, double length, double height) : width(width), length(length), height(height) {}


void Box::setWidth(double width) 
{
    width = width; 
}
void Box::setLength(double length) 
{ 
    length = length;
}
void Box::setHeight(double height) 
{ 
    height = height;
}
double Box::getWidth() const 
{ 
    return width;
}
double Box::getLength() const 
{ 
    return length;
}
double Box::getHeight() const 
{ 
    return height;
}


Box operator+(const Box& box1, const Box& box2) {
    double newWidth = (box1.width > box2.width) ? box1.width : box2.width;
    double newLength = box1.length + box2.length;
    double newHeight = box1.height + box2.height;
    return Box(newWidth, newLength, newHeight);
}