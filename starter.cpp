#include <bits/stdc++.h>

using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define vsum(a) (accumulate((a).begin(), (a).end(), 0ll))
#define DB (cout << "debug here" << endl);
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
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
int binomialCoeff(int n, int k)
{
    int C[k + 1];
    memset(C, 0, sizeof(C));

    C[0] = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j - 1];
    }
    return C[k];
}
void bitFreq(ll n, vector<ll> &freq, int addOrSub)
{
    ll base = 1;
    for (int i = 0; i < 32; i++)
    {
        if (base & n)
        {
            freq[i] += addOrSub;
        }
        base = base * 2;
    }
}
ll freqToNum(vector<ll> freq)
{
    int ans = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        ans += freq[i] * pow(2, i);
    }
    return ans;
}

bool compare(pair<pair<ll, ll>, ll> a, pair<pair<ll, ll>, ll> b)
{
    return (a.first.first) < (b.first.first);
}
bool my_compare(string a, string b)
{

    if (a.compare(0, b.size(), b) == 0 || b.compare(0, a.size(), a) == 0)

        return a.size() > b.size();
    else
        return a < b;
}
void solve()
{
    
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}