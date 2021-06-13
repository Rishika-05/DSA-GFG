#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 6, 8, 7, 8, 0, 4, 4, 6, 0};
    int xr = 0, res1=0, res2=0;
    for(int i=0;i<10;i++)
    xr = xr ^ arr[i];
    int sn = xr & ~(xr - 1);
    for(int i=0;i<10;i++)
    {
        if(arr[i] & sn != 0)
        res1 = res1 ^ arr[i];
        else
        res2 = res2 ^ arr[i];
    }
    cout<< res1 << " " << res2 ;
    return 0;
}