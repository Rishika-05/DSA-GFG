#include <bits/stdc++.h>
using namespace std;

int cutRod(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(cutRod(n - a, a, b, c), max(cutRod(n - b, a, b, c), cutRod(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        cout << cutRod(n, a, b, c) << endl;
        t--;
    }
    return 0;
}