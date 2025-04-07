// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename TT>
void print(const vector<TT> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    if (k == 0)
    {
        cout << -1 << endl;
        return;
    }
    ll kb = k * b;
    ll extra_add = n * (k - 1);

    if (1LL * (kb + extra_add) >= s && s >= kb)
    {
        vl ans(n, 0);
        ans[0] = kb;
        s -= kb;
        for (int i = 0; i < n && s > 0; i++)
        {
            ll add = min(s, k - 1);
            ans[i] += add;
            s -= add;
        }
        print(ans);
    }

    else
    {
        cout << -1 << endl;
    }
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