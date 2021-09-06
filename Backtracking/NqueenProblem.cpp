#include <bits/stdc++.h>
using namespace std;

bool isValid(int row, int col, vector<vector<int>> &board) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (int i = row, j = col; j >= 0 && i < board.size(); i++, j--)
        if (board[i][j])
            return false;
    return true;
}

bool solveRec(vector<vector<int>> &board, int col) {
    int n = board.size();
    if (col == n)
        return true;
    for (int i = 0; i < n; i++) {
        if (isValid(i, col, board)) {
            board[i][col] = 1;
            if (solveRec(board, col + 1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<vector<int>> board(n, v);
    if (solveRec(board, 0)) {
        cout << "yes" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    }else{
        cout << "no" << endl;
    }
    return 0;
}