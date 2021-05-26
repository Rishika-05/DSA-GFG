#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
    return 1;
    return n*fact(n-1);
}

int solve(string s)
{
    int rank=1;
    int l=s.length();
    vector<int> count(256,0);
    int val=fact(l);
    //cout<<val;
    for(int i=0;i<l;i++)
    count[s[i]]++;
    for(int i=1;i<256;i++)
    count[i]=count[i]+count[i-1];
    for(int i=0;i<l;i++)
    {
        val=val/(l-i);
        rank=rank+(val*count[s[i]-1]);
        for(int j=s[i];j<256;j++)
        count[j]--;
    }

    return rank;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";

}