#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& arr){
    int i = 0;
    for (int j = 0; j<arr.size() ; j++){
         if (arr[j]!=0){
            swap(arr[i], arr[j]);
            i++;
        }
    }

    for (auto i : arr){
        cout<<i<<" ";        
    }
    cout<<endl;
}

int main(){
    vector<int> arr = { 1, 0, 2, 0 , 3, 0, 0 , 0};
    moveZeroes(arr);
}

