/* You are given an integer mountain array arr of length n where the values increase 
to a peak element and then decrease. Return the index of the peak element. Your task
is to solve it in O(log(n)) time complexity. (We'll use Binary Search.)*/
#include<iostream>
using namespace std;

// Function to find the peak index in a mountain array
int PeakIndex(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid;
    
    // Binary search loop
    while (start < end) {
        mid = start + (end - start) / 2;
        
        // If middle element is less than the next, peak is on the right
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } 
        // Otherwise, peak is on the left (or is the middle element)
        else {
            end = mid;
        }
    }
    return start; // Peak index
}

int main() {
    int arr[] = {3, 4, 5, 1}; // Mountain array
    int size = sizeof(arr) / sizeof(int); // Calculate size of array
    
    int ans = PeakIndex(arr, size); // Get peak index
    
    // Output the peak element and its index
    cout << "Peak Element in Mountain array '" << arr[ans] << "' is present at index " << ans << endl;
    
    return 0;
}
