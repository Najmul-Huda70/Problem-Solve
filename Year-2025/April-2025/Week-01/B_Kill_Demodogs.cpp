// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define condition(flag) cout << (flag ? "YES\n" : "NO\n")
using ll = long long;
const ll mod = 1e9 + 7;

// Fast modular exponentiation
ll binpow(ll a, ll b, ll m = mod)
{
    ll res = 1;
    a %= m;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Modular inverse
ll modinv(ll x)
{
    return binpow(x, mod - 2);
}

void solve()
{
    ll n;
    cin >> n;

    ll a = n % mod;
    ll b = (n + 1) % mod;
    ll c = (2 * n + 1) % mod;

    ll sum_sq = a * b % mod * c % mod * modinv(6) % mod;
    ll sum_i = a * b % mod * modinv(2) % mod;

    ll total = (sum_sq + sum_i) % mod;
    total = total * 2022 % mod;

    cout << total << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
