#include<iostream>
using namespace std;

void update(int a){
    a -= 5;
}

int update1(int a){
    int ans = a*a;
    return ans;
}
int main(){
    int a = 15;
    update(a);
    cout<<a<<endl;
    a = update1(a);
    cout<<a<<endl;
}
