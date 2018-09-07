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
	double Total;

	cout << " How many Tacos would you like? ";
	cin >> Tacos;

	cout << " How many Burritos would you like? ";
	cin >> Burritos;

	cout << " How many Enchalada would you like? ";
	cin >> Enchalada;

	cout << " How many Chimichanga would you like? ";
	cin >> Chimichanga;

	cout << " How many jars of Salsa would you like? ";
	cin >> Salsa;

	TacosTotal = Tacos * 1.25;
	BurritosTotal = Burritos * 2;
	EnchaladaTotal = Enchalada * 1.75;
	ChimichangaTotal = Chimichanga * 3;
	SalsaTotal = Salsa * .75;
	Total = TacosTotal + BurritosTotal + EnchaladaTotal + ChimichangaTotal + SalsaTotal;

	cout << " FOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO " << endl;
	cout << " O                                                           O " << endl;
	cout << " O                                                           O " << endl;
	cout << " O                                                           O " << endl;
	cout << " O        Your total will be $" << Total << ".                        O " << endl;
	cout << " O          Thank you for choosing us                        OOOOOOOOOOOO  " << endl;
	cout << " O                                                           O            O " << endl;
	cout << " O                                                           O              O " << endl;
	cout << " O                                                           O                O " << endl;
	cout << " O                                                           O                  O " << endl;
	cout << " O                                                           O                  O " << endl;
	cout << " OOOOOOOOOOOOOOOOOOOOOTRUCKOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO " << endl;
	cout << "    OO OO OO                                        OO OO            OO OO " << endl;
	cout << "   OOO OOO OOO                                     OOO OOO          OOO OOO " << endl;
	cout << "    OO OO OO                                        OO OO            OO OO " << endl;

	


	system("pause");
	return 0;
}