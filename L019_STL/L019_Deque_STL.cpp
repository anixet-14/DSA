//Deque = Doubly Ended Queue, i.e., push and pop operations can be handled from both end of queue.

#include<iostream>
using namespace std;

#include<deque> // To access STL

int main(){

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);

    cout<<d.at(0)<<endl;

    cout<<d.front()<<" "<<d.back()<<endl;

    cout<<d.empty()<<endl;  

    cout<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1); //Range has to be specified to erase specific elements

    for (int i: d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    for (int i: d){
        cout<<i<<" ";
    }
    cout<<endl;
}