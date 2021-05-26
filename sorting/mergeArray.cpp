#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {10, 15, 20, 40};
    int b[] = {5, 6, 6, 10, 15};
    int x = 4;
    int y = 5;
    int c[x + y];
    int i = 0, j = 0, k = 0;
    while (i < x && j < y)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < x)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < x)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    for (int x : c)
        cout << x << " ";
    return 0;
}