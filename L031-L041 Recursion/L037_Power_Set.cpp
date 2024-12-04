#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }
    // Exclude call
    solve(nums, output, index + 1, ans);

    // Include call
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> powerSet(vector<int>& arr) {
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(arr, output, index, ans); // Changed from nums to arr
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result = powerSet(arr);

    // Printing the subsets
    cout << "Power set:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
