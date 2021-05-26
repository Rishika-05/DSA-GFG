#include<bits/stdc++.h>
using namespace std;

void sort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
    }
}

int main()
{
    int arr[]={2,6,1,9,5};
    int n=5;
    sort(arr,n);
    for(auto x:arr)
    cout<<x<<" ";
    return 0;
}