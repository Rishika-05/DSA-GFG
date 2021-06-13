#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    n = 5, k = 3;

    if (n & (1 << (k - 1)) != 0)
        cout << "Yes\n";
    else
        cout << "No\n";

    if (((n >> (k - 1)) & 1) == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
}