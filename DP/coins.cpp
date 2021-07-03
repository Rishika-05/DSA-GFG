#include <bits/stdc++.h>
using namespace std;

// infinte suppy of every coin
// Time complexity : O(n x sum)
int getCountDP(int arr[], int n, int sum) {
    int dp[sum + 1][n + 1];  //dp[i][j]: No. of combinations we can get with sum i and coins from 1 to j.
    for (int i = 0; i <= n; i++)
        dp[0][i] = 1;
    for (int i = 1; i <= sum; i++)
        dp[i][0] = 0;
    for(int i=0;i<=sum;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j] = dp[i][j-1];
            if(arr[j-1] <= i)
            dp[i][j] +=dp[i-arr[j-1]][j];
        }
    }
    return dp[sum][n];
}

int getCount(int arr[], int n, int sum){
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;
    int res = getCount(arr, n - 1, sum);
    if (arr[n - 1] <= sum)
        res += getCount(arr, n, sum - arr[n - 1]);
    return res;
}

int main() {
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << getCountDP(arr, n, sum);
    return 0;
}
