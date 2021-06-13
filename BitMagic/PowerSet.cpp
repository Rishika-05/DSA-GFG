#include <bits/stdc++.h>
using namespace std;

void powerSet(string s)
{
    int n = s.length();
    cout << n;
    int powSize = pow(2, n);
    for (int ctr = 0; ctr < powSize; ctr++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((ctr & (1 << j)) != 0)
                cout << s[j];
        }
        cout << " ";
    }
}

int main()
{
    string s = "abcd";
    powerSet(s);
    return 0;
}