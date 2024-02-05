#include "Account.h"

Account::Account(double balance) // constructor
{
	if (balance >= 0)
	{
		this->balance = balance;
	}
	else {
		this->balance = 0;
		cerr << "initial balance is invalid " << endl; 
	}
}

void Account::credit(double amount)	// add an amount to the account balance
{
	if (amount > 0)
	{
		this->balance = this->balance + amount; 
	}
	else
	{
		cerr << "initial balance is invalid " << endl;
	}
}

void Account::debit(double amount) // subtract an amount from the account balance
{
	if (amount <= this->balance)
	{
		this->balance = this->balance - amount;
	}
	else
	{
		cerr << "Debit amount exceeded amount balance" << endl;
	}
}

double Account::getBal() // return the account balance
{
	cout << "Acc balance is BGN :";
	return this->balance;
}

