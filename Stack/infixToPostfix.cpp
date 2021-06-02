#include<bits/stdc++.h>
using namespace std;

int prior(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else
    return -1;
}


string Postfix(string st)
{
    stack <char> s;
    string ans="";
    for(int i=0;i<st.length();i++)
    {
        char c = st[i];
        if(c>='a' && c<='z')
        ans+=c;
        else if(c=='(')
        s.push(c);
        else if(c==')')
        {
            while(!s.empty() && s.top()!='(')
            {
                ans+=s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while(!s.empty() && prior(c)<=prior(s.top()))
            {
                ans+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty())
    {
        ans+=s.top();
        s.pop();
    }
    return ans;
}

int main()
{
    string infix;
    cin>>infix;
    cout<<Postfix(infix);
    return 0;
}

