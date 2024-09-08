//Complement of Base 10 Integer, basically for example number 5, which is binary as 101, it's complement is 010, which is 2 in base-10, so 2 is ans.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;  // Input the base-10 integer

    // Special case: if n is 0, its complement is 1
    if (n == 0){
        cout << 1 << endl;
    }
    else {
        int m = n;  // Copy the input number into a new variable 'm'
        int mask = 0;  // This will be used to create the mask with all bits set to 1
        
        // Create a mask with the same number of bits as 'n'
        while (m != 0){
            mask = (mask << 1) | 1;  // Shift mask left by 1 and set the least significant bit to 1
            m = m >> 1;  // Right shift 'm' to process the next bit
        }

        // Calculate the complement of 'n' and apply the mask
        int ans = (~n) & mask;  // The bitwise NOT (~n) flips the bits, and the mask limits it to the original number's bit length
        cout << ans << endl;  // Output the result
    }
}
