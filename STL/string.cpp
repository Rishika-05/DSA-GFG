#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "gfg";
    cout << str.length() << endl;
    str = str + "xyz";
    cout << str << endl;
    cout << str.substr(1, 3) << endl;
    cout << str.find("fg") << endl;

    string s = "geeksforgeeks";
    if (s.find("xyz") == string::npos)
        cout << "not present\n";
    
    // string name;
    // cout << "enter your name : ";
    // getline(cin, name, '$');
    // cout << name << endl;

    string s1 = "abc", s2 = "abcd";
    int res = 0;
    for(int i = 0; i < 3; i++)
    res = res ^ s1[i] ^ s2[i];
    res = res ^s2[3];
    cout << (char) res;
    return 0;
}