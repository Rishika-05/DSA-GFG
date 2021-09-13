#include <bits/stdc++.h>
using namespace std;


bool isPali(string s, int l, int r){
    while(l <= r){
        if(s[l++] != s[r--])
            return false;
    }
    return true;
}

// Recursive
// Time Complexity -  O()
int palPart(string s, int i, int j){
    if(isPali(s, i, j))
        return 0;
    int res = INT_MAX;
    for (int k = i; k < j; k++)
        res = min(res, 1 + palPart(s, i, k) + palPart(s, k + 1, j));
    return res;
}

// DP
//Time Complexity - O(n^3)
int palPartDP(string s){
    int n = s.length();
    int dp[n][n];
    bool pal[n][n];
    for (int i = 0;i < n; i++){
        dp[i][i] = 0;
        pal[i][i] = true;
    }
    for (int gap = 1; gap < n; gap++){
        for (int i = 0; i < n - gap; i++){
            int j = i + gap;
            if(s[i] == s[j] && (pal[i + 1][j - 1] || gap == 1)){
                dp[i][j] = 0;
                pal[i][j] = true;
            }
            else{
                pal[i][j] = false;
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; k++)
                    dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[k + 1][j]);
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    string s;
    cin >> s;
    cout << palPart(s, 0, s.length() - 1) << " ";
    cout << palPartDP(s);
    return 0;
}