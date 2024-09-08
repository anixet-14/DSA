#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    //Works perfect on online compilers, may throw garbage output in VScode
    int ans= 0;
    int i =0;
    while(n!=0){

        int bit = n&1; //Stores last bit of number
        ans = (bit * pow(10, i)) +ans; //Places the stored bit at correct place
        n = n>>1; //Divides by 2 or also right shift once the bit extracted is placed at correct spot.
        i++;
    }

    cout<<"Answer is "<<ans<<endl;
}