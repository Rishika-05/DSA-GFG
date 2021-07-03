#include <bits/stdc++.h>
using namespace std;

int ceilIdx(int tail[], int l, int r, int x) {
    while (l < r) {
        int m = l + (r - l) / 2;
        if (tail[m] >= x)
            r = m;
        else
            l = m + 1;
    }
    return r;
}

int lis(int arr[], int n) {
    int tail[n], len = 1;
    tail[0] = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= tail[len - 1])
            tail[len++] = arr[i];
        else {
            int c = ceilIdx(tail, 0, len - 1, arr[i]);
            tail[c] = arr[i];
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << lis(arr, n);
        cout << "\n";
    }
    return 0;
}