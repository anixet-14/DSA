//Map stores data in unique key-value pair form, i.e., 
//Each key can be assigned only once but they can have same value.

#include<iostream>
using namespace std;
#include<map>

int main(){
    map<int,string> m;
    m[1] = "Aniket";
    m[2] = "Gupta";
    m[13] = "DSA";

    m.insert({5, "C++"});
    cout<<"Before Erase"<<endl;
    for (auto i : m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<"13 is present or not : "<<m.count(13)<<endl;

    cout<<"After Erase"<<endl;
    m.erase(13);

    for (auto i : m){
        cout<<i.first<<" : "<<i.second<<endl;
    }

    auto it = m.find(5);

    for (auto i = it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

}