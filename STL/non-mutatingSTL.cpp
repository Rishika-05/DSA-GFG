#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {5, 10, 12, 8, 7, 3};
    vector<int> v = {10, 20, 20, 30, 40, 50, 60};

    // find     ----> O(n)
    auto it = find(l.begin(), l.end(), 10);
    if (it == l.end())
        cout << "Not Found\n";
    else
        cout << "Found\n";

    // lower_bound      ----> O(log n)
    auto itr = lower_bound(v.begin(), v.end(), 20);
    cout << (*itr) << endl;
    itr = lower_bound(v.begin(), v.end(), 25);
    cout << (*itr) << endl;

    //upper_bound       ----> O(log n)
    itr = upper_bound(v.begin(), v.end(), 20);
    cout << (*itr) << endl;
    itr = upper_bound(v.begin(), v.end(), 25);
    cout << (*itr) << endl;

    // is_permutation    ----> O(n)
    vector<int> v1 = {10, 20, 30, 5};
    vector<int> v2 = {10, 5, 30, 20};
    if (is_permutation(v1.begin(), v1.end(), v2.begin()))
        cout << "Yes\n";
    else
        cout << "No\n";

    // max_element , min_element     ----> O(n)
    auto it1 = max_element(v1.begin(), v1.end());
    auto it2 = min_element(v1.begin(), v1.end());
    cout << (*it1) << " " << (*it2) << endl;

    // count      ----> O(n)
    cout << count(v.begin(), v.end(), 20) << endl;

    // binar_search    ----> O(log n)   uses lower_bound internally
    if (binary_search(v.begin(), v.end(), 30 /*, myComp*/))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // fill    ----> O(n)
    fill(v2.begin() + 1, v2.end(), 8);
    for (int i : v2)
        cout << i << " ";
    cout << endl;

    // rotate     ----> O(n)    forward iterator required
    rotate(v.begin(), v.begin() + 2, v.end());
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // accumulate      ----> O(n)
    vector<int> vt = {10, 20, 30};
    int ini_res = 100;
    cout << accumulate(vt.begin(), vt.end(), ini_res, minus<int>()) << endl;

    // rand   ---->  Based on linear congreential generator  Xn+1 = (aXn + b) % m
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
        cout << rand() << " ";
    cout << endl;

    return 0;
}