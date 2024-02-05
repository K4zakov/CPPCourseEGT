#include <iostream>
using namespace std;

class Drinks
{
public:
	Drinks();
	Drinks(string, double, int, string);
	~Drinks();
	void setDrinkName(string);
	string getDrinkName();
	void setPrice(double);
	double getPrice();
	void setQuantity(int);
	int getQuantity();
	void setType(string);
	string getType();
	void displayDrink();
	
private:
	string drinkName;
	double price = 0;
	int quantity = 0;
	string type;
};
