#include <iostream>
using namespace std;
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    
    Circle circle;
    Rectangle rectangle;

    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

  
    shape1->draw(); 
    shape2->draw(); 

    return 0;
}