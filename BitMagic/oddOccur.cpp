#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 4, 6, 8, 7, 8, 0, 4, 4, 6, 0};
    int ans = 0;
    for (int i = 0; i < 11; i++)
        ans = ans ^ arr[i];
    cout << ans << "\n";
}