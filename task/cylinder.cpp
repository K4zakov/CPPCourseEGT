#include "cylinder.h"

Cylinder::Cylinder() : Circle(), height(0.0)
{

}

Cylinder::Cylinder(double r, double h) : Circle(r), height(h)
{

}

double Cylinder::calculateVolume()
{
    return calculateArea() * height;
}
