#include <bits/stdc++.h>
using namespace std;

// A string with n characters can have 2^n subsequencces.
vector<int> v(100, -1);
vector<vector<int>> memo(100, v);

//Time Complexity - O(2^n)
int lcsNaive(string s1, string s2, int m, int n) {
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] == s2[n - 1])
        return 1 + lcsNaive(s1, s2, m - 1, n - 1);
    else
        return max(lcsNaive(s1, s2, m - 1, n), lcsNaive(s1, s2, m, n - 1));
}

// Memonization
// Time Complexity - Theta(m x n)
int lcs(string s1, string s2, int m, int n) {
    if (memo[m][n] != -1)
        return memo[m][n];
    if (m == 0 || n == 0)
        memo[m][n] = 0;
    else {
        if (s1[m - 1] == s2[n - 1])
            memo[m][n] = 1 + lcs(s1, s2, m - 1, n - 1);
        else
            memo[m][n] = max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
    }
    return memo[m][n];
}

int main() {
    int n, m;
    cin >> m >> n;
    string s1, s2;
    cin >> s1 >> s2;
    cout << lcs(s1, s2, m, n);
    return 0;
}