#include <bits/stdc++.h>
using namespace std;

// map also works on Red Black Tree

// begin, end     ----> O(1)
// rbegin, rend   ----> O(1)
// size, empty    ----> O(1)

// count, lower_bound     ----> O(log n)
// upper_bound, erase     ----> O(log n)
// equal_range            ----> O(log n) pair of lower & upper bound.
// find          ----> O(log n)
// erase(key)    ----> O(log n)
// insert        ----> O(log n) 

// at    ---->  checks index out of bound.   

int main() {
    map<int,int> m;
    m.insert({10, 200});
    m[5] = 100;
    // m.at(9) = 700; error
    m.insert({3, 300});
    for(auto &x: m)
    cout << x.first << " "<< x.second << "\n";
    cout << m.size() << endl;
    return 0;
}