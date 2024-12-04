#include <iostream>
#include <string>
using namespace std;

// Recursive function to generate subsequences
void generateSubsequences(string input, string output, int index) {
    // Base case: If we've processed all characters
    if (index == input.size()) {
        cout << output << endl;  // Print the current subsequence
        return;
    }

    // Exclude the current character
    generateSubsequences(input, output, index + 1);

    // Include the current character
    output.push_back(input[index]);
    generateSubsequences(input, output, index + 1);
}

int main() {
    string input = "abc";
    string output = "";
    cout << "Subsequences of \"" << input << "\":" << endl;
    generateSubsequences(input, output, 0);
    return 0;
}
