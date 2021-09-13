#include <bits/stdc++.h>
using namespace std;

// Naive
int minJumps(vector<int> v, int n) {
    int res = INT_MAX;
    for (int i = 0; i <= n - 2; i++) {
        if (i + v[i] >= n - 1) {
            int sres = minJumpsDP(v, i + 1);
            if (sres != INT_MAX)
                res = min(res, sres + 1);
        }
    }
    return res;
}

// DP
int minJumpsDP(vector<int> v, int n) {
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[j] + j >= i) {
                if (dp[j] != INT_MAX)
                    dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }
    return dp[n - 1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> jumps(n);
        for (int i = 0; i < n; i++)
            cin >> jumps[i];
        cout << minJumps(jumps, n);
        cout << "\n";
    }
    return 0;
}