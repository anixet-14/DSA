#include<iostream>
using namespace std;

void update(int arr[], int size){ //Main function gives address of arr[] to update function in case of arrays instead of giving a copy.
    cout<<"Inside the update function : ";
    arr[0]=79;
    arr[1]=69;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Before Entering Update Function, Array is : ";
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    update(arr, 5);
    cout<<"After exiting Update Function, Array is : ";
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}