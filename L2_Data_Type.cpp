#include<iostream>
using namespace std;
int main(){
    int a = 123;
    cout<<a<<endl;

    char b = 'v';
    cout<<b<<endl;
    
    bool bl = true;
    cout<<bl<<endl;

    float f = 1.2;
    cout<< f <<endl;

    double d = 1.23;
    cout<<d<<endl;

    int size_a = sizeof(a);
    cout<< " Size of a is "<< size_a<<endl;

    int size_b = sizeof(b);
    cout<< " Size of b is "<< size_b<<endl;

    int size_bl = sizeof(bl);
    cout<< " Size of bl is "<< size_bl<<endl;

    int size_f = sizeof(f);
    cout<< " Size of f is "<< size_f<<endl;

    int size_d = sizeof(d);
    cout<< " Size of d is "<< size_d<<endl;

    //Typecasting

    cout<<"Type-Casting"<<endl;
    int c = 'c';
    cout<<c<<endl;

    char ch = 98;
    cout<<ch<<endl;
    
    //Implicit Conversion
    //Range of int: 0 to (2^32 - 1)
    //Range of char: 0 to (2^8 -1)
    char ch1 = 123456;
    cout<<ch1<<endl;

    unsigned un = -11; //Due to unsigned, after 2's compliment the number gets stored, but while printing process will not be revesered.
    cout<<un<<endl;

}


