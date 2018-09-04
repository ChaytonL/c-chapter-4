#include <iostream>
using namespace std;

int main()
{

	int eggs;
	int remainder;
	int dozen;
	double remainderprice;
	double dozenprice;
	double total;


	cout << " How many eggs would you like my sweet child of Jesus himself?";
	cin >> eggs;

	remainder = eggs % 12;
	dozen = eggs / 12;
	dozenprice = dozen * 2.00;
	remainderprice = remainder * .25;
	total = dozenprice + remainderprice;

	cout << " ---------------------------------------------------------------------------------- " << endl;
	cout << " That would be " << dozen << " dozen eggs and " << remainder << " eggs remaining " << endl <<
		" The cost will be $" << dozenprice << " for the dozen, and $" << remainderprice <<
		" for the remainings eggs. Totaling out to be " << total << endl;
	cout << " ---------------------------------------------------------------------------------- " << endl;


	system("pause");
	return 0;

}