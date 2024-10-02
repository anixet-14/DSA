#include<iostream>
using namespace std;

int main(){
    int a; //Variable must be declared before using and if it's value is not assigned, computer will throw some garbage value.
    cout<<a<<endl;
    int b = 3;
    
    if(true){
        int b = 7; //This value of b will be only applicable inside this if statement.
        int c = 8; //This value of c will also be applicable inside if statement and also outside, it's not valid.
        cout<<b<<endl;
    }
    cout<<b<<endl;    
    //cout<<c<<endl;
    //int b = 9; //Redefintion of b will be an error.
    int i = 4;
    for (int i= 0; i<5; i++){ //It'll use i as 0 as it's specifically assigned for the loop.
        cout<<i<<endl;
    }

    for (;i<5;i++){ //Since i is not specifically assigned so i = 4 will come in picture.
        cout<<i<<endl;
    }

    //Same block of code can't have two same variables but it can have by creating another block inside block.
}
