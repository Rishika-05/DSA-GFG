#include <bits/stdc++.h>
using namespace std;

int mibs(vector<int> v, int l) {
    vector<int> lis(l, 1), lds(l, 1);
    int res = lis[0];
    for (int i = 1; i < l; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j])
                lis[i] = max(lis[i], lis[j] + 1);
        }
    }
    for (int i = l - 2; i >= 0; i--) {
        for (int j = l - 1; j > i; j--) {
            if (v[i] > v[j])
                lds[i] = max(lds[i], lds[j] + 1);
        }
    }
    for (int i = 0; i < l; i++) {
        res = max(res, lis[i] + lds[i] - 1);
    }
    return res;
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
        cout << mibs(v, n);
        cout << "\n";
    }
    return 0;
}