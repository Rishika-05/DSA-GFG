#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 4, n = 4;
    int arr[][n] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    if (m == 1)
        for (int i = 0; i < n; i++)
            cout << arr[0][i] << " ";
    else if (n == 1)
        for (int i = 0; i < n; i++)
            cout << arr[i][0] << " ";
    else
    {
        for (int i = 0; i < n; i++)
            cout << arr[0][i] << " ";
        for (int i = 1; i < m; i++)
            cout << arr[i][n - 1] << " ";
        for (int i = n - 2; i >= 0; i--)
            cout << arr[n - 1][i] << " ";
        for (int i = m - 2; i >= 1; i--)
            cout << arr[i][0] << " ";
    }
}