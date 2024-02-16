#pragma once
using namespace std;
#include <string>
class Book
{
public:
	Book(string title, string author, int pages);
	void display();
	private:
		string title;
		string author;
		int pages;
};

