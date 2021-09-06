#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int r, int c, vector<vector<int>> &board) {
    int n = board.size();
    for (int i = 0; i < n; i++)
        if (board[r][i] == x || board[i][c] == x)
            return false;
    int sq = sqrt(n);
    int sr = r - r % sq;
    int sc = c - c % sq;
    for (int i = 0; i < sq; i++)
        for (int j = 0; j < sq; j++)
            if (board[i + sr][j + sc] == x)
                return false;
    return true;
}

bool suduko(vector<vector<int>> &board) {
    int n = board.size();
    int r = -1, c = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0) {
                r = i;
                c = j;
                break;
            }
        }
    }
    if (r == -1 && c == -1)
        return true;
    for (int x = 1; x <= n; x++) {
        if (isValid(x, r, c, board)) {
            board[r][c] = x;
            if (suduko(board))
                return true;
            board[r][c] = 0;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    vector<vector<int>> board(n, v);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    suduko(board);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}