
#include "Drinks.h"


Drinks::Drinks(string drinkName, double price, int quantity, string type) // parameterized constructor
{
	this-> drinkName = drinkName;
	this-> price = price;
	this-> quantity = quantity;
	this-> type = type;
}


void Drinks::setDrinkName(string drinkName) // set drink name
{
	drinkName = drinkName;
}

string Drinks::getDrinkName() // get drink name
{
	return this-> drinkName;
}

void Drinks::setPrice(double price) // set drink price

{
	price = price;
}

double Drinks::getPrice() // get drink price

{
	return this-> price;
}

void Drinks::setQuantity(int quantity) // set drink quantity
{
	quantity = quantity;
}

int Drinks::getQuantity() // get drink quantity
{
	return this-> quantity;
}

void Drinks::setType(string type) // set drink type
{
	type = type;
}

string Drinks::getType() // get drink type
{
	return this-> type;
}

void Drinks::displayDrink() // display drink details

{
	cout << "Drink Name: " << drinkName << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Type: " << type << endl;
}

Drinks::~Drinks() // destructor
{
}

Drinks::Drinks() // default constructor
{
	drinkName = " ";
	price = 0;
	quantity = 0;
	type = " ";
}
