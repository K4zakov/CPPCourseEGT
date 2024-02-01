#pragma once
#include <string>
using namespace std;

class Book // class definition
{
public:
	Book(); // default constructor
	Book(string title, string author, string ISBN); // constructor
	~Book(); // destructor
	string getTitle(); // getter
	string getAuthor(); // getter
	string getISBN(); // getter
	void setTitle(string title); // setter
	void setAuthor(string author); // setter
	void setISBN(string ISBN); // setter
	void display(); // display

// private variables
private:
	string title; 
	string author;	  
	string ISBN;   
};

