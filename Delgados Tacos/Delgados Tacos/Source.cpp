#include <iostream>
using namespace std;

int main()
{
	int Tacos;
	int Burritos;
	int Enchalada;
	int Chimichanga;
	int Salsa;
	double TacosTotal;
	double BurritosTotal;
	double EnchaladaTotal;
	double ChimichangaTotal;
	double SalsaTotal;

	cout << " How many tacos would you like? ";
	cin >> Tacos;

	cout << " How many tacos would you like? ";
	cin >> Burritos;

	cout << " How many tacos would you like? ";
	cin >> Enchalada;

	cout << " How many tacos would you like? ";
	cin >> Chimichanga;

	cout << " How many tacos would you like? ";
	cin >> Salsa;

	TacosTotal = Tacos * 1.25;
	BurritosTotal = Burritos * 2;
	EnchaladaTotal = Enchalada * 1.75;
	ChimichangaTotal = Chimichanga * 3;
	SalsaTotal = Salsa * .75;

	system("pause");
	return 0;
}