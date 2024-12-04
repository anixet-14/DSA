#include<iostream>
using namespace std;

int LinearSearch(int *arr, int key, int size, int index = 0){
    if (size ==0){
        return -1;
    }
    if (arr[0] == key){
       return index;
    }
    else {
        return LinearSearch(arr+1, key, size-1, index+1);
    }
}

int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    int size = 5;
    int key = 7; 
    int result = LinearSearch(arr, key, size);
    if (result != -1) {
        cout << "Element " << key << " is found at index " << result << endl;
    } else {
        cout << "Element " << key << " is not found in the array." << endl;
    }    
 }