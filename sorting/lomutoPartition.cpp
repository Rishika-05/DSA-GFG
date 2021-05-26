#include<bits/stdc++.h>
using namespace std;

void partin(int arr[], int l,int h)
{
    int pivot = arr[h];
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
    //et
}

int main()
{
    int a[]={10,80,90,40,50,70};
    int n= 6;
    partition(a,0,5);
}
