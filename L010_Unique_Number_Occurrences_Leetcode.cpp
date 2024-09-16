/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.*/



#include<iostream>
#include <vector>
#include<algorithm> // For the sort() function
using namespace std;

// Function to check if all the occurrence counts in the array are unique
bool uniqueOccurrences(vector<int>& arr) {
    vector<int> ans; // Vector to store the occurrence counts
    int size = arr.size(); // Get the size of the input array
    
    // Step 1: Sort the array so that equal elements are grouped together
    sort(arr.begin(), arr.end());
    
    int i = 0; // Index to traverse the array
    
    // Step 2: Count the occurrences of each distinct element
    while (i < size) {
        int count = 1; // Initialize the count to 1 for each element
        // Traverse through subsequent elements to count identical values
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment count if the elements are the same
            } else {
                break; // Exit the loop if a different element is found
            }
        }
        ans.push_back(count); // Store the occurrence count in the 'ans' vector
        i += count; // Move to the next distinct element
    }

    // Step 3: Check for uniqueness of the occurrence counts
    size = ans.size(); // Update size to the number of unique elements
    sort(ans.begin(), ans.end()); // Sort the occurrence counts
    
    // Step 4: Check if any two occurrence counts are the same
    for (int i = 0; i < size - 1; i++) {
        if (ans[i] == ans[i + 1]) { // If two consecutive counts are the same
            return false; // Return false if there is a duplicate count
        }
    }

    return true; // If all counts are unique, return true
}

int main() {
    // Example input array
    vector<int> arr = {1, 2, 1, 3, 1, 2};

    // Call the function to check for unique occurrences
    bool result = uniqueOccurrences(arr);

    // Output the result
    if (result) {
        cout << "Unique Occurrences Found!" << endl;
    } else {
        cout << "Occurrences for given array is not unique." << endl;
    }

    return 0;
}
