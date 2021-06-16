#include <bits/stdc++.h>
using namespace std;

void search(int mat[][4], int m, int x)
{
    int i = 0, j = 4 - 1;
    while (i < m && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << "Found (" << i << "," << j << ")";
            return;
        }
        else if (mat[i][j] > x)
            j--;
        else
            i++;
    }
    cout << "Not Found.";
}

int main()
{
    int m = 4, n = 4;
    int mat[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    search(mat, m, 33);
}