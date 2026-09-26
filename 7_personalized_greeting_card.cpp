#include <iostream>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"Enter your age:";
    cin>>age;
    cin.ignore();
    cout<<"Enter a name:";
    getline(cin,name);
    cout<<"happy birthday, "<<name<<"! you are turning "<<age;
    return 0;
}
