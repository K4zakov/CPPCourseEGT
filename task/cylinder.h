#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
class Cylinder : public Circle
{
private:
    double height;
public:
    Cylinder();
    Cylinder(double r, double h);

    double calculateVolume();
};

#endif // CYLINDER_H
