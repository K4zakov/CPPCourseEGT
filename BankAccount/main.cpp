#include "Account.h"

int main()
{
	Account customerAcc1(1500); // create Account object
	cout << customerAcc1.getBal() << endl; 
	customerAcc1.debit(100);
	cout << customerAcc1.getBal() << endl;
	customerAcc1.credit(200);
	cout << customerAcc1.getBal() << endl;
}