#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[],int n, int k)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (high > low)
    {
        mid =low + (high-low) / 2;
        if (ar[mid] == k)
            return mid;
        if (ar[mid] > k)
        {
            high = mid-1;
        }
        if (ar[mid] < k)
        {
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout<<binarySearch(ar,n,k);
}