#include<iostream>
using namespace std;

int main(){
    float a, b;
    char ch;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the operator ( +, -, *, / ) : ";
    cin>>ch;

    switch(ch){
        case '+' : cout<< a <<" + "<< b <<" = "<<(a+b)<<endl;
            break;
        case '-' : cout<< a <<" - "<< b <<" = "<<(a-b)<<endl;
            break;
        case '*' : cout<< a <<" * "<< b <<" = "<<(a*b)<<endl;
            break;
        case '/' : cout<< a <<" / "<< b <<" = "<<(a/b)<<endl;
            break;
        default: cout<<"Invalid Operator"<<endl;
    }

}