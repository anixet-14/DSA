#include<iostream>
using namespace std;
#include<vector>


void merge(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i=0; 
    int j = 0;
    int k = 0;
    while( i <m && j<n){
        if (arr1[i]<arr2[j]){
            // arr3[k]=arr1[i];
            // i++;
            // k++;
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++]=arr2[j++];
        }
    }
    
    while(i<m){
            arr3[k++]=arr1[i++];
    }
    while(j<n){
        arr3[k++]=arr2[j++];
    }

    for (int l = 0; l<k; l++){
        cout<<arr3[l]<<" ";
    }

}

int main(){

    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[100];

    merge(arr1, 5, arr2, 3, arr3);

    cout<<endl;
}