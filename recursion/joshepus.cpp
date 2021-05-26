#include<bits/stdc++.h>
using namespace std;

int joshepus(int n,int k)
{
    if(n==1)
    return 1;
    return (joshepus(n-1,k)+k-1)%n+1;
}


int main()
{
    int n,k;
    cin>>n>>k;
    cout<<joshepus(n,k)<<"\n";
    return 0;
}