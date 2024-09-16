#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int arr[], int size) {
    int low = 0;
    int mid = 0;
    int high = size - 1;
    
    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[100] = {1, 1, 0, 0, 0, 0, 1, 0, 2, 0, 2, 0};
    int size = 12;
    sort012(arr, size);
    printArray(arr, size);
}
