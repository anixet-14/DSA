/* You have been given an integer array of size N. It only contains 0s, 1s.
Write a solution to sort this array list*/
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void sortArray(int arr[], int size){
    int i = 0;
    int j = size-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i], arr[j]);
        }
    }

    printArray(arr, size);
}

int main(){
    int arr[100]={ 1,1,0,0,0,0,1,0};
    int size = 8;
    sortArray(arr, size);
}