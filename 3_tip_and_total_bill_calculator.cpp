#include <cmath>
#include <iostream>
using namespace std;
int main(){
    double bill_amount;
    double tip_percentage;
    double tip_amount;
    double total_bill;
    double rounded_total;
    double rounded_tip;
    cout<<"enter a bill amount:\n";
    cin>>bill_amount;
    cout<<"enter a tip percentage:\n";
    cin>>tip_percentage;
    tip_amount =(bill_amount * tip_percentage)/100.0;
    rounded_tip = round(tip_amount *100)/100;
    cout<<"your tip amount is:\n"<<rounded_tip;
    total_bill = (bill_amount + tip_amount);
    rounded_total = round(total_bill * 100)/100.0;
    cout<<"\nYour total is:\n"<<rounded_total;
}
