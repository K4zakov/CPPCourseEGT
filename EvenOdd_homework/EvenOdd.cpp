#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter your number" << endl;
    cin >> number;

    if (number % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }



    return 0;
}
