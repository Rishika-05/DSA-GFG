#include <bits/stdc++.h>
using namespace std;

// set is built on self-balancing BST mainly Red Black Tree
// multiset can contain multiple same values.

// begin, end         ----> O(1)
// rbegin, rend       ----> O(1)
// cbegin, cend       ----> O(1)
// size, empty        ----> O(1)

// insert, find           ----> O(log n)
// count, lower_bound     ----> O(log n)
// upper_bound, erase     ----> O(log n)
// equal_range            ----> O(log n) pair of lower & upper bound.

// erase(it)          ----> Amortized O(1)



int main() {
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    for (int x : s)
        cout << x << " ";
    cout << endl;
    auto it = s.find(10);
    if (it == s.end())
        cout << "Not Found!\n";
    else
        cout << "Found\n";
    if (s.count(10))
        cout << "Found!\n";
    else
        cout << "Not Found!\n";

    auto itr = s.lower_bound(5);  // if found return iterator to the element else iterator to next element.
    if (itr != s.end())
        cout << (*itr) << " ";
    else
        cout << "element is greater than largest";

    itr = s.upper_bound(5);
    if (itr != s.end())
        cout << (*it) << " ";
    else
        cout << "Given element is greater than te largest\n";
    return 0;
}