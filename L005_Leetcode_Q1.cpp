//Subtract the product and sum of digits of an Integer
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    int sum = 0;
    int mul = 1;
    while (n!=0){
        int i = n%10; //To retrieve digits
        sum+=i; //Adding retrived digit to sum
        mul*=i; //Multiplying retrived digit to mul
        n = n/10; //Removing the retrived digit from the number.
    }
    cout<<(mul-sum)<<endl;
}
