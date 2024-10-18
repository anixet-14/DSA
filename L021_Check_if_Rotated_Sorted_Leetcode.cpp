#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& arr) {
    int countBreaks = 0;
    int n = arr.size();

    // Traverse the array to count the number of times the order breaks
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1)%n]){
            countBreaks++;
        }
    }

    // For a rotated sorted array, there should be exactly one break in the order
    return countBreaks <= 1;
}

int main() {
    // Example rotated sorted array
    vector<int> arr = {3, 4, 5, 1, 2};
    
    bool rotated = check(arr);
    if (rotated) {
        cout << "It's a rotated sorted array";
    } else {
        cout << "It's not a rotated sorted array.";
    }

    return 0;
}
