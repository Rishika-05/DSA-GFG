#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define FASTIN                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define tests \
    ll t;     \
    cin >> t; \
    while (t--)
#define vsum(a) (accumulate((a).begin(), (a).end(), 0ll))

struct fibo
{
    void multiply(ll F[2][2], ll M[2][2])
    {
        ll x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
        ll y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
        ll z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
        ll w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

        F[0][0] = x;
        F[0][1] = y;
        F[1][0] = z;
        F[1][1] = w;
    }
    void power(ll F[2][2], ll n)
    {
        if (n == 0 || n == 1)
            return;
        ll M[2][2] = {{1, 1}, {1, 0}};

        power(F, n / 2);
        multiply(F, F);

        if (n % 2 != 0)
            multiply(F, M);
    }
    ll fibonacci(ll n)
    {
        ll F[2][2] = {{1, 1}, {1, 0}};
        if (n == 0)
            return 0;
        power(F, n - 1);

        return F[0][0];
    }
} f;

ll hcf(ll a, ll b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}
ll fact(int n)
{
    ll ans = n;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    for (ll i = 1; i < n; i++)
    {
        ans = ans * (n - i);
    }
    return ans;
}
ll finder(ll temp, vector<ll> v)
{
    vector<ll>::iterator it;
    it = find(v.begin(), v.end(), temp);
    return it - v.begin();
}
ll nCr(int n, int r)
{
    ll num = fact(n);
    ll deno = fact(r) * fact(n - r);
    return num / deno;
}
void bitFreq(ll n,vector<ll>& freq,int addOrSub){
    ll base = 1;
    for(int i=0;i<32;i++){
        if(base&n){
            freq[i] += addOrSub;
        }
        base = base*2;
    }

}
ll freqToNum(vector<ll> freq){
    int ans = 0;
    for(int i=0;i<freq.size();i++){
        ans += freq[i]*pow(2,i);
    }
    return ans;
}
bool compare(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
    return (a.first.first)*(a.first.second) > (b.first.first)*(b.first.second);
}




int main()
{
    FASTIN
      ll n;
      cin>>n;
      vector<ll> v(n);
      
      ll mx = INT_MIN;
      for(int i=0;i<n;i++){
        cin>>v[i];
        
        if(mx<v[i]){
            mx = v[i];
        }
      }
      
      vector<ll> freq(mx+1,0);
      for(int i=0;i<n;i++){
          freq[v[i]]++;
      }
      int dp[mx+1];
      dp[1] = 1*freq[1];
      for(int i=2;i<mx+1;i++){
          ll deleted = i*freq[i] + dp[i-2];
          ll notD = dp[i-1];
          dp[i] = max(deleted , notD);
          
              
        }

      
    return 0;
}