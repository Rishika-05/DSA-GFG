#include<bits/stdc++.h>
using namespace std;


void sort(int *arr, int n)
{
    int idx;
    for(int i=0;i<n-1;i++)
    {
        //int min=arr[i];
        idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[idx])
            {
                idx=j;
               // min=arr[j];
            }
        }
        swap(arr[i],arr[idx]);
    }
}

int main()
{
    int arr[]={2,7,1,9,5};
    int n=5;
    sort(arr,n);
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}