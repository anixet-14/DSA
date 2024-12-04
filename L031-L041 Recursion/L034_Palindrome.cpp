#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){     
        if (i>j){
        return true;
    }
    
    if(str[i]!=str[j]){
        return false;
    }
    i++;
    j--;
    checkPalindrome(str, i, j);
}

int main(){
    string str ="aba";
    if(checkPalindrome(str, 0, str.length()-1)){
        cout<<"It is a palindrome"<<endl;
    }
    else {
        cout<<"It is not a palindrome."<<endl;
    }
}