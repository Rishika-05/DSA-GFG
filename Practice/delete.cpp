#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int x;
        cin>>x;
        ll a[x];
        for(int i=0;i<x;i++){
        cin>>a[i];
        }
        sort(a,a+x);
        ll dif=INT_MAX;
        ll ans=1;
        for(int i=0;i<x-1;i++)
        {
            dif=min(dif,abs(a[i+1]-a[i]));
            if(a[i+1]<=dif)
            ans++;
        }
        cout<<ans<<'\n';
        // //ll mn=INT_MAX;
        // ll dif=INT_MAX;
        // //ll mx=INT_MIN;
        // //ll mn2,mx2;
        // vector <ll> p;
        // vector <ll> n;
        // ll ans=0;
        // int f=0;
        // for(int i=0;i<x;i++)
        // {
        //     cin>>a[i];
        //     if(a[i]<0)
        //     {
        //         n.push_back(a[i]);
        //         //mx=max(mx,a[i]);
        //     }
        //     if(a[i]>0)
        //     {
        //         p.push_back(a[i]);
        //         //mn=min(mn,a[i]);
        //     }
        //     if(a[i]==0){
        //     ans++;
        //     f=1;
        //     }
        // }
        // if(n.size()>1){
        // sort(n.begin(),n.end());
        // 
        // }
        // else{
        //     if(n.size()==1)
        //     dif=abs(n[0]);
        // }
        // if(p.size()>0)
        // sort(p.begin(),p.end());

        // ans+=n.size();
        // for(int i=0;i<p.size();i++)
        // {
        //     if(p[i]<=dif)
        //     ans++;
        //     else
        //     i=p.size();
        // }
        // if(n.size()==0 && p.size()>0)
        // cout<<ans+1<<"\n";
        // else
        // cout<<ans<<"\n";

        t--;
    }
}