// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_max(v) max_element(all(v));
#define vec_minmax(v) minmax_element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
/*
 auto p = vec_minmax(a);
        int mx_a = *p.second;
        int mn_a = *p.first;
*/
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vl a(n);
    FOR(i, 0, n - 1)
    cin >> a[i];

    /*

   *** Important Concepts used:

   1. Modular Arithmetic (remainder %)

   2. Maps (hashing counts)

   3. Optimization (not O(n²), but O(n))

   4. Handling negative remainders safely using (x - r) % x.


  this problem two condition here

  1. a[i]%x = (x - a[j]%x)%x
  2. a[i]%y = a[j]%y


  remainder mp[a[i]%x][a[i]%y]++   previous left hand side and count

  check next right hand side
  next another value
  ans += mp[(x-a[i]%x)%x][a[j]%y]

      */

    map<ll, map<ll, ll>> mp;
    ll ans = 0;
    FOR(i, 0, n - 1)
    {
        ans += mp[(x - a[i] % x) % x][a[i] % y];
        mp[a[i] % x][a[i] % y]++;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}