/*
	2018, Kemal Ficici

	Do problems 21-24 from Ch. 2, p. 101 as one program.
	Conversion Programs for the following:
		21. mi -> km
		22. m -> mi
		23. lb -> lg
		24. N -> lb
	1 mi = 1.6093440 km
	1 kg = 2.205 lb
	1 lb = 4.448 N

*/

#include <iostream>
using namespace std;

int main() {
	const float kMiToKm = 1.6093440;
	const float kKgToLb = 2.205;
	const float kLbToN = 4.448;

	int option = 0;
	float input = 0;
	float output = 0;

	cout << "Lab 2: Conversion Program" << endl
		<< "  Choose an Option:" << endl
		<< "	(1) Miles to Kilometers   (mi. ->  km)" << endl
		<< "	(2) Meters to Miles       (m   ->  mi.)" << endl
		<< "	(3) Pounds to Kilograms   (lb  ->  kg)" << endl
		<< "	(4) Newtons to Pounds     (N   ->  lb.)" << endl;

	cin >> option;
	cout << "Enter an input value to be converted: " << endl;
	cin >> input;


	switch(option) {
		case 1:
			output = input * kMiToKm;
			cout << input << " Miles converts to " << output << " Kilometers." << endl;
			break;
		case 2:
			output = (input / 1000) / kMiToKm;
			cout << input << " Meters converts to " << output << " Miles." << endl;
			break;
		case 3:
			output = input / kKgToLb;
			cout << input << " Pounds converts to " << output << " Kilograms." << endl;
			break;
		case 4:
			output = input / kLbToN;
			cout << input << " Newtons converts to " << output << " Pounds." << endl;			
			break;
		default :
			cout << "Invalid Option. Exiting..." << endl;
			break;
	}
	system("PAUSE");
	return 0;
}
