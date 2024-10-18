//Given an array of integers and a position M. Reverse the array after the position M.

#include<iostream>
using namespace std;
#include<vector>

void reverseArray (vector<int> &arr, int m){    
    int s = m+1;
    int e = arr.size()-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArray(vector<int> arr){
    for (int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    printArray(arr);

    cout<<"After Reversing through 3 index : ";
    reverseArray(arr, 3);
    printArray(arr);

}