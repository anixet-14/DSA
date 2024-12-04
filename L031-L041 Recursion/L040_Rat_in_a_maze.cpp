#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

// Function to check if the current position is valid and safe
bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& m) {
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) {
        return true;
    }
    return false;
}

// Recursive function to solve the maze and find all possible paths
void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>>& visited, string path) {
    // Base Case: If destination is reached, store the path and return
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    visited[x][y] = 1;

    // Four possible moves: Down, Left, Right, Up

    // Move Down (D)
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Move Left (L)
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Move Right (R)
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Move Up (U)
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m)) {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Backtrack and mark the cell as unvisited
    visited[x][y] = 0;
}

// Function to find all paths from top-left to bottom-right in the maze
vector<string> findPath(vector<vector<int>>& m, int n) {
    vector<string> ans;

    if (m[0][0] == 0) {  // If the starting cell is blocked
        return ans;
    }

    vector<vector<int>> visited(n, vector<int>(n, 0));  // Initialize visited matrix
    string path = "";

    // Start the recursive exploration from the top-left corner (0, 0)
    solve(m, n, ans, 0, 0, visited, path);

    // Sort the paths lexicographically
    sort(ans.begin(), ans.end());
    return ans;
}

// Main function with a sample maze input
int main() {
    // Example maze (4x4 grid)
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int n = maze.size();  // Size of the maze
    vector<string> result = findPath(maze, n);  // Find all possible paths

    // Print the result
    if (result.empty()) {
        cout << "No path found." << endl;
    } else {
        cout << "Paths found:" << endl;
        for (string path : result) {
            cout << path << endl;
        }
    }

    return 0;
}
