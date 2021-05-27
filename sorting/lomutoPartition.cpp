#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l,int h,int p)
{
    swap(arr[p],arr[h]);
    int pivot = arr[h];               // generally last element as pivot.
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}

void printArr(int ar[],int n)
{
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
}

int main()
{
    int a[]={70,80,10,40,50,90};
    int n= 6;
    partition(a,0,5,2);
    printArr(a,n);
}
