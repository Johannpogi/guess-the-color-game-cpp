#include <iostream>
using namespace std;

int main () {
	int height = 5;
	int row = 1;
	
	while (row <= height) {
		row++;
		int column = 1; // Column counter for printing '*'
		
		while (column < row) {
	    	column++;
			cout << "*";
			}
		cout << "" << endl;
	}
	return 0;
}
