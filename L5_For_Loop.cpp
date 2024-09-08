#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Printing Numbers From 1 to "<<n<<endl;

    // for (int i = 1; i<=n; i++){
    //     cout<<i<<endl;
    // }

    int i = 1;
    for (;;){
        if(i<=n){
            cout<<i<<endl;
        }
        else {
            break; //Because the for loop doesn't have idea when to stop.
        }
         i++;
    }

    for (int a= 0, b= 1; a>=0 && b>=1; a--, b--){
        cout<<a<<" "<<b<<endl;
    }
}