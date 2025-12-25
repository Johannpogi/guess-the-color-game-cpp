#include<iostream>
using namespace std;

int main(){
	string color = "Blue";	
	string guess;
	
    cout << "Guess the Color: " << endl;
    cout << "Mechanics: First letter should be capitalized. " << endl;
    for(int x = 0; x < 5; x++){
    	
    	cout << "Heart: " << 5 - x << endl;
    	cin >> guess;
    	
    	if(guess == color){
    		cout << "You are Correct!" << endl;
    		break;
		}
		else{ 
			cout << "Incorrect Guess!" << endl;
		}
		if (x == 4){
			cout << "Game Over!" << endl;
		}	
	}
	return 0;
}

