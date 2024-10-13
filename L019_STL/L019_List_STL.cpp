//It uses Doubly Linked List
#include<iostream>
using namespace std;
#include<list>

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for (int i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin()); //Erares beginning element.
    for (int i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<l.size()<<endl;

    list<int> n(5, 100);
     for (int i: n){
        cout<<i<<" ";
    }
    cout<<endl;
}