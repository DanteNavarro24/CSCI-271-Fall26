#include <iostream>
using namespace std;
int main(){
    double area;
    double perimeter;
    double length;
    double width;
    cout<<"Enter a length for the rectangle\n";
    cin>>length;
    cout<<"Now Enter a width for the rectangle\n";
    cin>>width;
    area = (length * width);
    cout<<"area:\n"<<area ;
    perimeter = (2*(length+width));
    cout<<"\nperimeter:\n"<<perimeter;
    return 0;
    }
