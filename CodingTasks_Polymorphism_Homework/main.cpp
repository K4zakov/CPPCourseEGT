#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle circle("blue", 5.0);
    Rectangle rectangle("green", 4.0, 6.0);

    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    shape1->draw(); // Output: Drawing a blue circle with radius 5.
    shape2->draw(); // Output: Drawing a green rectangle with width 4 and height 6.

    return 0;
}