#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int mn = INT_MAX;
        int mx = INT_MIN;
        int c = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(v[i], mx);
            mn = min(mn, v[i]);
            if (i > 0)
            {
                if (v[i] > v[i - 1])
                    c++;
            }
        }
        if (c == n - 1)
            cout << "0"
                 << "\n";
        else if (v[0] == mx && v[n - 1] == mn)
            cout << "3"
                 << "\n";
        else if (v[0] == mn || v[n-1] == mx)
            cout << "1"
                 << "\n";
        else
            cout << "2"
                 << "\n";
        t--;
    }
    return 0;
}