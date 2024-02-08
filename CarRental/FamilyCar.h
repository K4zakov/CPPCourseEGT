#pragma once

#include"Car.h"
class FamilyCar : public Car
{
public:
	FamilyCar(string, string, string, string, int, string, double, double, double); //daily fee + distance travelled
	~FamilyCar();
	void setFeePerDay(double);
	void setTraveledDistance(double);
	double getFee() const;
	double getTraveledDistance() const;
	double calculateCoefficient(double);

	double calculatePrice();
	void printCarInfo();
private:
	double feePerDay; //daily fee in BGN
	double traveledDistance; //distance travelled by client
	double coefficientTraveledDistance;
};