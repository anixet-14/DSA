//Number of 1 bits (Also known as Hamming Weight)
#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    int count = 0;
    
    while(n!=0){ //Running until number becomes zero after right shift.
        if (n&1){  //Checking last bit is 1 or not. 
            count++;
        }
        n = n>>1;
    }
    cout<<count<<endl;
}
