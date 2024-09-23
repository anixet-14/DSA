#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    
    if (ch>=97 && ch<=122){
        cout<<"Input is lower case"<<endl;
    }
    else if (ch>=65 && ch<=90){
        cout<<"Input is upper case"<<endl;
    }
    else if (ch>=48 && ch<=57){
        cout<<"Input is a digit"<<endl;
    }
    

}
