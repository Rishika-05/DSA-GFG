#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = -1;
    cout << __builtin_popcount(n) << endl;  // GCC compiler specific function to count set bits.

    long int m = 5;
    cout << __builtin_popcountll(m) << endl;

    tuple<string, int, string> t = make_tuple("abc", 10, "xyz");
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
    get<0>(t) = "pqr";
    cout << get<0>(t) << endl;

    tuple<char, int, int> tp('g', 10, 20);
    cout << tuple_size<decltype(t)>::value << endl;
    char x;
    int y, z;
    // tie(x, y, z) = t;
    // cout << x << " " << y << " " << z << endl;  
    return 0;
}