#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "============================\n";
    cout << "     SIMPLE CALCULATOR      \n";
    cout << "============================\n";
     cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Invalid operation selected.\n";
    }

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}
