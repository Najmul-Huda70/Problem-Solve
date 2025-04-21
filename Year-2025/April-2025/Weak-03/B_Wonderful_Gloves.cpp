// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.rbegin(), x.rend()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
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
void solve()
{
    int n, k;
    cin >> n >> k;
    vi left(n), right(n);
    FOR(i, 0, n - 1)
    cin >> left[i];
    FOR(i, 0, n - 1)
    cin >> right[i];
    vector<bool> le(n, false), ri(n, false);
    ll ans = 0;
    FOR(i, 0, n - 1)
    {
        if (left[i] > right[i])
        {
            ans += left[i];
            le[i] = true;
        }
        else
        {
            ans += right[i];
            ri[i] = true;
        }
    }
    vi next;
    FOR(i, 0, n - 1)
    {
        if (!le[i])
            next.push_back(left[i]);
        if (!ri[i])
            next.push_back(right[i]);
    }
    stable_sort(all(next));
    FOR(i, 0, k - 2)
    {
        ans += next[i];
    }
    cout << ans + 1 << endl;
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