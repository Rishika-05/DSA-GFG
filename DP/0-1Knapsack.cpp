#include <bits/stdc++.h>
using namespace std;

// Naive
int knapsack(int w, vector<int> wt, vector<int> val, int n) {
    if (n == 0 || w == 0) return 0;
    if (wt[n - 1] > w)
        return knapsack(w, wt, val, n - 1);
    else
        return max(knapsack(w, wt, val, n - 1), val[n - 1] + knapsack(w - wt[n - 1], wt, val, n - 1));
}

// DP
int knapsackDP(int w, vector<int> wt, vector<int> val, int n) {
    int dp[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= w; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (wt[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
        }
    }
    return dp[n][w];
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> wt(n), val(n);
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];
    cout << knapsack(w, wt, val, n) << endl;
    cout << knapsackDP(w, wt, val, n);
    return 0;
}