#include "cone.h"

Cone::Cone() : Circle(), height(0.0)
{

}

Cone::Cone(double r, double h) : Circle(r), height(h)
{

}

double Cone::calculateVolume()
{
    return (calculateArea() * height ) / 3.0;
}
