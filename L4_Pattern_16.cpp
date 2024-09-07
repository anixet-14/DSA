#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while (i<=n){
        int j = 1;
        while ( j<=n-i+1){
            cout<<j;
            j++;
        }
        // int k = 1;
        // while(k<i){
        //     cout<<"*";
        //     k++;
        // } 
        // int l = 1;
        // while(l<i){
        //     cout<<"*";
        //     l++;
        // } 
        int k = 1;
        while(k<i){
            cout<<"**";
            k++;
        } 

        int m = n-i+1;
        while(m>0){
            cout<<m;
            m--;
        } 
        cout<<endl;
        i++;
    }
}