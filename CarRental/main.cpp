
#include"Car.h"
#include"FamilyCar.h"
#include"LuxuryCar.h"
#include <iostream>
using namespace std;

int main()
{
    
    Car* familyCar1 = new FamilyCar("Honda", "Odyssey", "van", "Silver", 1313131313, "PK0500HP", 8.5, 100, 200);
    familyCar1->printCarInfo();
 
    delete familyCar1;

    
    Car* luxuryCar1 = new LuxuryCar("Rolls-Royce", "Cullinan", "SUV", "Bohemian Red", 7777777777, "CB777777", 20.1, 50, 100, "Caviar");
    luxuryCar1->printCarInfo();
   
    delete luxuryCar1;

}