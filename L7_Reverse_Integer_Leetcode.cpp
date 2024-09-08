//Given a signed 32-bit integer x, return x with digits reversed. If reversing causes the value go outside the signed 32 bit integer range, return 0.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0;
    while(n!=0){
        if ( ans > INT32_MAX/10 || ans<INT32_MIN/10){ //If the reverse exceeds limit at any moment, it'll return 0;
            cout<<"Out of Range"<<endl;
            return 0;
        } else {
            int digit = n%10;
            ans = (ans * 10) +digit;
            n = n/10;}
        
    }
    cout<<ans<<endl;
}