#include <iostream>
using namespace std;

int main () {
    float weight, height, bmi;
    cout << "BMI Categories: Underweight <18.5, Normal 18.5-24.9, Overweight 25-29.9, Obese >=30" << endl;
    cout << "Your weight in kg: " << endl;
    cin >> weight;
    cout << "your height in meter: " << endl;
    cin >> height;
    bmi = weight / (height * height);
    
   if (weight <= 0 || height <= 0) {
    cout << "Invalid input! Weight and height must be positive numbers." << endl;
   }
    else if (bmi < 18.5) {
        cout << "You are underweight: " << bmi << endl;
    }
    else if (bmi <= 24.9) {
        cout << "You are normal: " << bmi << endl; 
    }
    else if (bmi <= 29.9) {
        cout << "You are overweight: " << bmi  << endl;
    }
    else {
        cout << "You are obese, you need to exercise: " << bmi << endl;
    }
    return 0;
}
