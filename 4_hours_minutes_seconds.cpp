#include <iostream>
using namespace std;
int main(){
    int seconds;
    int hours;
    int minutes;
    int remaining_seconds;
    cout<<"enter a amount in seconds\n";
    cin>>seconds;
    hours = (seconds / 3600);
    minutes = (seconds % 3600)/60;
    remaining_seconds = seconds % 60;
    cout<<"hours:"<<hours<< endl;
    cout<<"minutes:"<<minutes<<endl;
    cout<<"seconds:"<<remaining_seconds<<endl;
    }
