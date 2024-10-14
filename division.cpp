#include <iostream>
using namespace std;

// Function to perform division
int divide(int dividend, int divisor) {
    // Check for division by zero
    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return -1; // Return an error code
    } else {
        return dividend / divisor; // Return result of division
    }
}

int main() {
    // Declare variables
    int num1, num2, result;

    // Get user input
    cout << "Enter the dividend (integer): ";
    cin >> num1;

    cout << "Enter the divisor (integer): ";
    cin >> num2;

    // Call the divide function
    result = divide(num1, num2);

    // If no division by zero error, print the result
    if (result != -1) {
        cout << "The result of division is: " << result << endl;
    }

    return 0;
}
