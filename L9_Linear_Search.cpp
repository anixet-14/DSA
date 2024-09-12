/*Linear search is a simple search algorithm that checks each element of a list one by
one  until the desired element is found or the list ends. Its time complexity is 𝑂(𝑛)*/

#include<iostream>
using namespace std;

void LinearSearch(int arr[], int size, int key){
    bool isPresent = false;
    int index;
    for (int i = 0; i< size; i++){
        if (arr[i]==key){
            isPresent = true;
            index = i;
        }
    }
    if (isPresent){
        cout<<"Element "<<key<<" found at Index "<<index<<endl;
    }
    else {
        cout<<"Element not found in the array."<<endl;
    }
}

int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int key = 10;
    LinearSearch(arr, 10, key);
}