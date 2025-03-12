#include <iostream>
using namespace std;

int main(){
	float pounds;
	cout << "Enter decimal pounds: ";
	cin >> pounds;
	int total_pence = static_cast<int>(pounds * 240);
	int old_pounds = total_pence / 240;
	total_pence -= (old_pounds * 240);
	int shillings = total_pence / 12;
	total_pence -= (shillings * 12);
	cout << "Equivalent in old notation = \x9c" << old_pounds << "." << shillings << "." << total_pence << "." << endl;
	
	return 0;
}