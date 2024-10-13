#include<iostream>
#include<array> //to access STL
using namespace std;

int main(){
    int basic[3] ={1, 2, 3};

    //Using STL;
    array<int, 4> a = {1, 2, 3, 4}; 

    int size = a.size();

    for (int i = 0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<a.at(2)<<endl; //To get element of specific index.
    cout<<a.empty()<<endl; //Returns bool value to check array is empty or not.
    cout<<a.front()<<endl; //Returns first element of array
    cout<<a.back()<<endl; //Returns last element of array


}
