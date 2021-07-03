#include <bits/stdc++.h>
using namespace std;

// Memoization --------------------------------------
// Time Complexity - Theta(n)

vector<int> memo(1000, -1);

int fib(int x) {
    if(memo[x] == -1) {
        if(x <= 1)
        memo[x] = x;
        else
        memo[x] = fib(x-1)+fib(x-2);
    }
    return memo[x];
}

// Tabulation------------------------------------------
// Time Complexity - Theta(n)

int fibo(int y) {
    int f[y+1];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2;i <=y ; i++)
    f[i] = f[i-1]+f[i-2];
    return f[y];
}

int main() {
    int n = 8;
    //cin >> n;
    cout << fib(n) << "\n";
    cout << fibo(n);
    return 0;
}
