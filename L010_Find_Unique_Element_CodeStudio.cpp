/* Given an Array of size N where N = 2M +1, have M numbers twice in it and
one number is present only once. Find and return the unique element.*/

#include<iostream>
using namespace std;


int findUnique(int arr[], int size) {
    int answer = 0;  // Initialize answer to 0
    for (int i = 0; i < size; i++) {
        answer = answer ^ arr[i];  // XOR all elements, duplicate elements cancel out
    }
    return answer;  // Return the unique element
}


void input(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Read elements into the array
    }
}

int main() {
    int testcase;
    cout<<"Enter the number of testcase : ";
    cin >> testcase;  // Input the number of test cases
    
    int results[testcase];  // Array to store results for each test case

    // Process each test case
    for (int t = 0; t < testcase; t++) {
        int size;
        cout<<"Enter The Size of [Array-"<<(t+1)<<"] : ";
        cin >> size;  // Input the size of the array
        cout<<"Enter The [Array-"<<(t+1)<<"] : ";
        
        int arr[size];  // Declare the array with the given size
        input(arr, size);  // Input array elements
        
        int found = findUnique(arr, size);  // Find the unique element
        results[t] = found;  // Store the result in the results array
    }

    // Output all results after processing all test cases
    for (int t = 0; t < testcase; t++) {
        cout<<"Unique element in [Array-"<<(t+1)<<"] : ";
        cout << results[t] << endl;  // Print the result for each test case
    }

    return 0;
}