#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> m;   
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    for (auto i : m)
        cout << i.first << " " << i.second << "\n";

    /*
    vector <int> v;
    int arr[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==1)
        v.push_back(arr[i]);
    }
    //return v;
    */
}