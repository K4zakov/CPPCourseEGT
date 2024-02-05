#pragma once

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
	Account(double); // constructor
	void credit(double);  // add an amount to the account balance
	void debit(double);  // subtract an amount from the account balance
	double getBal();  // return the account balance
	
private:
	double balance;  // data member that stores the balance
};