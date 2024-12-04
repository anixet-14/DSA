#include <iostream>
using namespace std;

int findSum(int *arr, int size) {
    int sum = 0;
    if (size == 0) {
        return 0;  
    }
    if (size == 1){
        return arr[0];
    }
    
    
    return arr[0] + findSum(arr + 1, size - 1);  
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};  // Sample array
    int size = 5;
    int ans = findSum(arr, size); 
    cout<<"Sum of elements of Array is : "<<ans<<endl;
}