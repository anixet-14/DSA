#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    cout<<"Reverse of given array is : ";
    for (int i; i<size; i++){
        cout<<arr[size-i-1]<<" ";
    }
    cout<<endl;
}

void reverse_using_swap(int arr[], int size){
    int start = 0;
    int end = size-1;

    while (start<=end){
        swap(arr[start], arr[end]); //It's an in-built function, and it reverses the array in main memory.
        start++;
        end--;
    }
    
}


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
    
    

    cout<<"Using Inbuilt Function"<<endl;
    reverse_using_swap(arr, 6);
    printArray(arr, 6);
    
    
}