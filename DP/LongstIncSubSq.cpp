#include <bits/stdc++.h>
using namespace std;

// Time Complexity - Theta(n^2).
// Aux Space - Theta(n)

int lis(int arr[], int n) {
    vector<int> lis(n, 1);
    int res = lis[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] <= arr[i])  // && arr[j+1] >= arr[j]) lis[i]++;
                lis[i] = max(lis[i], lis[j] + 1);
        }
    }
    // for (int i = 0; i < n; i++)
    //     cout << lis[i] << " ";
    for (int i = 0; i < n; i++)
        res = max(res, lis[i]);
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << lis(arr, n) << "\n";
    }
    return 0;
}