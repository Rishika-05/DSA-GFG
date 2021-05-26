#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t>0)
    {
        long long  n,ans;
        cin>>n;
        int d=(int)log2(n)+1;
        ans=pow(2,d-1)-1;
        cout<<ans<<"\n";
        t--;
    }
}