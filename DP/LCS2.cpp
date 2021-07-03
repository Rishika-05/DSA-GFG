#include <bits/stdc++.h>
using namespace std;

// Tabulation
// Time complexity - θ(m x n)
int lcs(string s1, string s2, int m, int n) {
    int dp[m+1][n+1];
    memset(dp, -1, sizeof(dp));
    for(int i = 0;i<=m;i++)
        dp[i][0] = 0;
    for(int i = 0;i<=n;i++)
        dp[0][i] = 0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}

int main() {
    int m,n;
    string s1, s2;
    cin >> m >> n >> s1 >> s2;
    cout << lcs(s1,s2,m,n);
    return 0;
}
