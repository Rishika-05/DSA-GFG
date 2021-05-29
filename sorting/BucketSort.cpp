#include<bits/stdc++.h>
using namespace std;

void bucketSort(int ar[], int n, int k)
{
    int max_val = ar[0];
    for(int i=1;i<n;i++)
    max_val = max(max_val, ar[i]);
    max_val++;
    vector<int> bkt[k];
    for(int i=0;i<n;i++)
    {
        int bi = (k*ar[i])/max_val;
        bkt[bi].push_back(ar[i]);
    }
    for(int i=0;i<k;i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        ar[index++]=bkt[i][j];
    }

}


int main()
{
    // Used only if data is sorted uniformly.
    // 1. Divide the data into small buckets. say we have n elements with and distribute it into k buckets. n/k elements  will go into each bucket.
    // 2. Apply any good sorting algorithm.
    // 3. Sort data in O(n) complexity - best case. O(n log n) for worst case. 

    int a[]={30, 40, 10, 80, 5, 12, 70};
    int k=4;
    bucketSort(a,7,k);
    for( auto x : a)
    cout<<x<<" ";
    return 0;
}