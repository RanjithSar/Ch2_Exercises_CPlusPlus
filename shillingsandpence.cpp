#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int pounds, shillings, pence;
	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shillings;
	cout << "Enter pence: ";
	cin >> pence;
	float decimal_pounds = (float)pounds + ((float)shillings / 20) + ((float)pence / 240);
	cout << "Decimal pounds = \x9c" << fixed << setprecision(2) << decimal_pounds << endl;
	return 0;
}