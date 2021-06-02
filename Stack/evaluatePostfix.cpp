#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    int n;
    cin >> n; // no. of operands + operator.
    string a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
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
                long z = y - x;
                s.push(to_string(z));
            }
            else if (a == "*")
            {
                long z = x * y;
                s.push(to_string(z));
            }
            else if (a == "/")
            {
                long z = y / x;
                s.push(to_string(z));
            }
            else
            {
                long z = pow(y, x);
                s.push(to_string(z));
            }
        }
    }
    cout << s.top();
}