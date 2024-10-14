#include<iostream>
using namespace std;
#include<stack>

int main(){

    stack<string> s;
    s.push("Aniket");
    s.push("Gupta");
    s.push("MSRIT");

    cout<<s.top()<<endl; //Displays element at the top of stack;
    s.pop(); //Pops the element at the top
    cout<<s.top()<<endl; 

    cout<<s.empty()<<endl; //To check stack is empty or not.

    

}