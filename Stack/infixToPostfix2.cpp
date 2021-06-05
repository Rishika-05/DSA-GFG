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
    string s;
    cin >> s;
    cout << infixToPostfix(s);
}