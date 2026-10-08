#include <iostream>
using namespace std;
int main(){
    int total =0, counter =0, grade;
    cout<<"enter a grade or -1 to quit: "<<endl;
    cin>>grade;
    
    while(grade != -1 || grade>= 50) {
        total += grade;
        cout<<"total:"<<total<<endl;
        cout<<"grade:"<<grade<<endl;
        counter++;
        cout<<"counter: "<<counter<<endl;
        cin>>grade;
    }
    
    
    
    
    return 0;
}
