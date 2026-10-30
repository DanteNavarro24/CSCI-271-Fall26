#include <iostream>
#include <string>
using namespace std;
int main(){
    double length;
    double width;
    double area;
    double perimeter;
    cout<<"Enter a amount for length and width: "<<endl;
    cin>>length;
    cin>>width;
    if(length && width>=0){
        area = length * width; 
        perimeter = (length * 2)+(width * 2);
        cout<<"Area: "<<area<<endl<<"Perimeter: "<<perimeter<<endl;
        if(length == width){
            cout<<"This is a square"<<endl;
        }else{
            cout<<"This is a rectangle"<<endl;
        }
        if(length>(width*2)||width>(length*2)){
           cout<<"This is a long narrow rectangle"<<endl; 
        }
    }else{
        cout<<"The length and width must be positive";
    }
    return 0;
}
