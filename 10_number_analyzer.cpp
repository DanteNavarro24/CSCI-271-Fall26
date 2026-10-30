#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    int positiveEven = 0;
    int positiveOdd = 0;
    int negativeEven = 0;
    int negativeOdd = 0;
    int positiveSum = 0;
    int positiveCount = 0;
    string input;

    cout << "Enter an integer (0 to quit): ";
    getline(cin, input);
    num = stoi(input);

    while (num != 0) {

        if (num > 0) {
            if (num % 2 == 0) {
                positiveEven++;
            }
            else {
                positiveOdd++;
            }

            positiveSum += num;
            positiveCount++;
        }
        else {
            if (num % 2 == 0) {
                negativeEven++;
            }
            else {
                negativeOdd++;
            }
        }

        cout << "Enter an integer (0 to quit): ";
        getline(cin, input);
        num = stoi(input);
    }

    cout << "\n===== Number Analysis =====" << endl;
    cout << "Positive even numbers: " << positiveEven << endl;
    cout << "Positive odd numbers: " << positiveOdd << endl;
    cout << "Negative even numbers: " << negativeEven << endl;
    cout << "Negative odd numbers: " << negativeOdd << endl;

    if (positiveCount > 0) {
        double average = static_cast<double>(positiveSum) / positiveCount;

        cout << "Average of positive numbers: " << average << endl;
    }
    else {
        cout << "No positive numbers entered." << endl;
    }

    return 0;
}
