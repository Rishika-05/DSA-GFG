#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    left[i]=arr[l+i];
    for(int i=0;i<n2;i++)
    right[i]=arr[m+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int l, int r)
{
    if(r>l)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArr(int arr[],int s)
{
    for(int i=0;i<s;i++)
    cout<<arr[i]<<" ";

}

int main()
{
    int a[]={10,5,30,15,7};
    //int r=5-1;
    mergeSort(a,0,4);
    printArr(a,5);

    
}