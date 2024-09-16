#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void allDuplicate(vector<int>& arr){
    sort(arr.begin(), arr.end());
    for(int i = 0; i<(arr.size()-1); i++){
        if (arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    vector<int> arr = {4,3,2,7,8,2,3,1};
    allDuplicate(arr);
}


