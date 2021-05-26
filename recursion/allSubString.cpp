#include <bits/stdc++.h>
using namespace std;

void Substr(string s, string curr = "", int idx = 0)
{
    if (idx == s.length())
    {
        cout << curr << " ";
        return;
    }
    Substr(s, curr, idx + 1);
    Substr(s, curr + s[idx], idx + 1);
}

int main()
{
    string str;
    cin >> str;
    Substr(str);
    return 0;
}