#include <bits/stdc++.h>
using namespace std;

// Recursion
int minCoins(int coins[], int n, int val) {
    if (val == 0) return 0;
    int res = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (coins[i] <= val) {
            int sres = minCoins(coins, n, val - coins[i]);
            if (sres != INT_MAX)
                res = min(res, sres + 1);
        }
    }
    return res;
}

// Tabulation
int minCoinsDp(int coins[], int n, int val) {
    int dp[val + 1] = {INT_MAX};
    dp[0] = 0;
    for (int i = 1; i <= val; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                int sres = dp[i - coins[i]];
                if (sres != INT_MAX)
                    dp[i] = min(dp[i], sres + 1);
            }
        }
    }
    return dp[val];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int val, n;
        cin >> n >> val;
        int coins[n];
        for (int i = 0; i < n; i++)
            cin >> coins[i];
        cout << minCoins(coins, n, val);
        cout << "\n";
    }
    return 0;
}