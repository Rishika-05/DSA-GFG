#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(n log n).

bool myComp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int maxActivity(vector<pair<int, int>> time) {
    sort(time.begin(), time.end(), myComp);
    int res = 1;
    int idx = 0;
    for (int i = 1; i < time.size(); i++) {
        if (time[i].first >= time[idx].second) {
            idx = i;
            res++;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> time(n);
    for (int i = 0; i < n; i++)
        cin >> time[i].first >> time[i].second;
    cout << maxActivity(time);
    return 0;
}