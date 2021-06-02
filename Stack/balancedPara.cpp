#include <bits/stdc++.h>
using namespace std;

string check(string st)
{
    stack<char> s;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '(' || st[i] == '{' || st[i] == '[')
            s.push(st[i]);
        else
        {
            if (s.empty())
                return "Not Balanced";
            if (st[i] == ')' && s.top() == '(')
                s.pop();
            else if (st[i] == '}' && s.top() == '{')
                s.pop();
            else if (st[i] == ']' && s.top() == '[')
                s.pop();
            else
                return "Not Balanced";
        }
    }
    if (s.empty())
        return "Balanced";
    return "Not Balanced";
}

int main()
{
    string st;
    cin >> st;
    cout << check(st);
}