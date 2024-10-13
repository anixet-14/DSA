//Vector is dynamic array.

#include<iostream>
using namespace std;
#include<vector> //To access STL

int main(){
    vector<int> v; //Initialised as size zero.
    cout<<v.capacity()<<endl; //Returns how much memory is allocated
    v.push_back(1); //To add element to vector
    cout<<v.capacity()<<endl; 

    v.push_back(2); 
    cout<<v.capacity()<<endl; //Capacity doubles whenever it gets full and new element has to be added.

    v.push_back(3); 
    cout<<v.capacity()<<endl; 

    v.push_back(4);
    cout<<v.capacity()<<endl; 

    cout<<v.at(3)<<endl;

    cout<<v.front()<<" "<<v.back()<<endl; //For first and last element of vector


    v.pop_back(); //Removes the last element of vector

    for ( int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<v.size()<<" "<<v.capacity()<<endl; //Clears the size, not capacity. Size is no. of element present, capacity is how much memory has been assigned. 

    vector<int> a(5, 1); //A int vector 'a' with size 5 initialised with element 1.

    vector<int> last(a); // A vector last is initialized by copying al elements of a.
}