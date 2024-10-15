#include<iostream>
using namespace std;


int nthFibonacciTerm(int n){
    if (n<1){
        cout<<"Give valid term number"<<endl;
        return -1;
    } 
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    if (n>2){
        return nthFibonacciTerm(n-1)+nthFibonacciTerm(n-2);
    }
}


int main(){
    int term = 8;
    int ans = nthFibonacciTerm(term);
    if (ans != -1) { // Check for invalid input
        cout << "The " << term << "-th Fibonacci term is: " << ans << endl;
    }
    return 0;
}
