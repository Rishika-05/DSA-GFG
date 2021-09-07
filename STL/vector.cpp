#include <bits/stdc++.h>
using namespace std;

// push_back   ---->   O(1)
// pop_back    ---->   O(1)

// front       ---->   O(1)
// back        ---->   O(1)
// empty       ---->   O(1)
// begin(), rbegin(), crbegin(), cbegin()    ---->   O(1)
// end(), rend(), crend(), cend()  ---->   O(1)
// size()    ---->   O(1)

// insert       ---->  O(n)
// erase        ---->  O(n)
// resize       ---->  O(n)

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    for (int x : v)
        cout << x << " ";
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";
    cout << endl;

    int ar[] = {9, 8, 7};
    int n = sizeof(ar) / sizeof(ar[0]);
    vector<int> vrr(ar, ar + n);
    for (auto it = vrr.rbegin(); it != vrr.rend(); it++)
        cout << (*it) << " ";
    cout << endl;

    v.pop_back();
    cout << v.front() << endl;
    v.front() = 100;
    cout << v.front() << endl;
    cout << v.back() << endl;

    v.push_back(15);
    v.push_back(30);
    v.push_back(35);
    auto it = v.insert(v.begin(), 5);
    v.insert(v.begin() + 2, 200);
    v.insert(v.begin(), 2, 300);
    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin() + 4);
    for (int x : v)
        cout << x << " ";
    cout << endl;
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    v.erase(v.begin());
    for (int x : v)
        cout << x << " ";
    cout << endl;

    v.erase(v.begin(), v.end() - 1);
    for (int x : v)
        cout << x << " ";
    cout << endl;

    v.clear();
    cout << v.size() << " " << v.empty() << endl;

    v = {3, 4, 5, 6};
    v.resize(6);
    for (int x : v)
        cout << x << " ";
    cout << endl;
    v.resize(8, 50);
    for (int x : v)
        cout << x << " ";
    cout << endl;

    vector<int> c;
    cout << c.capacity() << endl;
    c.push_back(8);
    c.push_back(8);
    c.push_back(8);
    c.push_back(8);
    c.push_back(8);
    cout << c.capacity() << endl;
    return 0;
}