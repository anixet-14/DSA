// if the array A[] = {4, 5, 1}, then the integer represented
//by this array is 451 and array B[] = {3, 4, 5} so the sum 
//will be 451 + 345 = 796. So you need to return {7, 9, 6}.

#include<iostream>
#include<vector>
using namespace std;

// Function to reverse the result vector
vector<int> reverse(vector<int>& v){
    int s = 0;
    int e = v.size() - 1;
    while (s < e){
        swap(v[s++], v[e--]);
    }
    return v;
}

// Function to add two arrays that represent integers
vector<int> arraySum(vector<int>& a, int n, vector<int>& b, int m){
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    // Add corresponding digits from the end
    while (i >= 0 && j >= 0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }

    // If there are remaining digits in array `a`
    while (i >= 0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // If there are remaining digits in array `b`
    while (j >= 0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // If there is still a carry left
    while (carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // Reverse the result to get the correct order
    reverse(ans);

    return ans;
}

int main(){
    // Example input
    vector<int> arr1 = {4, 5, 1}; // Represents 451
    vector<int> arr2 = {3, 4, 5}; // Represents 345

    // Call the function
    vector<int> result = arraySum(arr1, arr1.size(), arr2, arr2.size());

    // Output the result
    for (auto i : result){
        cout << i << " "; // Should print 7 9 6
    }

    return 0;
}
