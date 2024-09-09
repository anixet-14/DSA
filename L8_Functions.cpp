#include<iostream>
using namespace std;

void pow(int a, int b){ //Declaring and defining the function
    int ans = 1;
    for (int i=1; i<=b; i++){
        ans = ans *a;
    }
    cout<<"pow("<<a<<","<<b<<") = "<<ans<<endl;
}

void checkEvenOdd(int num){
    if(num%2==0){
        cout<<num<<" is Even"<<endl;
    }
    else {
        cout<<num<<" is Odd."<<endl;
    }
}


int main(){
    pow(2,3); //Calling the function
    pow(3,3);
    checkEvenOdd(6);
    checkEvenOdd(7);
}