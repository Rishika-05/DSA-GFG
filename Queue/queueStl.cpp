#include <bits/stdc++.h>
using namespace std;

// enqueue - adding new items in the queue.
// dequeue - removing first item in the queue.

int main()
{
    queue<int> q;
    for (int i = 1; i < 6; i++)
        q.push(i);
    cout << q.front() << "\n"; // return first item.
    q.pop();                   // pops out first item.
    cout << q.front() << "\n";
    cout << q.back() << "\n"; // return last item.
    cout << q.size() << "\n";
    cout << q.empty() << "\n";
}