#include <bits/stdc++.h>
using namespace std;

int prior(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return 0;
}

string infixToPostfix(string s)
{
    s = '(' + s + ')';
    stack<char> c;
    string o;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
            o += s[i];
        else if (s[i] == '(')
            c.push('(');
        else if (s[i] == ')')
        {
            while (c.top() != '(')
            {
                o += c.top();
                c.pop();
            }
            c.pop();
        }
        else
        {
            if (s[i] == '^')
            {
                while (prior(s[i]) <= prior(c.top()))
                {
                    o += c.top();
                    c.pop();
                }
            }
            else
            {
                while (prior(s[i]) <= prior(c.top()))
                {
                    o += c.top();
                    c.pop();
                }
            }
            c.push(s[i]);
        }
    }
    return o;
}

int main()
{
    string st;
    cin >> st;
    string ans;
    reverse(st.begin(), st.end());
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '(')
        {
            st[i] = ')';
            i++;
        }
        else if (st[i] == ')')
        {
            st[i] = '(';
            i++;
        }
    }
    ans = infixToPostfix(st);
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}