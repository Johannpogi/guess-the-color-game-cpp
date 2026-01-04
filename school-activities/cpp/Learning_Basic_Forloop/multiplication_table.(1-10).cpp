#include <iostream>
using namespace std;

int main () {
	
	int number;
	cout << "Enter a positive number: " << endl;
	cin >> number;
	
	for (int j = 1; j <= 10; ++j) {
		cout << number << " * " << j << " = " << number * j << endl;
		}
	
	return 0;
}
