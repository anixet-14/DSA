#include<iostream>
using namespace std;

// Function to perform Binary Search on a sorted array
int BinarySearch(int arr[], int key, int size) {
    int low = 0;               // Initialize low to the start of the array
    int high = size - 1;        // Initialize high to the end of the array
    int mid;                    // Variable to hold the middle index
    
    // Continue searching while the low index is less than or equal to high
    while (low <= high) {
        mid = low + (high - low) / 2; // Find the middle index
        
        // If the key is found at the middle index
        if (key == arr[mid]) {
            return mid;         // Return the index of the key
        }
        // If the key is greater than the middle element, search the right half
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        // If the key is smaller than the middle element, search the left half
        else if (key < arr[mid]) {
            high = mid - 1;
        }
    }
    
    // If the key is not found, return -1
    return -1;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6, 7};  // Array of sorted elements
    int size = 7;                          // Size of the array
    int key  = 6;                          // Key to be searched in the array
    
    // Call the BinarySearch function and store the result
    int ans = BinarySearch(arr, key, size);
    
    // If the key is found, print the index
    if (ans != -1) {
        cout << "Element " << key << " is present at index " << ans << endl;
    }
    // If the key is not found, print an appropriate message
    else {
        cout << "Element " << key << " not found in array." << endl;
    }
    
    return 0;
}
