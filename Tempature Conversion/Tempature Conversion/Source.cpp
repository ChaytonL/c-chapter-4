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
	
	double z;
	double tempArray[5] = { 0.0 };
	// for loop
	for (int i = 0; i < size(tempArray); i++) {
		cout << " Enter a tempature >> ";
		cin >> tempArray[i];
		z = tempConversion(tempArray[i]);
		cout << " The temp conversion is " << z << endl;
	}

	
	
	system("pause");
	return 0;

}
