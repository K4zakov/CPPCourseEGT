#include "Book.h"
#include <iostream>
Book::Book(string title, string author, int pages)
{
	this->title = title;
	this->author = author;
	this->pages = pages;
}

void Book::display()
{
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Pages: " << pages << endl;
}
