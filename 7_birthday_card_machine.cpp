#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;
    char choice;

    do {
        cout << "Enter your age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter your full name: ";
        getline(cin, name);

        switch (age) {

            case 16:
                cout << "Sweet sixteen!" << endl;
                break;

            case 18:
                cout << "You can vote now!" << endl;
                break;

            case 21:
                cout << "Happy 21st!" << endl;
                break;

            case 50:
                cout << "Half a century!" << endl;
                break;

            default:
                break;
        }

        cout << "Happy Birthday, " << name
             << "! You are turning " << age << "." << endl;

        cout << "Make another card? (y/n): ";
        cin >> choice;

    } while (choice != 'n' && choice != 'N');

    return 0;
}
