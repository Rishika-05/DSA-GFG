#include <bits/stdc++.h>
using namespace std;

// time Complexity - O(n^2)
// space complexity - O(n)

// nth Catalan no.
//     res(n) = 1/(n + 1) *  2n(C)n

int countBST(int n) {
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - j - 1];
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << countBST(n) << endl;
    return 0;
}