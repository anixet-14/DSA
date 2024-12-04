#include<iostream>
using namespace std;

void reverseString(string &str, int i, int j){ //If str is used, instead of &str, it'll be pass by value, which creates copy of variable then proceed in function, Thus original variable will not have changed value.
    if (i>j){
        return ;
    }
    cout<<"String at iteration "<<i<<" : "<<str<<endl;
    swap(str[i], str[j]);
    i++;
    j--;
    reverseString(str, i, j);
}

int main(){
    string str ="I am aniket.";
    reverseString(str, 0, str.length()-1);
    cout<<"Finally reversed string: "<<str<<endl;
}