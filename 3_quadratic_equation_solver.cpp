#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    string input;

    cout << "Enter a: ";
    getline(cin, input);
    a = stod(input);

    cout << "Enter b: ";
    getline(cin, input);
    b = stod(input);

    cout << "Enter c: ";
    getline(cin, input);
    c = stod(input);

    if (a == 0) {
        cout << "Not a quadratic equation." << endl;
    }
    else {
        d = b * b - 4 * a * c;

        if (d > 0) {
            double root1 = (-b + sqrt(d)) / (2 * a);
            double root2 = (-b - sqrt(d)) / (2 * a);

            cout << "Two real roots:" << endl;
            cout << "Root 1: " << root1 << endl;
            cout << "Root 2: " << root2 << endl;
        }
        else {
            if (d == 0) {
                double root = -b / (2 * a);

                cout << "One repeated root: " << root << endl;
            }
            else {
                cout << "No real roots." << endl;
            }
        }
    }

    return 0;
}
