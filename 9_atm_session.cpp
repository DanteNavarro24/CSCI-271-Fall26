#include <iostream>
#include <string>
using namespace std;

int main() {
    const int PIN = 1234;
    double balance = 500;
    double amount;
    int enteredPIN;
    int attempts = 0;
    bool loggedIn = false;
    string input;

    // Part 1: Login
    while (attempts < 3 && !loggedIn) {

        cout << "Enter your PIN: ";
        getline(cin, input);
        enteredPIN = stoi(input);

        if (enteredPIN == PIN) {
            loggedIn = true;
            cout << "Access granted." << endl;
        }
        else {
            attempts++;

            if (attempts < 3) {
                cout << "Incorrect PIN. "
                     << 3 - attempts << " attempts left." << endl;
            }
            else {
                cout << "Card locked." << endl;
            }
        }
    }

    // Part 2: Withdrawals (only if login succeeded)
    if (loggedIn) {

        cout << "\nWelcome to the ATM!" << endl;
        cout << "Starting balance: $" << balance << endl;

        cout << "\nEnter withdrawal amount (0 to quit): ";
        getline(cin, input);
        amount = stod(input);

        while (amount != 0) {

            if (amount < 0) {
                cout << "Invalid amount." << endl;
            }
            else {
                if (static_cast<int>(amount) % 20 != 0) {
                    cout << "Amount must be a multiple of 20."
                         << endl;
                }
                else {
                    if (amount > balance) {
                        cout << "Insufficient funds." << endl;
                    }
                    else {
                        balance -= amount;
                        cout << "New balance: $" << balance << endl;
                    }
                }
            }

            cout << "\nEnter withdrawal amount (0 to quit): ";
            getline(cin, input);
            amount = stod(input);
        }

        cout << "\nFinal balance: $" << balance << endl;
    }

    return 0;
}
