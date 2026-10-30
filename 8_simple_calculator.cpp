#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, result;
    int choice;
    char again;
    string input;

    do {
        cout << "\nEnter the first number: ";
        getline(cin, input);
        num1 = stod(input);

        cout << "Enter the second number: ";
        getline(cin, input);
        num2 = stod(input);

        cout << "\n===== Simple Calculator =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Percentage" << endl;
        cout << "6. Exponent" << endl;
        cout << "Enter your choice: ";

        getline(cin, input);
        choice = stoi(input);

        switch (choice) {

            case 1:
                result = num1 + num2;
                cout << "Addition: " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Subtraction: " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Multiplication: " << result << endl;
                break;

            case 4:
                if (num2 == 0) {
                    cout << "Error: cannot divide by zero." << endl;
                }
                else {
                    result = num1 / num2;
                    cout << "Division: " << result << endl;
                }
                break;

            case 5:
                result = num1 * num2 / 100;
                cout << "Percentage: " << result << endl;
                break;

            case 6:
                if (num1 == 0 && num2 < 0) {
                    cout << "Error: 0 cannot be raised to a negative power."
                         << endl;
                }
                else {
                    result = pow(num1, num2);
                    cout << "Exponent: " << result << endl;
                }
                break;

            default:
                cout << "Invalid choice." << endl;
        }

        cout << "\nCalculate again? (y/n): ";
        getline(cin, input);
        again = input[0];

    } while (again != 'n' && again != 'N');

    cout << "Goodbye!" << endl;

    return 0;
}
