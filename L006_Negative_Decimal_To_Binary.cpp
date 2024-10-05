#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the negative number: ";
    cin >> n;

    if (n >= 0) {
        cout << "Please enter a negative number." << endl;
        return 1;
    }

    int m = -n;      // Get the positive version of the number
    int p = ~m + 1;  // Compute two's complement

    // Output binary representation directly
    cout << "Binary representation of " << n << " is: ";

    // Assuming 32-bit integer
    bool started = false;
    for (int i = 31; i >= 0; i--) {
        if ((p >> i) & 1) {
            cout << 1;
            started = true;
        } else if (started) {
            cout << 0;
        }
    }
    if (!started) {
        cout << "0"; // Handle the case where p is zero
    }
    cout << endl;

    return 0;
}
