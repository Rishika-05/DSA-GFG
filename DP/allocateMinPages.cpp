#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int b, int e) {
    int s = 0;
    for (int i = b; i <= e; i++)
        s += arr[i];
    return s;
}

// recursive
// Time Complexity - O(exponential)
int minPages(int arr[], int n, int k) {
    if (k == 1)
        return sum(arr, 0, n - 1);
    if (n == 1)
        return arr[0];
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
        res = min(res, max(minPages(arr, i, k - 1), sum(arr, i, n - 1)));
    return res;
}

// DP
// Time complexit - O(n^3 k)
int minPagesDP(int arr[], int n, int k) {
    int dp[k + 1][n + 1];
    for (int i = 1; i <= n; i++)
        dp[1][i] = sum(arr, 0, i - 1);
    for (int i = 1; i <= k; i++)
        dp[i][1] = arr[0];
    for (int i = 2; i <= k; i++) {
        for (int j = 2; j <= n; j++) {
            int res = INT_MAX;
            for (int k = 1; k < j; k++)
                res = min(res, max(dp[i - 1][k], sum(arr, k, j - 1)));
            dp[i][j] = res;
        }
    }
    return dp[k][n];
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minPages(arr, k, n) << "  ";
    cout << minPagesDP(arr, k, n);
    return 0;
}