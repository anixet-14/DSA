#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void pairsum(vector<int>& arr, int sum){
    sort(arr.begin(), arr.end());
    for (int i = 0; i<(arr.size()); i++){
        for (int j = i+1; j<(arr.size()); j++){
            for (int k = j+1; k<(arr.size()); k++){
                if (arr[i]+arr[j]+arr[k]==sum){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<") ";
                }
            }
        }
         
    }

}

int main(){
    int element;
    vector<int> arr = {2, -3, 3, 3, -2};
    int sum = 2;
    pairsum(arr, sum);
}