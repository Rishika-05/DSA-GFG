#include <bits/stdc++.h>
using namespace std;

bool myComp(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.second * 0.1 / a.first * 0.1) > (b.second * 0.1 / b.first * 0.1);
}

double maxVal(vector<pair<int, int>> v, int cap) {
    sort(v.begin(), v.end(), myComp);
    double val = 0.0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].first <= cap) {
            cap -= v[i].first;
            val += v[i].second;
        } else if (v[i].first > cap) {
            val += v[i].second * ((cap * 0.1) / v[i].first * 0.1);
            return val;
        }
    }
    return -1;
}

int main() {
    int cap, n;
    cin >> cap >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    cout << maxVal(v, cap);
    return 0;
}