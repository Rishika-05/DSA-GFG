#include<bits/stdc++.h>
using namespace std;

void sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            f=1;
            }
        }
        if(f==0)
        break;
    }
}


int main()
{
    int arr[]={2,5,1,9,6,5};
    int n=6;
    sort(arr,n);
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}