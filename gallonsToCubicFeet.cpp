#include <iostream>
using namespace std;

int main(){
	float gallons, cubic_feet;
	cout << "Enter the number of gallons: ";
	cin >> gallons;
	cubic_feet = gallons * 7.481;
	cout << gallons << " gallons is " << cubic_feet << " cubic feet." << endl;
	
	return 0;
}