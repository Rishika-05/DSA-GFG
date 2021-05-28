#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        if(n<=8)
        {
            cout<<n+1<<"\n";
        }
        else{
            cout<<(n%9)+1<<"\n";
        }
        t--;
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[12];
    for(int i=0;i<12;i++)
    arr[i]=pow(2,i);
    int ans=0;
    int j=11;
    while(n>0)
    {
        ans+=n/arr[j];
        n=n%arr[j];
        j--;
    }
    cout<<ans<<"\n";
}*/

int main()
{
    int n=1920;
    int ans=0;
    for(int i=n;i>0;ans=ans*10+i%10,i/=10){}
    cout<<ans;
}