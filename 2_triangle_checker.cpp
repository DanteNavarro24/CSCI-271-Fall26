#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, longest, side1, side2;
    string input;

    cout << "Enter the first side: ";
    getline(cin, input);
    a = stod(input);

    cout << "Enter the second side: ";
    getline(cin, input);
    b = stod(input);

    cout << "Enter the third side: ";
    getline(cin, input);
    c = stod(input);
    if (a > b) {
        if (a > c) {
            longest = a;
            side1 = b;
            side2 = c;
        }
        else {
            longest = c;
            side1 = a;
            side2 = b;
        }
    }
    else {
        if (b > c) {
            longest = b;
            side1 = a;
            side2 = c;
        }
        else {
            longest = c;
            side1 = a;
            side2 = b;
        }
    }

    cout << "Longest side: " << longest << endl;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid side length." << endl;
    }
    else {
        if (side1 + side2 <= longest) {
            cout << "These sides cannot form a triangle." << endl;
        }
        else {
            if (fabs(pow(side1, 2) + pow(side2, 2)
                - pow(longest, 2)) < 0.0001) {

                cout << "This is a right triangle." << endl;
                cout << "Hypotenuse: "
                     << sqrt(pow(side1, 2) + pow(side2, 2))
                     << endl;
            }
            else {
                cout << "This is a triangle, but not a right triangle."
                     << endl;
            }
        }
    }

    return 0;
}
