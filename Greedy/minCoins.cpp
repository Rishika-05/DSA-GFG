#include <bits/stdc++.h>
using namespace std;

//---------- general happening of Greedy-------------------------------------

// getOptimal(int arr[],int n){
//     intialize: res =0;
//     while( All items are not considered){
//         i = selectAnItem();
//         if(isFeasible(i))
//         res+=i;
//     }
//     return res;
// }

//---------------------------------------------------------------------------------
int minCoins(vector<int> arr, int amt) {
    int res = 0;
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= amt) {
            int c = amt / arr[i];
            res += c;
            amt %= arr[i];
        }
        if (amt == 0)
            return res;
    }
    return -1;
}

int main() {
    int amt, deno;
    cin >> amt >> deno;
    vector<int> arr(deno);
    for (int i = 0; i < deno; i++)
        cin >> arr[i];
    cout << minCoins(arr, amt);
    return 0;
}