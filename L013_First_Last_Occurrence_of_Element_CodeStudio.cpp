/*You have given a sorted array consisting of N element and an integer K.
The task is to find the first and last occurrence of K in the array.*/


#include<iostream>
using namespace std;

int firstOcc(int arr[], int key, int size) { //Using Binary Search
    int low = 0;               
    int high = size - 1;       
    int mid;
    int answer = -1;             
    
    while (low <= high) {
        mid = low + (high - low) / 2;
        
        if (key == arr[mid]) {
            answer = mid;
            high = mid-1;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
    }
    return answer;
}
int lastOcc(int arr[], int key, int size) { //Using Binary Search
    int low = 0;               
    int high = size - 1;       
    int mid;
    int answer = -1;             
    
    while (low <= high) {
        mid = low + (high - low) / 2;
    
        if (key == arr[mid]) {
            answer = mid;
            low = mid+1;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
    }
    return answer;
}

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 6, 6, 7};  // Array of sorted elements
    int size = 9;                          // Size of the array
    int key  = 6;                          // Key to be searched in the array
    
    // Call the BinarySearch function and store the result
    int ans1 = firstOcc(arr, key, size);
    int ans2 = lastOcc(arr, key, size);
    
    // If the key is found, print the index
    if (ans1 != -1) {
        cout << "Element " << key << " first occured at index " << ans1 <<" and last occurred at index "<<ans2<< endl;
    }
    // If the key is not found, print an appropriate message
    else {
        cout << "Element " << key << " not found in array." << endl;
    }
    
    return 0;
}
