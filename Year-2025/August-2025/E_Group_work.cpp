// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_mafreq [key](v) mafreq[key] _element(all(v));
#define vec_minmafreq [key](v) minmafreq[key] _element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e9+7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
vl fact(N);

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
ll modInverse(ll a) {
    return binpow(a, mod - 2);
}

void factorial() {
    fact[0] = 1;
    FOR(i, 1, N-1) {
        fact[i] = fact[i - 1] * i % mod;
    }
}

ll combination(int n, int r) {
    if (r < 0 || r > n) return 0;
    ll res = fact[n];
    res = res * modInverse(fact[r]) % mod;
    res = res * modInverse(fact[n - r]) % mod;
    return res;
}

void solve()
{  
   ll n;
    cin>>n;
    ll r=n;
    ll ans=0;
    while(r>1){
     ans=ans+combination(n,r)%mod;
     r--;
    }
   cout<<ans<<endl;
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    factorial();
        solve();
    
    return 0;
}