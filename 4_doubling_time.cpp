
#include <iostream>
#include <string>
using namespace std;

int main() {
    double balance, startingBalance, rate;
    string input;
    int years = 0;

    cout << "Enter the starting balance: ";
    getline(cin, input);
    balance = stod(input);

    startingBalance = balance;

    cout << "Enter the annual interest rate (as a decimal): ";
    getline(cin, input);
    rate = stod(input);

    // Validate the interest rate
    while (rate <= 0) {
        cout << "Interest rate must be greater than 0. Enter again: ";
        getline(cin, input);
        rate = stod(input);
    }

    // Calculate balance until it doubles
    while (balance < startingBalance * 2) {
        balance *= (1 + rate);
        years++;

        cout << "Year " << years << ": $" << balance << endl;
    }

    cout << "It took " << years << " years to double the balance."
         << endl;

    return 0;
}
