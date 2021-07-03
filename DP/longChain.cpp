#include <bits/stdc++.h>
using namespace std;

int ceilIdx(int tail[], int l, int r, int t) {
    if (l < r) {
        int m = l = (r - l) / 2;
        if (tail[m] >= t)
            r = m;
        else
            l = m + 1;
    }
    return r;
}

int chain(vector<pair<int, int>> v, int l) {
    sort(v.begin(), v.end());
    int tail[l], len = 1;
    tail[l] = v[0].second;
    for (int i = 1; i < l; i++) {
        if (tail[len - 1] <= v[i].first)
            tail[len++] = v[i].second;
        else {
            int c = ceilIdx(tail, 0, len - 1, v[i].second);
            tail[c] = v[i].second;
        }
    }
    return len;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;
        cout << chain(v, n);
        cout << "\n";
    }
    return 0;
}