#include<iostream>
using namespace std;

int main(){
    char ch = '1';

    switch (ch) //Expression
    {
    case 1: //Is activated when expression has value 1
        cout<<"First"<<endl;
        break; 
    case 2:
        cout<<"Second"<<endl;
        break;
    case '1':
        cout<<"Character One"<<endl;
        break; //if break is not attached, once the case activates, all the cases below it, will be executed too.
    
    default: //When expression doesn't have any of case values, default is used.
        cout<<"Default Case";
        break;
    }
}
