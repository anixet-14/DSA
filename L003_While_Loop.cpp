#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int sum = 0;
    while (i<=n){
        cout<<i<<" ";
        sum = sum + i;
        i=i+1;
    }
    
    cout<<"Sum of first "<<n<<" number is "<< sum <<endl;
}
