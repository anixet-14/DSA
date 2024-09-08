#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the binary number : ";
    cin>>n;
    int i = 0;
    int ans = 0;

    while(n!=0){
        //int bit = n&1; This approach is wrong as system treat input as integer, hence it'll convert provided bit into actual bit
        int digit = n%10; 
        if (digit==1){
            ans = ans + pow(2, i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}