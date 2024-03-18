#ifndef CONE_H
#define CONE_H
#include "circle.h"

class Cone : public Circle
{
private:
    double height;

public:
    Cone();
    Cone(double r, double h);

    double calculateVolume();

};

#endif // CONE_H
