#include <iostream>
using namespace std;

int main() {
    int b[10]; // Array to store 10 numbers
    int sum = 0;

    // Loop to take input
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> b[i];
        sum = sum + b[i];
    }

    cout << "\nTotal Sum: " << sum << endl;

    // Loop to print in reverse order
    cout << "Numbers in reverse order: ";
    for (int i = 9; i >= 0; i--) {
        cout << b[i] << " ";
    }

    cout << endl;
    return 0;
}