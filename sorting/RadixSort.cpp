#include <bits/stdc++.h>
using namespace std;

void countingSort(int ar[], int n, int exp)
{
    int count[10], output[n];
    for (int i = 0; i < 10; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[(ar[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] = count[i] + count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(ar[i] / exp) % 10] - 1] = ar[i];
        count[(ar[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
        ar[i] = output[i];
}

void radixSort(int ar[], int n)
{
    int mx = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > mx)
            mx = ar[i];
    }
    for (int exp = 1; mx / exp > 0; exp = exp * 10)
        countingSort(ar, n, exp);
}

int main()
{
    int a[] = {319, 212, 6, 8, 100, 50};
    radixSort(a, 6);
    for (auto x : a)
        cout << x << " ";
    return 0;
}