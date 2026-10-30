#include <iostream>
#include <string>
using namespace std;

int main() {
    double balance, rate, goal;
    int choice;
    int periodsPerYear;
    int periods = 0;
    string input;

    cout << "Enter starting balance: ";
    getline(cin, input);
    balance = stod(input);

    cout << "Enter annual interest rate (as a decimal): ";
    getline(cin, input);
    rate = stod(input);

    cout << "Enter savings goal: ";
    getline(cin, input);
    goal = stod(input);

    cout << "\nHow often is interest added?" << endl;
    cout << "1. Yearly" << endl;
    cout << "2. Quarterly" << endl;
    cout << "3. Monthly" << endl;
    cout << "Enter your choice: ";

    getline(cin, input);
    choice = stoi(input);

    switch (choice) {

        case 1:
            periodsPerYear = 1;
            break;

        case 2:
            periodsPerYear = 4;
            break;

        case 3:
            periodsPerYear = 12;
            break;

        default:
            cout << "Invalid choice." << endl;
            return 0;
    }

    while (balance < goal) {
        balance *= (1 + rate / periodsPerYear);
        periods++;
    }

    cout << "\n===== Savings Goal Results =====" << endl;
    cout << "Final balance: $" << balance << endl;
    cout << "Number of periods: " << periods << endl;

    double years = static_cast<double>(periods) / periodsPerYear;

    cout << "Time in years: " << years << endl;

    return 0;
}
