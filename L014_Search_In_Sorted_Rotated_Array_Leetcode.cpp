#include<iostream>
#include<vector>
using namespace std;

 // Function to find the index of the minimum element in the rotated sorted array
        int findMin(vector<int>& arr) {
            int s = 0;
            int e = arr.size() - 1;
            int mid;
            
            // Using binary search to find the minimum element's index
            while (s < e) {
                mid = s + (e - s) / 2;
                
                // If the middle element is greater than the last element,
                // the minimum is in the right part
                if (arr[mid] > arr[e]) {
                    s = mid + 1;
                } 
                // Otherwise, the minimum is in the left part or could be the middle element itself
                else {
                    e = mid;
                }
            }
            
            return s;  // Return the index of the minimum element
        }

        // Standard binary search function to find the target in the given subarray range
        int BinarySearch(vector<int>& arr, int s, int e, int key) {
            int low = s;
            int high = e;
            int mid;
            
            // Perform binary search
            while (low <= high) {
                mid = low + (high - low) / 2;
                
                if (key == arr[mid]) {
                    return mid;  // Return the index if the target is found
                }
                else if (key > arr[mid]) {
                    low = mid + 1;  // Search in the right half
                }
                else if (key < arr[mid]) {
                    high = mid - 1;  // Search in the left half
                }
            }
            
            return -1;  // Return -1 if the target is not found
        }

        // Function to search for the target in the rotated sorted array
        int search(vector<int>& arr, int target) {
            int ans = findMin(arr);  // Find the index of the minimum element

            // Check if the target lies in the right sorted subarray
            if (target >= arr[ans] && target <= arr[arr.size() - 1]) {
                return BinarySearch(arr, ans, arr.size() - 1, target);  // Search in the right part
            } 
            // Otherwise, search in the left sorted subarray
            else {
                return BinarySearch(arr, 0, ans - 1, target);  // Search in the left part
            }
        }

int main(){
    vector<int> arr  ={4,5,6,7,0,1,2};
    int target = 0;
    int result = search(arr, target);
    cout<<result<<endl;

}