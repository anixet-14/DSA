/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number. */

#include<iostream>
#include<vector>
using namespace std;
//Normal Method
void duplicate(int arr[], int size){
    int answer = 0;
    for (int i = 0; i<size; i++){
        answer = answer^arr[i]; //Using XOR, hence duplicate element will be cancel out and rest will be there.
    }
    for (int i = 1; i<size; i++){
        answer = answer^i; //XORing the numbers directly to array XORed ones, so left numbers will become zero and only duplicate will be left.
    }
    cout<<"Duplicate Element In The Array : "<<answer<<endl;
}

//Using Vector
void findDuplicate(vector<int>& arr){
    int answer = 0;
    for (int i = 0; i<arr.size(); i++){
        answer = answer^arr[i];
    }
    for (int i = 1; i<arr.size(); i++){
        answer = answer^i;
    }
     cout<<"Duplicate Element In The Array Using Vector Method: "<<answer<<endl;
}



int main(){
    int arr[100] = {2, 1, 3, 2, 4};
    vector<int> arr1 = {1, 2, 5, 3, 4, 5};
    int size = 5;
    duplicate(arr, size);
    findDuplicate(arr1);
}