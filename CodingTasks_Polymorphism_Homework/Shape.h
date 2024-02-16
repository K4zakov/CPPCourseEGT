#pragma once
using namespace std;
#include <iostream>
#include <string>
class Shape
{
protected:
	string color;
public:
	Shape(string color);
	virtual ~Shape() {};
	virtual double area() const = 0;
	void draw();
	
		
};

