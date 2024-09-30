#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check whether it's prime or not: ";
    cin>>n;
    
    if (n<2){
        cout<<"Type number greater than 2";
    }
    if (n==2){
        cout<<n<<" is a prime number."<<endl;
    }

    if (n>2){
        bool isPrime = 1;
        for (int i = 2; i<n ; i++){
            if (n%i==0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime==0){
            cout<<n<<" is not a prime number"<<endl;
        }
        else {
            cout<<n<<" is a prime number."<<endl;
        }
    }
}
