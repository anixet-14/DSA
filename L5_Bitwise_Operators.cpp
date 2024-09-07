#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;

    cout<<"a&b : "<< (a&b) <<endl;
    cout<<"a|b : "<< (a|b) <<endl;
    cout<<"~a : "<< (~a) <<endl;
    cout<<"a^b : "<< (a^b) <<endl;
    cout<<"Left shift 5 by 2 : "<< (5<<2) <<endl;
    cout<<"Right shift 5 by 2 : "<< (5>>2) <<endl;

    //Pre-Post Increment i
    int i = 1;
    int c = a + (i++); //i = 1, then 2
    int d = a + (++i); //i = 3, by incrementing 2
    cout<< c <<endl;
    cout<< d <<endl;
    
    
}