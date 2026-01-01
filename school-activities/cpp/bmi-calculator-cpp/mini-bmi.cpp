#include <iostream>
using namespace std;

int main () {
    float weight, height, bmi;
    cout << "Your weight in kg: " << endl;
    cin >> weight;
    cout << "your height in meter: " << endl;
    cin >> height;
    bmi = weight / (height * height);

    if (bmi < 18) {
        cout << "You are underweight: " << bmi << endl;
    }
    else if (18 <= bmi && bmi <= 24.9) {
        cout << "You are normal: " << bmi << endl; 
    }
    else if (bmi > 24.9 && bmi <= 29.9) {
        cout << "You are overweight: " << bmi  << endl;
    }
    else if (bmi >= 30) {
        cout << "You are obese, you need to exercise: " << bmi << endl;
    }
    return 0;
}
