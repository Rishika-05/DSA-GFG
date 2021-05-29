#include <bits/stdc++.h>
using namespace std;

int partition(int ar[], int l, int h)
{
    int p = ar[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (ar[j] < p)
        {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i + 1], ar[h]);
    return i + 1;
}

void qSort(int ar[], int l, int h)
{
    if (l < h)
    {
        int p = partition(ar, l, h);
        qSort(ar, l, p - 1);
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
