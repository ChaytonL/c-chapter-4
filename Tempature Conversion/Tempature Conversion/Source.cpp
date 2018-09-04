#include <iostream>
#include <string>
using namespace std;

int main()
{
	int fTemp8;
	int fTemp12;
	int fTemp5;
	int cTemp8;
	int cTemp12;
	int cTemp5;

	cout << " What was the tempature in Fahrenheit at 8am ";
	cin >> fTemp8;

	cout << " What was the tempature in Fahrenheit at 12pm ";
	cin >> fTemp12;

	cout << " What was the tempature in Fahrenheit at 5pm ";
	cin >> fTemp5;

	cTemp8 = (fTemp8 - 32) * 5 / 9;
	cTemp12 = (fTemp12 - 32) * 5 / 9;
	cTemp5 = (fTemp5 - 32) * 5 / 9;

	cout << " The tempature at 8am is " << fTemp8 << " Fahrenheit and " << cTemp8 << " Celsius" << endl;

	cout << " The tempature at 12pm is " << fTemp12 << " Fahrenheit and " << cTemp12 << " Celsius" << endl;

	cout << " The tempature at 5pm is " << fTemp5 << " Fahrenheit and " << cTemp5 << " Celsius" << endl;

	system("pause");
	return 0;

}
