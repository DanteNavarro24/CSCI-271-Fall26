#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double pi = 3.14159;
    double radius;
    double area;
    double perimeter;
    cout<<"enter the radius for a circle:"<<endl;
    cin>>radius;
    area = pi* pow(radius,2);
    perimeter = 2*pi*radius;
    cout<<"radius:"<<radius<<endl;
    cout<<"area:"<<area<<endl;
    cout<<"perimeter:"<<perimeter<<endl;
    
}
