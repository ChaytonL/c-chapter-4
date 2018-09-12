#include <iostream>
using namespace std;

int menu() {

	cout << " Enter 1 tacos = .99. >> " << endl;
	cout << " Enter 2 burritos =  1.99. >> " << endl;

	return 0;
}


int main()
{
	menu();


	int menuChoice;
	double menuTotal;
	double tacos;
	double burritos;
	double tacosTotal;
	double burritosTotal;
	double burritotax;
	double tacotax;
	

	cout << " What would you like to order from the menu? " << endl;
	cin >> menuChoice;

	if (menuChoice == 1) {
		cout << " How many tacos would you like " << endl;
		cin >> tacos;
		tacosTotal = tacos * .99;
		tacotax = tacosTotal * 1.07;
		cout << " FOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO " << endl;
		cout << " O                                                           O " << endl;
		cout << " O                                                           O " << endl;
		cout << " O                                                           O " << endl;
		cout << " O        Your total will be $" << tacotax << ".                        O " << endl;
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
	}
	else if (menuChoice == 2) {
			cout << " How many burritos would you like? ";
			cin >> burritos;
			burritosTotal = burritos * 1.99;
			burritotax = burritosTotal * 1.07;
			cout << " FOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO " << endl;
			cout << " O                                                           O " << endl;
			cout << " O                                                           O " << endl;
			cout << " O                                                           O " << endl;
			cout << " O        Your total will be $" << burritotax << ".                        O " << endl;
			cout << " O          Thank you for choosing us                        OOOOOOOOOOOO  " << endl;
			cout << " O                                                           O            O " << endl;
			cout << " O                                                           O              O " << endl;
			cout << " O                                                           O                O " << endl;
			cout << " O                                                           O                  O " << endl;
			cout << " O                                                           O                  O " << endl;
			cout << " OOOOOOOOOOOOOOOOOOOOOTRUCKOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO " << endl;
			cout << "    OO OO OO                                        OO OO            OO OO " << endl;
			cout << "   OOO OOO OOO                                     OOO OOO          OOO OOO " << endl;
			cout << "    OO OO OO                                        OO OO            OO OO " << endl;;
		}
	



	


	system("pause");
	return 0;
}