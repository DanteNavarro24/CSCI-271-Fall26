#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double number;
    double number_floor;
    double number_ceil;
    double number_round;
    double number_trunc;
    cout<<"Enter a decimal number: "<<endl;
    cin>>number;
    number_floor = floor(number);
    number_ceil = ceil(number);
    number_round = round(number);
    number_trunc = trunc(number);
    cout<<"floor: "<<number_floor<<endl;
    cout<<"ceil: "<<number_ceil<<endl;
    cout<<"round: "<<number_round<<endl;
    cout<<"trunc: "<<number_trunc<<endl;
    
    return 0;
}
