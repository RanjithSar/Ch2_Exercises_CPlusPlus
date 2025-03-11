#include <iostream>
using namespace std;

int main(){
	float celcius, fahrenheit;
	cout << "Enter temperature in Celcius: ";
	cin >> celcius;
	fahrenheit = (celcius * 9 / 5) + 32;
	cout << celcius << " degrees Celcius is " << fahrenheit << " degrees Fahrenheit." << endl;
	
	return 0;
}