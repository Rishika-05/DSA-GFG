#include <bits/stdc++.h>
using namespace std;

// Recursive 
int eggDrop(int e, int n) {
    if (n == 0 || n == 1)
        return n;
    if (e == 1)
        return n;
    int mn = INT_MAX;
    for (int x = 1; x <= n; x++)
        mn = min(mn, max(eggDrop(e - 1, x - 1), eggDrop(e, n - x)));
    return mn + 1;
}

// DP 
// Time Complexity -  O(f^2e)
// Space complexity - O(fe)

int eggDropDP(int e, int f) {
    int dp[f + 1][e + 1];
    for (int i = 1; i <= e; i++) {
        dp[1][i] = 1;
        dp[0][i] = 0;
    }
    for (int i = 1; i <= f; i++)
        dp[i][1] = i;
    for (int i = 2; i <= f; i++) {
        for (int j = 2; j <= e; j++) {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= i; x++)
                dp[i][j] = min(dp[i][j], 1 + max(dp[x - 1][j - 1], dp[i - x][j]));
        }
    }
    return dp[f][e];
}

int main() {
    int e, n;
    cin >> e >> n;
    cout << eggDrop(e, n) << endl;
    cout << eggDropDP(e, n) << endl;
    return 0;
}