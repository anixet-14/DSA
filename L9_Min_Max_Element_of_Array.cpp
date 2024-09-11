#include<iostream>
using namespace std;

void min_max(int arr[], int size){
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i<size; i++){
        /*Method -1
        if (arr[i]>max){
            maxi = arr[i];
        }
        if (arr[i]<min){
            mini = arr[i];
        }
         */
        //Method - 2
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    cout<<"Minimum : "<<mini<<" Maximum : "<<maxi<<endl;
}



int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    //int arr[size]; //Usually using variable for size is bad practice, it's better to initialize with more than required number of elements.
    if (size>0){
            int arr[100];
    cout<<"Type "<<size<<" values "<<endl;

    for(int i = 0; i<size; i++ ){
        cin>>arr[i];
    }
    cout<<"Entered array is : ";
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    min_max(arr, size);
    }
    else {
        cout<<"Type valid number of elements!"<<endl;
    }
}
