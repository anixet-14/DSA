#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    // Handle negative and non-prime cases for 0 and 1
    if (n < 0) {
        cout << "Please Enter a Positive Integer" << endl;
    }
    else if (n == 0 || n == 1) {
        cout << n << " is not a prime number" << endl;
    }
    else if (n == 2) {
        cout << n << " is a prime number" << endl;
    }
    else {
        int i = 2;
        while (i <= n / 2) {
            if (n % i == 0) {
                // If a divisor is found, n is not prime
                cout << n << " is not a prime number" << endl;
                break;
            }
            i++;
        }

        // If no divisor was found, n is prime
        if (i > n / 2) {
            cout << n << " is a prime number" << endl;
        }
    }

    return 0;
}
