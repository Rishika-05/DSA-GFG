#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    int n;
    cin >> n; // no. of operands + operator.
    string st[n];
    for (int i = 0; i < n; i++)
        cin >> st[i];

    for (int i = n - 1; i >= 0; i--)
    {
        string a = st[i];
        if (a != "+" && a != "-" && a != "*" && a != "/" && a != "^")
            s.push(a);
        else
        {
            stringstream ss(s.top());
            int x = 0;
            ss >> x;
            s.pop();
            stringstream sb(s.top());
            int y = 0;
            sb >> y;
            s.pop();
            if (a == "+")
            {
                long z = x + y;
                s.push(to_string(z));
            }
            else if (a == "-")
            {
                long z = x - y;
                stringstream ss;
                ss << z;
                string u;
                ss >> u;
                s.push(u);
            }
            else if (a == "*")
            {
                long z = x * y;
                stringstream ss;
                ss << z;
                string u;
                ss >> u;
                s.push(u);
            }
            else if (a == "/")
            {
                long z = y / x;
                s.push(to_string(z));
            }
            else
            {
                long z = pow(x, y);
                s.push(to_string(z));
            }
        }
    }
    cout << s.top();
}