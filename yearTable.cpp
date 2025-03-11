#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout << left << setw(4) << "1990" << right << setw(9) << "135" << endl
		 << left << setw(4) << "1991" << right << setw(9) << "7290" << endl
		 << left << setw(4) << "1992" << right << setw(9) << "11300" << endl
		 << left << setw(4) << "1993" << right << setw(9) << "16200" << endl;
		 
	return 0;
}