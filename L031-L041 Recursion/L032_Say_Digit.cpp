//Input: 412, Output: Four One Two
#include <iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    if (n == 0) {
        return;
    }
    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);
    cout << arr[digit] << " ";
}

int main() {
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int number = 412;
    if (number == 0) {
        cout << arr[0];  // Handle case when input is 0
    } else {
        sayDigit(number, arr);
    }
    return 0;
}
