#include <bits/stdc++.h>
using namespace std;

int Hpartition(int ar[], int l, int h)      // shows unstability.
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
    //return 0;
}

void printArr(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
}

int main()
{
    int a[] = {5, 3, 8, 4, 2, 7, 1,10};
    Hpartition(a, 0, 7);
    printArr(a, 8);
    return 0;
}