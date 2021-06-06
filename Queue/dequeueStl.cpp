#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq = {10,20,30,40};
    dq.push_front(5);
    dq.push_back(45);
    for( auto x : dq)
    cout<<x<<" ";
    cout<<"\n";
    cout<<dq.front()<<" "<<dq.back()<<"\n";
    dq.pop_back();
    for( auto x : dq)
    cout<<x<<" ";
    dq.pop_front();
    cout<<"\n"<<dq.size()<<"\n";
    auto it = dq.begin();
    it++;
    dq.insert(it,20);
    for( auto x : dq)
    cout<<x<<" ";
    cout<<"\n";
    auto itr = dq.begin();
    itr = dq.insert(itr,7);
    itr = dq.insert(itr,2,3);
    itr = dq.erase(itr+1);
    cout<<(*itr)<<"\n";
    for(int i=0;i<dq.size();i++)
    cout<<dq[i]<<" ";
    return 0;
}