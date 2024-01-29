#include <iostream>
using namespace std;

class Shape
{
    public:
		virtual void draw() = 0;

};

class Circle : public Shape
{
     public:
		 void draw() override
		 {
			cout << "Circle" << endl;
		}
};



class Rectangle : public Shape
{
	 	 public:
		 void draw() override
		 {
			cout << "Rectangle" << endl;
		}
};


int main()
{
    
	Shape* shape = new Circle();
	shape->draw();
	shape = new Rectangle();
	shape->draw();
	return 0;
}

