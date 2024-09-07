#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i =1;
    while (i<=n){
        int j = 1;
        int k = n-i;

        while (k>0){
            cout<<" ";
            k--;
        }
        while (j<=i){
            cout<<j;
            j++;
           
        }

        int l = i - 1;
        while (l > 0) {
            cout << l;
            l--;
        }
        cout<<endl;
        i++;

    }
}