#include <bits/stdc++.h>
using namespace std;

// recursive
// Time Complexity   - O(2^n)
int maxSum(int arr[], int n) {
    if (n == 1)
        return arr[0];
    if (n == 2)
        return max(arr[0], arr[1]);
    return max(maxSum(arr, n - 1), maxSum(arr, n - 2) + arr[n - 1]);
}

// DP
// Time Complexity - O(n)
// Space complexity - O(n)
int maxSumDP(int arr[], int n) {
    int dp[n + 1];
    dp[1] = arr[0];
    dp[2] = max(arr[0], arr[1]);
    for (int i = 3; i <= n; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i - 1]);
    return dp[n];
}

// DP - space opt
// Time Complexity - O(n)
// Space complexity - O(1)
int maxSumSO(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int prev, pprev, ans;
    pprev = arr[0];
    prev = max(arr[0], arr[1]);
    ans = prev;
    for (int i = 3; i <= n; i++) {
        ans = max(prev, pprev + arr[i - 1]);
        pprev = prev;
        prev = ans;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxSum(arr, n) << " " << maxSumDP(arr, n) << " " << maxSumSO(arr, n);
    return 0;
}