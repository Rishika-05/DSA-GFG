#include <bits/stdc++.h>
using namespace std;

// unsigned range (0, 2^64 -1)
// signed range (-2^31, 2^31 -1)

int main()
{
    int x = 3, y = 6;
    cout << (x & y) << "\n";  // AND
    cout << (x | y) << "\n";  // OR
    cout << (x ^ y) << "\n";  // XOR
    cout << (x << 1) << "\n"; // Left Shift Operator.  It doubles the integer.
    cout << (x << 2) << "\n";
    y = 4;
    int z = (x << y);
    cout << z << "\n";
    int a = 64;               // (x>>y) == floor(x/pow(2,y))
    cout << (a >> 1) << "\n"; // Right Shift Operator.(halfed)
    cout << (a >> 2) << "\n";
    int t = 1;
    cout << ~t << "\n";
    t = 5;
    cout << ~t << "\n";
    return 0;
}