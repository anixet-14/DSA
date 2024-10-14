#include<iostream>
using namespace std;
#include<queue>

int main(){
    queue<string> q;
    q.push("Aniket");
    q.push("Gupta");
    q.push("MSRIT");

    cout<<q.front()<<endl; //Displays element that entered queue first

    cout<<q.size()<<endl; //Size of queue

    q.pop(); //Removes element at the front

    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
}