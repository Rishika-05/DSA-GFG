#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n = 1101;
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count << "\n";
}