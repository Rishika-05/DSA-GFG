#include <bits/stdc++.h>
using namespace std;

long msis(vector<int> v) {
    int l = v.size();
    vector<int> mis(l);
    for (int i = 0; i < l; i++) {
        mis[i] = v[i];
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j])
                mis[i] = max(mis[i], v[i] + mis[j]);
        }
    }
    int n = -1;
    for (int i = 0; i < l; i++)
        n = max(n, mis[i]);
    return n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << msis(v);
        cout << "\n";
    }
    return 0;
}