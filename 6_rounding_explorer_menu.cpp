#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double num;
    int choice;
    string input;

    do {
        cout << "\nEnter a decimal number: ";
        getline(cin, input);
        num = stod(input);

        if (num == trunc(num)) {
            cout << "Note: this is a whole number, so all four "
                 << "functions give the same result." << endl;
        }

        cout << "\n===== Rounding Explorer Menu =====" << endl;
        cout << "1. floor" << endl;
        cout << "2. ceil" << endl;
        cout << "3. round" << endl;
        cout << "4. trunc" << endl;
        cout << "5. all four" << endl;
        cout << "6. quit" << endl;
        cout << "Enter your choice: ";

        getline(cin, input);
        choice = stoi(input);

        switch (choice) {

            case 1:
                cout << "floor(" << num << ") = "
                     << floor(num) << endl;
                break;

            case 2:
                cout << "ceil(" << num << ") = "
                     << ceil(num) << endl;
                break;

            case 3:
                cout << "round(" << num << ") = "
                     << round(num) << endl;
                break;

            case 4:
                cout << "trunc(" << num << ") = "
                     << trunc(num) << endl;
                break;

            case 5:
                cout << "floor(" << num << ") = "
                     << floor(num) << endl;

                cout << "ceil(" << num << ") = "
                     << ceil(num) << endl;

                cout << "round(" << num << ") = "
                     << round(num) << endl;

                cout << "trunc(" << num << ") = "
                     << trunc(num) << endl;
                break;

            case 6:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}
