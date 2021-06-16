#include <bits/stdc++.h>
using namespace std;

// comt int r = 3;
// comt int c = 2;

void print(int mat[][2], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << mat[i][j] << " ";
    }
}

void printmat(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{
    int m = 3, n = 2;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
        arr[i] = new int[n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j;
        }
    }
    printmat(arr, m, n);
    return 0;
}