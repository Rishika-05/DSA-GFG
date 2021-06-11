#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,5,15};

    priority_queue <int> pq(arr,arr+3);   // O(n).
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
    priority_queue<int> mxh; // max Heap.
    priority_queue <int, vector<int>,greater<int>> mih;  // Min Heap.
    mih.push(10);
    mih.push(15);   // O(log n)
    mih.push(5);
    mih.push(20);
    cout<<mih.size()<<" ";  // O(1)
    cout<<mih.top()<<" ";   // O(1)
    while(!mih.empty())
    {
        cout<<mih.top()<<" ";
        mih.pop();
    }
}