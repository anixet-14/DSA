#include<iostream>
using namespace std;

#include<algorithm> //For Fill Method
#include<array>
void printArray(int arr[], int size){
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[10] = {0}; //This works only for '0'.
    int arr2[10] = {1}; //Only 0th index will be 1, rest all will be 0
    printArray(arr1, 10);
    printArray(arr2, 10);
    //Initializing complete array with same value other than 0 can be done in various methods.
    //Method - 1, LOOP
    int arr3[10];
    for (int i = 0; i <10; i++ ){
        arr3[i] = 1;
    }
    printArray(arr3, 10); /*Size is given manually according to how many elements we want to print. If we create
                            int arrSize = sizeof(arr3)/sizeof(int), it'll give size of whole array whether we have
                            filled it with only two values and rest are not used yet. */

    //Method - 2, Using Fill Function

    std::array<int, 10> arr4;  // for std::array
    std::fill(arr4.begin(), arr4.end(), 3);  // Initialize all elements to 5
    
    //printArray(arr4, 10); //Doesn't work with std array as it doesn't create array of integer type.

    for (int i=0; i<10; i++){
        cout<<arr4[i]<<" ";
    }
    cout<<endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'}; //If we assign more than one letter to each box, it'll throw erro
    cout<<ch[3];
}
