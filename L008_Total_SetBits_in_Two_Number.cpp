//Given two numbers a and b, find total number of set bits, i.e., 1's in a and b
#include<iostream>
using namespace std;

void setBits(int a, int b){
    int count = 0;
    int m = a;
    int n = b;
    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    while(b!=0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    cout<<"Total set bits in "<<m<<" & "<<n<<" is : "<<count<<endl;
}

int main(){
    setBits(2,3);
    setBits(11,17);
}
