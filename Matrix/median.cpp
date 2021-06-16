#include <bits/stdc++.h>
using namespace std;

// Row wise sorted matrix // distict element

int main()
{
    int r = 3, c = 3;
    int arr[][c] = {{1, 10, 20}, {15, 25, 35}, {5, 30, 40}};
    int mn = arr[0][0], mx = arr[0][c - 1];
    for (int i = 1; i < 3; i++)
    {
        mn = min(mn, arr[i][0]);
        mx = max(mx, arr[i][c - 1]);
    }
    int med = (r * c + 1) / 2;
    while (mn < mx)
    {
        int mid = mn + (mx - mn) / 2;
        int midPar = 0;
        for (int i = 0; i < r; i++)
            midPar += upper_bound(arr[i], arr[i] + c, mid) - arr[i];
        if (midPar < med)
            mn = mid + 1;
        else
            mx = mid;
    }
    cout << mn;
return 0;
}