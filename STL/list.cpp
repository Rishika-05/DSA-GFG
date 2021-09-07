#include <bits/stdc++.h>
using namespace std;

// FORWARD_LIST ----------------------------------------------------
// insert_after()  ---->   O(1) & O(m) for m items
// erase_after()   ---->   O(1) & O(m) for m items
// push_front()    ---->   O(1)
// pop_front()     ---->   O(1)

// reverse         ---->   O(n)
// remove()        ---->   O(n)

// sort()          ---->   O(nlogn)
// assign()        ---->   O(1) for one item and O(m) for m items.

// LIST ------------------------------------------------------------
// unique()        ---->   O(n)
// pop_back()      ---->   O(1)
// push_back()     ---->   O(1)

int main() {
    forward_list<int> l = {5, 10, 20};
    l.push_front(5);
    l.push_front(3);
    l.pop_front();
    for (int x : l)
        cout << x << " ";
    cout << endl;

    forward_list<int> lt;
    lt.assign({10, 20, 30, 10});
    forward_list<int> l2;
    l2.assign(l.begin(), l.end());
    lt.remove(10);
    for (auto it = lt.begin(); it != lt.end(); it++)
        cout << (*it) << " ";
    cout << endl;
    for (auto it = l2.begin(); it != l2.end(); it++)
        cout << (*it) << " ";
    cout << endl;

    l.assign(8, 0);
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";
    cout << endl;

    l.unique();
    for (auto it = l.begin(); it != l.end(); it++)
        cout << (*it) << " ";
    cout << endl;

    auto it = l2.insert_after(l2.begin(), 100);
    it = l2.insert_after(it, {2, 3, 7});
    it = l2.emplace_after(it, 40);
    it = l2.erase_after(it, l2.end());
    for (int x : l2)
        cout << x << " ";
    cout << endl;

    l2.sort();
    for (int x : l2)
        cout << x << " ";
    cout << endl;

    l2.reverse();
    for (int x : l2)
        cout << x << " ";
    cout << endl;

    l2.merge(lt);
    for (int x : l2)
        cout << x << " ";
    cout << endl;
    return 0;
}