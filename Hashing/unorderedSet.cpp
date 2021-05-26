#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;              // Order is not maintained.
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for(int i:s)
    cout<<i<<" ";    // any permuatation of the item is printed.
    cout<<"\n";

    for(auto it=s.begin(); it !=s.end(); it++)
    cout<<(*it)<<" ";
    cout<<"\n";

    cout<<"Size : "<<s.size()<<"\n";
    // s.clear();
    // cout<<"Size : "<<s.size()<<"\n";

    if(s.find(15)==s.end())          // find returns an iterator to the val.
    cout<<"Not Found\n";
    else
    cout<<"Found  "<<*(s.find(15))<<"\n";

    if(s.count(10))              // returns bool value.
    cout<<"Found\n";
    else
    cout<<"Not Found\n";

    // s.erase(15);
    // cout<<"Size : "<<s.size()<<"\n";
    // auto it = s.find(10);
    // s.erase(it);
    // cout<<"Size : "<<s.size()<<"\n";

    s.erase(s.begin(),s.end());
    cout<<"Size : "<<s.size()<<"\n";



    return 0;
}