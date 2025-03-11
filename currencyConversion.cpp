#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float dollars;
	float bp_to_d = 1.487, ff_to_d = 0.172, gd_to_d = 0.584, jy_to_d = 0.00955;
	cout << "Enter amount in dollars: ";
	cin >> dollars;
	float pounds = dollars / bp_to_d, francs = dollars / ff_to_d, 
	deutschemark = dollars / gd_to_d, yen = dollars / jy_to_d;
	cout << "British Pounds: " << pounds << endl
		 << "French Francs: " << francs << endl
		 << "German Deutschemark: " << deutschemark << endl
		 << "Japanese Yen: " << yen << endl;
		 
	return 0;
	
}