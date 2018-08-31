#include <iostream>
#include <string>
using namespace std;

 int main()

{
	int fahrenheit;
	int celsius;

	cout << " What tempature in fehrenhiet would you like to convert to celsius? ";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5 / 9;

	cout << fahrenheit << " fahrenheit is converted into " << celsius << " celsius " << endl;


	system ("pause");
	return 0;
	

}
