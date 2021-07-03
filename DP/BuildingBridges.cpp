#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int ceilIdx(int tail[], int l, int r, int t) {
    while (l < r) {
        int m = l + (r - l) / 2;
        if (tail[m] > t)
            r = m;
        else
            l = m + 1;
    }
    return r;
}

int nonoverlap(vector<pair<int, int>> v, int l) {
    sort(v.begin(), v.end(), compare);
    int tail[l], len = 1;
    tail[0] = v[0].second;
    for (int i = 1; i < l; i++) {
        if (v[i].second > tail[len - 1])
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
        cout << nonoverlap(v, n);
        cout << "\n";
    }
    return 0;
}