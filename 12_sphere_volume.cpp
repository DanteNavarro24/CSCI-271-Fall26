#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double pi =3.14159;
    double radius;
    double volume;
    cout<<"enter the radius of a sphere:"<<endl;
    cin>>radius;
    volume =(4.0 /3.0)*pi*pow(radius,3);
    cout<<"volume: "<<volume<<endl;
    
    
    return 0;
}
