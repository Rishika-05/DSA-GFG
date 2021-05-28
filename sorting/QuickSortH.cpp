#include <bits/stdc++.h>
using namespace std;

int partition(int ar[], int l, int h)
{
    int pivot = ar[l]; // generally first element as pivot.
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (ar[i] < pivot);
        do
        {
            j--;
        } while (ar[j] > pivot);
        if (i >= j)
            return j;
        swap(ar[i], ar[j]);
    }
}

void qSort(int ar[], int l, int h)   // 3 x faster than lomuto partion.
{
    if (l < h)
    {
        int p = partition(ar, l, h);
        qSort(ar, l, p);
        qSort(ar, p + 1, h);
    }
}

void printArr(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
}

int main()
{
    int a[] = {8, 4, 7, 9, 3, 10, 5};
    qSort(a, 0, 6);
    printArr(a, 7);
}
