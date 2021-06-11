#include <bits/stdc++.h>
using namespace std;

bool isCyclicPermutation(string s1, string s2)
{
    string a = s1 + s1;
    return (a.find(s2) != string::npos);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << isCyclicPermutation(s1, s2);
    return 0;
}