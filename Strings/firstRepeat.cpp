#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=INT_MAX;
    int arr[256];
    for(int i=0;i<256;i++)
    {
        arr[i]=-1;
    }
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]]==-1)
        arr[s[i]]=i;
        else
        ans=min(ans,arr[s[i]]);
    }
    if(ans==INT_MAX)
    cout<<"No repeating caracter"<<"\n";
    else
    cout<<ans<<"\n";
    return 0;
}