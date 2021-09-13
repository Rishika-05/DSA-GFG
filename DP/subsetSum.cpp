#include <bits/stdc++.h>
using namespace std;

// recursive
// Time complexity - O(2^n) 
int countSubset(int arr[], int n, int sum){
    if(n == 0)
        return sum == 0 ? 1 : 0;
    return countSubset(arr, n - 1, sum) + countSubset(arr, n - 1, sum - arr[n - 1]);
}

// DP
// Time complexity - O(n * sum)
// Space  complexity - O(n * sum)
int countSubsetDP(int arr[], int n, int sum){
    int dp[n + 1][sum + 1];
    for (int i = 0; i <= sum; i++)
        dp[0][i] = 0;
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= sum; j++){
            if(j < arr[i - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
        }
    }
    return dp[n][sum];
}
 

int main() {
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << countSubset(arr, n, sum) << " " << countSubsetDP(arr, n, sum);
    return 0;
}