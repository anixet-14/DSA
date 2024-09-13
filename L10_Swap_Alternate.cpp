#include<iostream>
using namespace std;

void alternateSwap(int arr[], int size){
    for (int i = 0; i<size; i=i+2){
        if(i+1<size){ //To stop the odd array to face any error or issue
            swap(arr[i], arr[i+1]);
        }
        
    }
    for (int i=0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    alternateSwap(arr, 7);
}