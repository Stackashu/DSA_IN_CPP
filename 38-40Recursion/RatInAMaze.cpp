#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& maze) {
    // Check bounds, not visited and cell is open
    if (x >= 0 && x < n && y >= 0 && y < n &&
        visited[x][y] == 0 && maze[x][y] == 1) {
        return true;
    }
    return false;
}

void solve(vector<vector<int>>& maze, int n, vector<string>& ans,
           int x, int y, string path, vector<vector<int>>& visited) {
    if (x == n-1 && y == n-1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // D, L, R, U
    int dx[] = {1, 0, 0, -1};
    int dy[] = {0, -1, 1, 0};
    char direction[] = {'D', 'L', 'R', 'U'};

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (isSafe(newX, newY, n, visited, maze)) {
            solve(maze, n, ans, newX, newY, path + direction[i], visited);
        }
    }

    visited[x][y] = 0;
}

vector<string> ratInMaze(vector<vector<int>>& maze) {
    vector<string> ans;
    int n = maze.size();
    if (n == 0 || maze[0][0] == 0 || maze[n-1][n-1] == 0)
        return ans;

    vector<vector<int>> visited(n, vector<int>(n, 0));
    solve(maze, n, ans, 0, 0, "", visited);
    sort(ans.begin(), ans.end());
    return ans;
}