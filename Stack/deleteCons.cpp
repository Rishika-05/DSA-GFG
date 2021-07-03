#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;
    char c;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty()) {
            int c = s[i];
            st.push(c);
        } else {
            if (st.top() == s[i])
                st.pop();
            else {
                int c = s[i];
                st.push(c);
            }
        }
    }
    string res = "";
    while (!st.empty()) {
        c = st.top();
        res += c;
        st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << removeDuplicates(s);
    return 0;
}