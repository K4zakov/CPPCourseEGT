#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() // default constructor
{
	title = "";
	author = "";
	ISBN = "";
}

Book::Book(string title, string author, string ISBN) // constructor

{
	this->title = title;
	this->author = author;
	this->ISBN = ISBN;
}

Book::~Book() // destructor
{
}
string Book::getTitle() // getter
{
	return title;
}

string Book::getAuthor() // getter
{
	return author;
}

string Book::getISBN() // getter
{
	return ISBN;
}

void Book::setTitle(string title) // setter
{
	this->title = title;
}

void Book::setAuthor(string author) // setter
{
	this->author = author;
}

void Book::setISBN(string ISBN) // setter
{
	this->ISBN = ISBN;
}

void Book::display() // display

{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << endl;
}