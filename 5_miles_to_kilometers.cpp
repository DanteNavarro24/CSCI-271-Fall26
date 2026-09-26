#include <iostream> 
using namespace std;
int main(){
    const double conversion = 1.60934;
    double miles;
    double miles_kilometers;
    double kilometers;
    double kilometers_miles;
    cout<<"enter a distence in miles:"<<endl;
    cin>>miles;
    miles_kilometers = miles * conversion;
    cout<<miles<<" miles = "<< miles_kilometers<<" kilometers"<<endl;
    cout<<"enter a distence in kiometers:"<<endl;
    cin>>kilometers;
    kilometers_miles = kilometers / conversion;
    cout<< kilometers<<" kilometers = "<<kilometers_miles<< " miles "<<endl;
    return 0;
    }
