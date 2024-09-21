#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the integer square root of a given number n
int sqrtInt(int n) {
    // Initialize the start and end of the search range
    int start = 0;
    int end = n;

    // Variable to store the result
    int ans = 0;

    // Binary search loop to find the integer square root
    while (start <= end) {
        // Calculate the middle index
        long long int mid = start + (end - start) / 2;

        // Handle cases for n = 0 and n = 1 directly
        if (n < 2) {
            return n;  // If n is 0 or 1, return n as the square root
        }

        // Check if mid is the perfect square root
        if (mid * mid == n) {
            ans = mid;  // Update answer if mid squared equals n
            return ans;  // Return the perfect square root
        }

        // If mid squared is less than n, search in the right half
        if (mid * mid < n) {
            ans = mid;  // Update ans to mid, since it’s a candidate
            start = mid + 1;  // Move the start pointer to the right
        } else {
            // If mid squared is greater than n, search in the left half
            end = mid - 1;  // Move the end pointer to the left
        }
    }

    // Return the largest integer whose square is less than or equal to n
    return ans;
}

double morePrecise(int n, int precision, int tempSol){
    double factor =1;
    double ans = tempSol;
    for (int i = 0; i<precision; i++){
        factor = factor/10;
        for (double j=ans; j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;

}

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;  // Input the number for which square root is to be calculated

    double temp_result = sqrtInt(n);  // Call the mySqrt function

    cout << "The integer square root is: " << temp_result << endl;  // Output the result
    cout<<"More precise answer is: "<<morePrecise(n, 3, temp_result);

    return 0;
}
