//Given an input integer n, return true if it's a power of two.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isTrue = false;
//Naive Soltution 
/*    if (n==1){
        cout<<"Power of 2"<<endl;
    }
    else {
        while (n!=1){
            if (n%2!=0){
                isTrue = false;
                break;
            }
            n = n/2;
            isTrue = true;
        }
    }
    if (isTrue){
        cout<<"Power of 2"<<endl;
    } else{
        cout<<"Not Power of 2"<<endl;
    }
}
*/
    for (int i = 0; i<=30; i++){
        int ans = pow(2, i);
        if (ans==n){
            isTrue = true;
            break;
        }
    
    }

    if (isTrue){
        cout<<"Power of 2"<<endl;
    } else{
        cout<<"Not Power of 2"<<endl;
    }
    //More optimized solutions exist though!
}
