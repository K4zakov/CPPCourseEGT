#include "Member.h"
#include <iostream>
using namespace std;

Member::Member()
{
	name = "";
	age = 0;
	memberID = "";
}

Member::Member(string name, int age, string memberID)
{
	this->name = name;
	this->age = age;
	this->memberID = memberID;
}
int Member::getAge()
{
	return age;
}

string Member::getMemberID()
{
	return memberID;
}

string Member::getName()
{
	return name;
}

void Member::setAge(int age)
{
	this->age = age;
}

void Member::setMemberID(string memberID)
{
	this->memberID = memberID;
}

void Member::setName(string name)
{
	this->name = name;
}

void Member::display()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Member ID: " << memberID << endl;
	cout << endl;
}


Member::~Member()
{
}

void Member::borrowBook(Book* book)
{
	cout << name << " borrowed " << book->getTitle() << endl;
}
