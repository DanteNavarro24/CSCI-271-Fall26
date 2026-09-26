#include <iostream>
using namespace std;
int main(){
    double starting_balance;
    double interest_rate;
    cout<<"enter your starting balance"<<endl;
    cin>>starting_balance;
    cout<<"enter your interest rate as a demical"<<endl;
    cin>>interest_rate;
    starting_balance *= (1+interest_rate);
    cout<<"Balance after year 1: $"<<starting_balance<<endl;
    starting_balance *=(1+interest_rate);
    cout<<"balance after year 2: $"<<starting_balance<<endl;
    starting_balance *= (1+interest_rate);
    cout<<"balance after year 3: $"<<starting_balance<<endl;
    return 0;
}
