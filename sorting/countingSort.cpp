#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int ar[]={1,4,4,1,0,1};
    int k=5;
    int count[k]={0};
    for(int i=0;i<k;i++)
    {
        count[ar[i]]++;
    }
    int j=0;
    for(int i=0;i<5;i++)
    {
        while(count[i]>0)
        {
            ar[j]=i;
            count[i]--;
            j++;
        }
    }
    for(int i=0;i<5;i++)
    cout<<ar[i]<<" ";
}
*/

void countSort(int ar[],int n,int k)
{
    int count[k]={0};
    for(int i=0;i<n;i++)
    count[ar[i]]++;

    for(int i=1;i<k;i++)
    count[i]=count[i]+count[i-1];

    int out[n];
    for(int i=n-1;i>=0;i--)
    {
        out[count[ar[i]]-1]=ar[i];
        count[ar[i]]--;
    }
    for(int i=0;i<n;i++)
    ar[i]=out[i];

}


int main()
{
    int ar[]={1,4,4,1,0,1};
    int k=5;
    countSort(ar,6,k);
    for(int i=0;i<6;i++)
    cout<<ar[i]<<" ";
}