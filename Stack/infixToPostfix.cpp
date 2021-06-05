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
    else
        return -1;
}

string Postfix(string s)
{
    stack<char> c;
    string o = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) || isdigit(s[i]))
            o += s[i];
        else
        {
            if (c.empty())
                c.push(s[i]);
            else
            {
                if (s[i] == '(')
                {
                    c.push('(');
                    continue;
                }
                if (s[i] == ')')
                {
                    while (!c.empty())
                    {
                        if (c.top() == '(')
                        {
                            c.pop();
                            break;
                        }
                        o += c.top();
                        c.pop();
                    }
                    continue;
                }
                if (prior(s[i]) > prior(c.top()))
                    c.push(s[i]);
                else
                {
                    while (!c.empty() && prior(s[i]) <= prior(c.top()))
                    {
                        if (c.top() == '(')
                            break;
                        o += c.top();
                        c.pop();
                    }
                    c.push(s[i]);
                }
            }
        }
    }
    while (!c.empty())
    {
        o += c.top();
        c.pop();
    }
    return o;
}

int main()
{
    string infix;
    cin >> infix;
    cout << Postfix(infix);
    return 0;
}
