#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& arr) {
    int totalSum = 0;  // To store the total sum of the array
    int leftSum = 0;   // To store the sum of elements on the left of the pivot
    
    // Calculate the total sum of the array
    for (int num : arr) {
        totalSum += num;
    }
    
    // Iterate through the array and check for the pivot index
    for (int i = 0; i < arr.size(); i++) {
        // If left sum equals right sum (totalSum - leftSum - arr[i]), return the index
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i;
        }
        // Update the left sum for the next iteration
        leftSum += arr[i];
    }
    
    // Return -1 if no pivot index is found
    return -1;
}

int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 6};  // Example array
    int ans = pivotIndex(arr);
    cout << ans << endl;  // Output the pivot index (expected: 3)
}
