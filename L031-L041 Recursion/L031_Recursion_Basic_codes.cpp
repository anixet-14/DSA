#include<iostream>
using namespace std;

//Factorial of Number
int factorial(int n){
    if (n==0){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
//Power of 2
int pow2(int n){
    if (n==0){
        return 1;
    }
    else{
        return 2*pow2(n-1);
    }
}

// nth Fibonacci Number

int nthFibonacci(int n) {
    if (n == 1) {
        return 0; //Because first element of fibonacci is 0
    }
    if (n == 2) {
        return 1;
    }
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}


int main(){
    int ans = factorial(4);
    cout<<ans<<endl;

    int ans2 = pow2(10);
    cout<<ans2<<endl;

    int ans3 = nthFibonacci(8);
    cout<<ans3<<endl;
}