#include<bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string,int> m;    // <key, value>
    m["gfg"]=20;     //[] - Member access operator. present- return reference , either insert.
    m["ide"]=30;
    m.insert({"rish",53});
    for(auto i:m)
    cout<<i.first<<" "<<i.second<<"\n";

    if(m.find("gfg")!=m.end())
    cout<<"Found "<<(m.find("gfg"))->second<<"\n";
    else 
    cout<<"Not found.\n";

    for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<"\n";

    if(m.count("ide")>0)
    cout<<"Found\n";
    else
    cout<<"Not Found\n";

    cout<<"Size : "<<m.size()<<"\n";

    m.erase("ide");
    m.erase(m.begin());
    cout<<"Size : "<<m.size()<<"\n";




}