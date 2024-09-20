#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    int mid;
    
    while (s < e) {
        mid = s + (e - s) / 2;
        
        // Compare with arr[e], not arr[0]
        if (arr[mid] > arr[e]) {
            s = mid + 1;  // Minimum is in the right part
        } else {
            e = mid;  // Minimum is in the left part or at mid
        }
    }
    
    return arr[s];  // Return the minimum element
}

int main() {
    vector<int> arr = {11, 13, 15, 17};  // Non-rotated sorted array
    int ans = findMin(arr);  // Find the minimum element
    cout << ans;  // Output the result

    return 0;
}
