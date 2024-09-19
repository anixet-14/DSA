/*Find total number of occurrence of element K in a sorted array of size N.*/

#include<iostream>
using namespace std;

int firstOcc(int arr[], int key, int size, int &count) { //Using Binary Search
    int low = 0;               
    int high = size - 1;       
    int mid;
    int answer = -1;             
    
    while (low <= high) {
        mid = low + (high - low) / 2;
        
        if (key == arr[mid]) {
            count++;
            answer = mid;  //If element is found, it'll shift end to left of mid and again check if same element is present at left or not to get leftmost element, i.e., first occurrence.
            high = mid-1;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
    }
    return answer;
}
int lastOcc(int arr[], int key, int size, int &count) { //Using Binary Search
    int low = 0;               
    int high = size - 1;       
    int mid;
    int answer = -1;
               
    
    while (low <= high) {
        mid = low + (high - low) / 2;
    
        if (key == arr[mid]) {
            count++;
            answer = mid;
            low = mid+1;//If element is found, it'll shift start to right of mid and again check if same element is present at right or not to get rightmost element, i.e., last occurrences.
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
    }
    return answer;
}

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 6, 6, 7};  // Array of sorted elements
    int size = 9;                          // Size of the array
    int key  = 6;                          // Key to be searched in the array
    int count = 0;

    // Call the BinarySearch function and store the result
    int ans1 = firstOcc(arr, key, size, count);
    int ans2 = lastOcc(arr, key, size, count);
    
    
    // If the key is found, print the index
    if (ans1 != -1) {
        cout<<(count-1)<<endl; //Subtracting minus 1 to remove twice added mid at the first round.
        cout<<(ans2-ans1+1)<<endl; //Since array is sorted, last - first occurrence +1 = total occurrence
    }
    // If the key is not found, print an appropriate message
    else {
        cout << "Element " << key << " not found in array." << endl;
    }
    
    return 0;
}
