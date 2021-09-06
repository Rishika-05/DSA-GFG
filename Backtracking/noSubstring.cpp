#include <bits/stdc++.h>
using namespace std;

bool isSafe(string s, int l, int i, int r) {
    if (i != 0 && s[l - 1] == 'A' && s[i] == 'B')
        return false;
    if (r == l + 1 && s[i] == 'A' && s[l] == 'B')
        return false;
    return true;
}

void permute(string s, int l, int r) {
    if (l == r) {
        cout << s << " ";
        return;
    } else {
        for (int i = l; i <= r; i++) {
            if (isSafe(s, l, i, r)) {
                swap(s[l], s[i]);
                permute(s, l + 1, r);
                swap(s[l], s[i]);
            }
        }
    }
}

int main() {
    string s;
    cin >> s;
    permute(s, 0, s.length() - 1);
    return 0;
}