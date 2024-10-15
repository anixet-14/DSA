#include<iostream>
using namespace std;
//Given AP = 3*n + 7;
void nthTerm(int n){
    cout<<n<<"th term of AP = "<< (3*n+7)<<endl;
}

int main(){
    int n;
    cout<<"Enter n value as the number of term : ";
    cin>>n;
    nthTerm(n);
}

