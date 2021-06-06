#include <bits/stdc++.h>
using namespace std;

struct myDS
{
    deque<int> dq;
    void insertMin(int x)
    {
        dq.push_front(x);
    }
    void insertMax(int x)
    {
        dq.push_back(x);
    }
    int getMin()
    {
        return dq.front();
    }
    int getMax()
    {
        return dq.back();
    }
    void extractMin()
    {
        return dq.pop_front();
    }
    void extractMax()
    {
        return dq.pop_back();
    }
};

int main()
{
    // A DS that do the following in O(1).
    // insertMin();
    // insertMax();
    // getMin();
    // getMax();
    // extractMin();
    // extractMax();
}