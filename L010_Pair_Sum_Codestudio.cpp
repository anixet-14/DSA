/* You are given an integer array of size N and an integer S. Your task is to return 
the list of all pairs of elements that sum up to the integer S*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void pairsum(vector<int>& arr, int sum){
    sort(arr.begin(), arr.end());
    for (int i = 0; i<(arr.size()); i++){
        for (int j = i+1; j<(arr.size()); j++){
            if (arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            }
        } 
    }
}

int main(){
    int element;
    vector<int> arr = {2, -3, 3, 3, -2};
    int sum = 0;
    pairsum(arr, sum);
}