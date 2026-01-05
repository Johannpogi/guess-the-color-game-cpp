#include <iostream>
using namespace std;

int main () {
	int height = 5;
	
	for(int b = 0; b < height; b++) {
		for(int c = 0; c < height - b - 1; c++ ){
			cout << " "; }
	      for(int d = 0; d <= b; d++) {
	      cout << "* ";
	      }
		 
	cout << endl;
}
	return 0;
}
