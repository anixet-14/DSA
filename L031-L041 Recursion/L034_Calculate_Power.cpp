#include<iostream>
using namespace std;

int power(int a, int b){
    if (b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int z = b/2;
    if (b%2==0){
        return power(a, z)*power(a, z);
    }
    else{
        return a*power(a, z)*power(a, z);
    }
}


int main(){
    int ans = power(3, 4);
    cout<<ans<<endl;
}