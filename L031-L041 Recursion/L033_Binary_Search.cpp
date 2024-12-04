#include<iostream>
using namespace std;

int BinarySearch(int arr[], int target, int low, int high){
    if (low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if (arr[mid]==target){
        return mid;
    }
    if (target<mid){
        return BinarySearch(arr, target, low, mid-1);
    }
    else{
        return BinarySearch(arr, target, mid+1, high);
    }

}

int main(){
    int arr[5] = {1, 2, 3, 5, 7};
    int target = 12;
    int size = 5;
    int low = 0;
    int high = size - 1;

    
    int result = BinarySearch(arr, target, low, high);
    
    if (result!=-1){
        cout<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
