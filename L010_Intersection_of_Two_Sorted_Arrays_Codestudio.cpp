/*You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. 
Both these arrays are sorted in non-decreasing order. You have to find
the intersection of these two arrays.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



/* Method - 1  : It's time complexity is more.
// Function to find the intersection of two vectors
vector<int> Intersection(vector<int>& arr1, vector<int>& arr2) {
    vector<int> ans; // Vector to store the result
    

    // Iterate through each element in arr1
    for (int i = 0; i < arr1.size(); i++) {
        int element = arr1[i]; // Current element from arr1

        // Iterate through each element in arr2 to find a match
        for (int j = 0; j < arr2.size(); j++) {

            // Check if the current elements from arr1 and arr2 are equal
            if (arr1[i] == arr2[j]) {
                ans.push_back(element); // Add the common element to the result vector
                arr2[j] = INT32_MIN;    // Mark the element in arr2 as visited to avoid duplicates
                break;                  // Stop searching in arr2 for this element
            }
        }
    }
    return ans; // Return the result vector containing intersection elements
}

*/

//Method-2 : Two Pointer Approach

// Function to find the intersection of two sorted vectors
vector<int> Intersection(vector<int>& arr1, vector<int>& arr2) {
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    vector<int> ans; // Vector to store the result

    // Iterate through both vectors until one of them is fully traversed
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            // If elements match, add to result and move both pointers
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            // If arr1's element is smaller, move pointer i forward
            i++;
        } else {
            // If arr2's element is smaller, move pointer j forward
            j++;
        }
    }
    return ans; // Return the result vector containing intersection elements
}

int main() {
    // Example vectors
    vector<int> arr1 = {2, 6, 1, 2}; // Example input for arr1
    vector<int> arr2 = {1, 2, 3, 4, 2}; // Example input for arr2

    // Sort both vectors before finding the intersection
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Find the intersection of arr1 and arr2
    vector<int> ans = Intersection(arr1, arr2);

    // Print the intersection elements
    cout << "Intersection elements: ";
    for (int element : ans) {
        cout << element << " ";  // Print each element in the result vector
    }
    cout << endl; // Print a newline for clean output

    return 0; // End of the program
}
