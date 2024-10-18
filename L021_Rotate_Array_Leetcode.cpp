#include<iostream>
using namespace std;
#include<vector>


void rotate(vector<int>& arr, int k){
    vector<int> temp(arr.size());
    for (int i = 0; i<arr.size(); i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    arr = temp;

    cout<<"Array after roation by "<<k<<" : ";
    for (auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 2, 4, 5, 6, 7};
    rotate(arr, 3);

}