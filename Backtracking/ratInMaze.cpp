#include <bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, vector<vector<int>> &maze) {
    return (i < maze.size() && j < maze.size() && maze[i][j]);
}

bool solveMaze(int i, int j, vector<vector<int>> &maze, vector<vector<int>> &sol) {
    int n = maze.size();
    if (i == n - 1 && j == n - 1) {
        sol[i][j] = 1;
        return true;
    }
    if (isValid(i, j, maze)) {
        sol[i][j] = 1;
        if (solveMaze(i + 1, j, maze, sol))
            return true;
        else if (solveMaze(i, j + 1, maze, sol))
            return true;
        sol[i][j] = 0;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<vector<int>> maze(n, v);
    vector<vector<int>> sol(n, v);
    for (int i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            cin >> maze[i][j];
    if (solveMaze(0, 0, maze, sol)) {
        cout << "yes" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "no" << endl;
    }
    return 0;
}