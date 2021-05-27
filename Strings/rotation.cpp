#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;
    string a = s1 + s1;
    //string b=s2+s2;
    return (a.find(s2) != string::npos); //if string is not found it gives string::npos.
    // return false;
    // return true;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << check(s1, s2);
    return 0;
}