#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        string s,ans;
        cin>>s;
        int c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            c0++;
        }
        if(c0==0)
        cout<<"DRAW"<<endl;
        else if(c0%2==0 || c0==1 || c0==2)
        cout<<"BOB"<<"\n";
        else if(c0%2==1)
        cout<<"ALICE"<<endl;
        t--;
    }
    return 0;
}