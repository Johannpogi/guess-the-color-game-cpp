#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    int sum = 0;

    cout << "Give me a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive number only." << endl;
        return 0;
    }

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "Here: " << sum << endl;

    return 0;
}
