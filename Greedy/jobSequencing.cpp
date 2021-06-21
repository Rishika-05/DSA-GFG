#include <bits/stdc++.h>
using namespace std;

// 1 unit by every job
bool myComp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second > b.second;
}

int profit(vector<pair<int, int>> v, int s) {
    sort(v.begin(), v.end(), myComp);
    vector<int> p(s, -1);
    int res = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = v[i].first - 1; j >= 0; j--) {
            if (j < s && p[j] == -1) {
                p[j] = v[i].second;
                break;
            }
        }
    }
    int sum = 0;
    for (int x : p)
        sum += x;
    return sum;
}

int main() {
    int n, s = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        s = max(s, v[i].first);
    }
    cout << profit(v, s);
    return 0;
}