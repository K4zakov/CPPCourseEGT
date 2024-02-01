#pragma once
#include <string>
using namespace std;
#include "Book.h"

class Member
{
public:
	Member();
	Member(string name, int age, string memberID);
	~Member(); 
	void borrowBook(Book *book);
	string getName(); 
	int getAge(); 
	string getMemberID(); 
	void setName(string name); 
	void setAge(int age); 
	void setMemberID(string memberID); 
	void display();
private: 
	string name; 
	int age;	
	string memberID; 
};

