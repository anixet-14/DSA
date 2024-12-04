#include<iostream>
using namespace std;

// Recursive function to perform Bubble Sort
void bubbleSortRecursive(int arr[], int size) {
    // Base case: If the array size is 1 or less, it is already sorted
    if (size ==0 || size == 1) {
        return;
    }

    // Perform one pass of bubble sort: Bubble the largest element to the end
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]); // Swap the elements
        }
    }

    // Recursive call for the remaining array (excluding the last element)
    bubbleSortRecursive(arr, size - 1);
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform Bubble Sort using recursion
    bubbleSortRecursive(arr, size);

    // Output the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
