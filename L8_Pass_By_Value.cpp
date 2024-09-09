#include<iostream>
using namespace std;

void increment(int n){ //Function uses copy of n, hence original value in main function remains unaffected
    n++;
    cout<<"Incremented n by calling function is "<<n<<endl;
}

int main(){
    int n;
    cin>> n;
    increment(n);
    cout<<"After calling increment(), printing value using main(), n is "<<n<<endl;
}