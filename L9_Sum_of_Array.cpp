#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
   
    if (size>0){
        int arr[100];
        cout<<"Type "<<size<<" values "<<endl;

        for(int i = 0; i<size; i++ ){
            cin>>arr[i];
        }
        int sum = 0;
        cout<<"Entered array is : ";
        for(int i = 0; i< size; i++){
            cout<<arr[i]<<" ";
            sum = sum + arr[i];
        }
        cout<<endl;
        cout<<"Sum of element is : "<<sum<<endl;

    }


}

