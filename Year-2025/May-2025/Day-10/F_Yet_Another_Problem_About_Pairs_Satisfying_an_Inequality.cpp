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

const int N = 2e5 + 9;
const ll mod = 1e5 + 7, inf = 1e9;

int t[4 * N];
int arr[N];

void built(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = 0;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    built(l, b, mid);
    built(r, mid + 1, e);
    t[node] = t[l] + t[r];
}

ll query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i)
        return 0;
    if (b >= i && e <= j)
        return t[node];
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void upd(int node, int b, int e, int i, int val)
{
    if (b > i || e < i)
        return;
    if (b == e)
    {
        t[node] = val;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, val);
    upd(r, mid + 1, e, i, val);
    t[node] = t[l] + t[r];
}

void solve()
{
    int n;
    cin >> n;
    FOR(i, 1, n)
    cin >> arr[i];

    memset(t, 0, sizeof(t));
    built(1, 1, n);

    ll ans = 0;
    FOR(i, 1, n)
    {
        if (i > arr[i])
        {
            if (arr[i] - 1 >= 1)
                ans += query(1, 1, n, 1, arr[i] - 1);
            upd(1, 1, n, i, 1);
        }
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
