#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int ar[], int n, int i)
{
    int largest = i, left = 2 * i + 1, right = 2 * i + 2;
    if (left < n && ar[left] > ar[largest])
        largest = left;
    if (right < n && ar[right] > ar[largest])
        largest = right;
    if (largest != i)
    {
        swap(ar[largest], ar[i]);
        maxHeapify(ar, n, largest);
    }
}

void buildheap(int ar[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)   // parent of last node.
        maxHeapify(ar, n, i);
}

void heapSort( int ar[],int n)
{
    buildheap(ar,n);
    for(int i=n-1;i>=1;i--)
    {
        swap(ar[0],ar[i]);
        heapify(ar,i,0);
    }
}

int main()
{
    int a[] = {10, 15, 50, 4, 20};
    heapSort(a, 5);
    return 0;
}