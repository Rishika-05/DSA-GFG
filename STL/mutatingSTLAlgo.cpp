#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {15, 6, 7, 12, 30};

    // sort   ----> O(n log n)
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // make_heap
    make_heap(v.begin(), v.end(), greater<int>());
    cout << v.front() << endl;
    pop_heap(v.begin(), v.end(), greater<int>());
    cout << v.front() << endl;
    v.at(4) = 2;
    push_heap(v.begin(), v.end(), greater<int>());
    cout << v.front() << endl;

    // merge     ---->  O(n log n)
    vector<int> v1 = {10, 20, 30};
    vector<int> v2 = {5, 15, 40, 80};
    vector<int> v3(7);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for (int x : v3)
        cout << x << " ";
    cout << endl;

    // next_permutation    ----> O(n)
    vector<int> vt = {1, 2, 5, 4, 3};
    next_permutation(vt.begin(), vt.end());
    for (int x : vt)
        cout << x << " ";
    cout << endl;

    // reverse O(n)    
    reverse(vt.begin(), vt.end());
    for (int x : vt)
        cout << x << " ";
    cout << endl;

    // prev_permutationd
    prev_permutation(vt.begin(), vt.end());
    for (int x : vt)
        cout << x << " ";
    cout << endl;
    
    return 0;
}