#include "Circle.h"
#include "Rectangle.h"

int main() {
    Circle circle("blue");
    Rectangle rectangle("red");

    circle.draw(); // Output: Drawing a blue circle.
    rectangle.draw(); // Output: Drawing a green rectangle.

    return 0;
}