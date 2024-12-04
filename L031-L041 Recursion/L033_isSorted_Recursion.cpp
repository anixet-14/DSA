#include <iostream>
using namespace std;

bool isSorted(int *arr, int size) {
    if (size == 0 || size == 1) {
        return true;  // An empty or single-element array is always sorted.
    }
    if (arr[0] > arr[1]) {
        return false;  // If the current pair is out of order, the array is not sorted.
    }
    // Return the result of the recursive call for the rest of the array.
    return isSorted(arr + 1, size - 1);  
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Sample array
    int size = 5;
    bool ans = isSorted(arr, size); 
    if (ans) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
}