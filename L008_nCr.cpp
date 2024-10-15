#include<iostream>
using namespace std;

//function for factorial;
int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    else {
        int ans = 1;
        for (int i = n; i>1; i--)
        {
            ans*=i;
        }
        return ans;
    }
}

int nCr(int n, int r){
    if(n<r){
        cout<<"Enter valid n and r values to the function (n >= r)"<<endl;
        return 0;
    }
    cout<< (factorial(n)/(factorial(r)*factorial(n-r)))<<endl; //Formula of nCr
}

int main(){
    
    nCr(10,6);
}
