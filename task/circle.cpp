#include "circle.h"

Circle::Circle() : radius(0.0)
{

}
Circle::Circle(double r) : radius(r)
{

}

double Circle::calculateArea()
{
    double PI = 3.14;
    return PI * radius * radius;
}
