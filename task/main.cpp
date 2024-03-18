#include "mainwindow.h"

#include <QApplication>
#include<iostream>
#include "circle.h"
#include "cylinder.h"
#include "cone.h"



int main(int argc, char *argv[])
{
    Circle circle1;
    Circle circle2(5.0);

    std::cout << "Circle 1 area: " << circle1.calculateArea() << std::endl;
    std::cout << "Circle 2 area: " << circle2.calculateArea() << std::endl;

    Cone cone1;
    Cone cone2(3.0, 5.0);

    std::cout << "Cone 1 volume: " << cone1.calculateVolume() << std::endl;
    std::cout << "Cone 2 volume: " << cone2.calculateVolume() << std::endl;

    Cylinder cylinder1;
    Cylinder cylinder2(4.0, 5.0);

    std::cout << "Cylinder 1 colume: " << cylinder1.calculateVolume() << std::endl;
    std::cout << "Cylinder 2 colume: " << cylinder2.calculateVolume() << std::endl;

    return 0;
}
