#include <bits/stdc++.h>
using namespace std;

bool check(long n, long d)
{
    while (n > 0)
    {
        if (n % 10 == d)
            return true;
        n /= 10;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, d;
        cin >> n >> d;
        long ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            int f = 1;
            if (d == 1)
                cout << "YES\n";
            else
            {
                if (check(ar[i], d))
                    cout << "YES\n";
                else
                {
                    for (int j = d; j < ar[i]; j += d)
                    {
                        if (check(ar[i] - j, d))
                        {
                            cout << "YES\n";
                            f = 0;
                            break;
                        }
                    }
                    if (f == 1)
                        cout << "NO\n";
                }
            }
        }
        t--;
    }
}