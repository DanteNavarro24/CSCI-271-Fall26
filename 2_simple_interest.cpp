#include <iostream>
using namespace std;
int main(){
    const double interest_rate = 0.05;
    double principal_amount;
    int years;
    double overall_interest;
    double totalamount_owned;
    cout<<"enter a principal_amount\n";
    cin>>principal_amount;
    cout<<"enter amount of years\n";
    cin>>years;
    overall_interest = (principal_amount * interest_rate * years);
    cout<<"interest:\n"<<overall_interest;
    totalamount_owned = overall_interest + principal_amount;
    cout<<"\ntotal amount:\n"<<totalamount_owned;
    return 0;
    }
