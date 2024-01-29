#include <iostream>
#include <string>

using namespace std;
class Car
{
public:
	Car(string brand, int year, string color, string fuel, string vin, string transmission, string plate)
	{
		this->brand = brand;
		setYear(year);
		this->color = color;
		this->fuel = fuel;
		this->vin = vin;
		this->transmission = transmission;
		this->plate = plate;
	}
	void setBrand(string brand)
	{
		this->brand = brand;
	}
	string getBrand()
	{
		return this->brand;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	string getColor()
	{
		return this->color;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	int getYear()
	{
		return this->year;
	}

	void displayMessage()
	{
		cout << "Brand:" << brand << " Color: " << color << " Year: " << year << endl;
	}

private:
	string brand;
	string color;
	string fuel;
	string vin;
	string transmission;
	string plate;
	int year;
};

int main() {

	Car firstCar("Ferrari", 2020, "red", "petrol", "99933443s223", "automatic", "cal214");
	//string brand;
	//string color;
	//int year;
	//cout << "Enter car brand";
	//cin >> brand;
	//firstCar.setBrand(brand);
	//cout << "Enter the color of the car";
	//cin >> color;
	//firstCar.setColor(color);
	firstCar.setYear(2024);
	firstCar.displayMessage();


	///*cout << "enter year";
	//cin >> year;
	//firstCar.setYear(year);
	//
	//int carYear = firstCar.getYear();
	//cout << "Car year is: " << carYear << endl;
	//string carBrand = firstCar.getBrand();
	//cout << " Car brand " << carBrand << endl;*/

	return 0;
}