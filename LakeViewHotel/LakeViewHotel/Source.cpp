#include <iostream>
using namespace std;

int main()
{
	int Room;
	int Phone;
	int RoomPrice;
	double PhonePrice;
	int Total;

	cout << " How many nights did you stay with us? ";
	cin >> Room;

	cout << " How many minutes did you use the phone for? ";
	cin >> Phone;

	RoomPrice = Room * 100;
	PhonePrice = Phone * .25;
	Total = RoomPrice + PhonePrice;

	cout << " -------------------------------------------------------------------------------------";
	cout << " Your total will be $" << RoomPrice << " for the room and $" << PhonePrice <<
		" for the phone. Totaling to be $" << Total << " . Thank you for staying with us. " << endl;
	cout << " -------------------------------------------------------------------------------------";
	system("pause");
	return 0;

}