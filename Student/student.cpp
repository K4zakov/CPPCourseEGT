#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string fName, string lName, int ssn, string city, string birthDate) //Constructor
{
    setfName(fName);
    setlName(lName);
    setSSN(ssn);
    setCity(city);
    setbirthDate(birthDate);

}
    // Displays student information
    void Student::displayStudent() {
        cout << "First name: " << fName << " Last name: " << lName << " SSN: " << ssn << " City: " << city << " Date of birth: "
            << birthDate << endl;
    }
    void Student::setfName(string) {
        this->fName = fName;
    }
    string Student::getfName() {
        return this->fName;
    }
    void Student::setlName(string lName) {
        this->lName = lName;
    }
    string Student::getlName() {
        return this->lName;
    }
    void Student::setSSN(int ssn) {
        this->ssn = ssn;
    }
    int Student::getSSN() {
        return this->ssn;
    }
    void Student::setCity(string city) {
        this->city = city;
    }
    string Student::getCity() {
        return this->city;
    }
    void Student::setbirthDate(string birthDate) {
        this->birthDate = birthDate;
    }
    string Student::getbirthDate() {
        return this->birthDate;
    }



