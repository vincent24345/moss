#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float num1, num2, result;

    // Get user input
    cout << "Enter the dividend: ";
    cin >> num1;

    cout << "Enter the divisor: ";
    cin >> num2;

    // Check for division by zero
    if (num2 != 0) {
        result = num1 / num2;
        cout << "The result of division is: " << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}
