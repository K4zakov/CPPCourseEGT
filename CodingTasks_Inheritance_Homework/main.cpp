//codingTasks_Inheritance_Homework:
//Inheritance: Create a base class Shape with a protected attribute color and
//a public method draw().Derive two classes from it : Circle and Rectangle.
//Override the draw() method to print the shape's color and what shape it is 
//(e.g., "Drawing a red circle").

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
int main()
{
    Shape s("red");

    Rectangle r1("Blue");
    r1.draw();
    Circle c1("yellow");
    c1.draw();
}

