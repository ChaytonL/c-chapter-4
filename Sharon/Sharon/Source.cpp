#include <iostream>
using namespace std;

int main()
{
	int SharonWeekly;
	int SharonYearly;
	int DepositPercentage;
	int DepositTotal;
	int SavingsTotal;

	cout << "Sharon how much do you make a week? ";
	cin >> SharonWeekly;
	
	SharonYearly = SharonWeekly * 24;

	cout << " What percentage would you like to deposit? ";
	cin >> DepositPercentage;

	DepositTotal = DepositPercentage / 100;
	SavingsTotal = SharonYearly * DepositTotal;

	cout << " Your savings account total is... $" << SavingsTotal << endl;



	system("pause");
	return 0;



}