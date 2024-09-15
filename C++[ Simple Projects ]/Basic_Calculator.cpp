#include <iostream>
#include <cmath> // For advanced mathematical functions
using namespace std;

void displayMenu() {
    cout << "Simple Calculator" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exponent (^)" << endl;
    cout << "6. Trigonometric Functions (sin, cos, tan)" << endl;
    cout << "0. Exit" << endl;
    cout << "Select an operation: ";
}

void performOperation(int choice) {
    double num1, num2;
    if (choice >= 1 && choice <= 4) {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (choice) {
        case 1: // Addition
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2: // Subtraction
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3: // Multiplication
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4: // Division
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
        case 5: // Exponent
            cout << "Enter base: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;
        case 6: // Trigonometric Functions
            cout << "Enter angle in degrees: ";
            cin >> num1;
            num1 = num1 * M_PI / 180.0; // Convert to radians

            cout << "sin(" << num1 << ") = " << sin(num1) << endl;
            cout << "cos(" << num1 << ") = " << cos(num1) << endl;
            cout << "tan(" << num1 << ") = " << tan(num1) << endl;
            break;
        case 0: // Exit
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        performOperation(choice);
    } while (choice != 0);

    return 0;
}
