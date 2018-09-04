#include <iostream>
#include <string>
using namespace std;


int tempConversion(double fahren) {
	double r;
	r = (fahren - 32) * 5 / 9;
	return r;
}

int main()
{
	int fTemp8;
	int fTemp12;
	int fTemp5;
	int cTemp;

	cout << " What was the tempature in Fahrenheit at 8am ";
	cin >> fTemp8;

	cout << " What was the tempature in Fahrenheit at 12pm ";
	cin >> fTemp12;

	cout << " What was the tempature in Fahrenheit at 5pm ";
	cin >> fTemp5;

	cTemp = tempConversion(fTemp8);
	cout << " The tempature at 8am is " << fTemp8 << " Fahrenheit and " << cTemp << " Celsius" << endl;
	cTemp = tempConversion(fTemp12);
	cout << " The tempature at 12pm is " << fTemp12 << " Fahrenheit and " << cTemp << " Celsius" << endl;
	cTemp = tempConversion(fTemp5);
	cout << " The tempature at 5pm is " << fTemp5 << " Fahrenheit and " << cTemp << " Celsius" << endl;

	system("pause");
	return 0;

}
