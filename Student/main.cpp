#include <iostream>
using namespace std;
#include "student.h"
#include <vector>;

int main() {
    Student studentOne("Roberto", "Kazakov", 8628104848, "Sofia", "10.28.1986");
    Student studentTwo("Alexander", "Karastoyanov", 9999999999, "Sofia", "99.99.9999");
    // example of a way to edit some of the data about a student
   /* string city;
    cout << "Enter city name: ";
    cin >> city;
    studentOne.setCity(city);*/

    vector<Student> students;

    students.push_back(studentOne);
    students.push_back(studentTwo);

    for (int i = 0; i < students.size(); i++) {
		students[i].displayStudent();
	}

   /* studentOne.displayStudent();
    studentTwo.displayStudent();*/
    return 0;
}