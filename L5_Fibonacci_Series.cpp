#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int first = 0; int second = 1;
    int next;
    cout<<first<<" "<<second<<" ";
    for ( int i = 3; i<=n; i++){
        next = first+second;
        cout<<next<<" ";
        first = second;
        second = next;
    }

}