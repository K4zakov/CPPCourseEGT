#include <iostream>
#include "Box.h"
using namespace std;
int main() {
    Box box1(5, 3, 2);
    Box box2(4, 2, 1);

    Box box3 = box1 + box2;

    cout << "Dimensions of box3: " <<endl;
    cout << "Width: " << box3.getWidth() << endl;
    cout << "Length: " << box3.getLength() << endl;
    cout << "Height: " << box3.getHeight() << endl;

    return 0;
}