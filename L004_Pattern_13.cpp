#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i =1;
    while (i<=n){
        int j = 1;
        int k = n - i + 1;
        while (j<=k){
            cout<<"*" ;
            j++;
           
        }
        cout<<endl;
        i++;

    }
}
