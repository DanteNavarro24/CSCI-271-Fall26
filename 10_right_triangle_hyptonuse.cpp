#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double leg_one;
    double leg_two;
    double hyptonuse;
    cout<<"Enter a input for leg1 :"<<endl;
    cin>>leg_one;
    cout<<"Enter a input for leg2 :"<<endl;
    cin>>leg_two;
    hyptonuse = sqrt(pow(leg_one,2)+ pow(leg_two,2));
    hyptonuse = round(hyptonuse*100)/100;
    cout<<"Hyptonuse: "<<hyptonuse<<endl;
    return 0;
}
