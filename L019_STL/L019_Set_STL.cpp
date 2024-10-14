//A set stores only unique elements, ensuring each element is stored once, regardless of repeated inputs.
//Behind the scene is BST for ordered Sets.

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6); //Time complexity of insert is O(logn)




    for (auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;


    set<int>::iterator it = s.begin(); //To move through the indexes of set
    it++;

    s.erase(it);

    for (auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<s.count(5)<<endl; //Checks whether 5 is present in set.

    set<int>::iterator itr = s.find(6);

    cout<<*itr<<endl; //itr stores reference of element if it finds that element in the set



}