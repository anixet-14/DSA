//Task is to return all the permutations of string in lexicographically increasing order.
#include <iostream>
#include <vector>
using namespace std;

// Function to generate all permutations of the input vector
void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    // Base case: if the current index is the end of the array, store the permutation
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    // Recursively swap elements to generate all permutations
    for (int j = index; j < nums.size(); j++) {
        swap(nums[index], nums[j]);      // Swap to place element at the current position
        solve(nums, ans, index + 1);     // Recur for the next index
        swap(nums[index], nums[j]);      // Backtrack to restore the original order
    }
}

// Function to generate permutations of the input vector
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;  // Corrected type
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main() {
    // Example test case
    vector<int> input = {1, 2, 3};
    vector<vector<int>> result = permute(input);

    // Print the permutations
    cout << "Permutations of [1, 2, 3]:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
