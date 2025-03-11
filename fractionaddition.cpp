#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;
	char fractionbar = '/';
	cout << "Enter first fraction: ";
	cin >> a >> fractionbar >> b; // User needs to type fraction bar
	cout << "Enter second fraction: ";
	cin >> c >> fractionbar >> d;
	cout << "Sum = " << (a*d) + (b*c) << "/" << (b*d) << endl;
	
	return 0;
}