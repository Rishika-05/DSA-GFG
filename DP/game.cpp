#include <bits/stdc++.h>
using namespace std;

int sol(vector<int> v, int i, int j, int sum){

}

int mainSol(vector<int> v) {
    int sum = 0;
    for(int i = 0;i < v.size(); i++)
        sum += v[i];
    return sol(v, 0, v.size() - 1, sum);
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    
}