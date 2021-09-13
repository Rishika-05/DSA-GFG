#include <bits/stdc++.h>
using namespace std;

int mChain(int arr[], int i, int j) {
    if (i + 1 == j)
        return 0;
    int res = INT_MAX;
    for (int k = i + 1; k < j; k++) {
        res = min(res, mChain(arr, i, k) + mChain(arr, k, j) + arr[i] * arr[k] * arr[j]);
    }
    return res;
}

// DP
// Time Complexity - ()
int mChainDP(int arr[], int n) {
    int dp[n][n];
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;
    for (int gap = 2; gap < n; gap++) {
        for (int i = 1; i + gap <= n; i++) {
            int j = i + gap - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + arr[i - 1] * arr[k] * arr[j]);
            }
        }
    }
    return dp[1][n - 1];
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << mChain(arr, 0, n - 1) << " ";
    cout << mChainDP(arr, n);
    return 0;
}