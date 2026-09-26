#include <iostream>
using namespace std;
int main(){
    double total_bill;
    int people;
    double pay_per_person;
    cout<<"Enter a total bill amount:"<<endl;
    cin>>total_bill;
    cout<<"Enter how much people you are splitting the bill with"<<endl;
    cin>>people;
    pay_per_person = total_bill / people;
    cout<<"Each person pays"<<pay_per_person;
}
