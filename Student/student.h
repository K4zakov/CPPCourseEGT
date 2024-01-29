#pragma once
#include <iostream>
using namespace std;

class Student {
public:
	Student(string, string, int, string, string);
	void setfName(string);
	void setlName(string);
	void setSSN(int);
	void setCity(string);
	void setbirthDate(string);
	void displayStudent();
	

	string getfName();
	string getlName();
	int getSSN();
	string getCity();
	string getbirthDate();
private:
	string fName;
	string lName;
	int ssn;
	string city;
	string birthDate;
};