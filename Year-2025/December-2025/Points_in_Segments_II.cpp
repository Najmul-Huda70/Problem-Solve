// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
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
class Segment_Tree
{
public:
    vector<int> a, b, t, Q;
    int n, q;
    Segment_Tree(int num, int qr)
    {
        n = num;
        q = qr;
        a.assign(n + 1, 0);
        b.assign(n + 1, 0);
        Q.assign(q + 1, 0);
        t.assign(4 * 3 * n + 1, 0);
    }

    void input()
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
    }

    void build(int n, int b, int e)
    {
        if (b == e)
        {
            t[n] = 0;
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        build(l, b, mid);
        build(r, mid + 1, e);
        t[n] = t[l] + t[r]; // change
    }

    void upd(int n, int b, int e, int i, int v)
    {
        if (b > i || e < i)
            return;
        if (b >= i && e <= i)
        {
            t[n] += v; // change
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        upd(l, b, mid, i, v);
        upd(r, mid + 1, e, i, v);
        t[n] = t[l] + t[r];
    }
    int query(int n, int b, int e, int i, int j)
    {
        if (b > j || e < i)
            return 0;
        if (b >= i && e <= j)
            return t[n];
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
    }
};
int tc = 0;
void solve()
{
    int n, q;
    cin >> n >> q;
    Segment_Tree T(n, q);

    // the number of segment (n)

    // doing co-ordinate compression
    set<int> all;
    for (int i = 1; i <= n; i++)
    {
        cin >> T.a[i] >> T.b[i];
        all.insert(T.a[i]);
        all.insert(T.b[i]);
    }
    for (int i = 1; i <= q; i++)
    {
        cin >> T.Q[i];
        all.insert(T.Q[i]);
    }
    map<int, int> mp;
    int id = 0;
    for (auto x : all)
    {
        mp[x] = ++id; // map in sorted order
    }
    for (int i = 1; i <= n; i++)
    {
        T.a[i] = mp[T.a[i]];
        T.b[i] = mp[T.b[i]];
    }
    for (int i = 1; i <= q; i++)
    {
        T.Q[i] = mp[T.Q[i]];
    }
    // co-ordinate compression done
    T.build(1, 1, id);
    for (int i = 1; i <= n; i++)
    {
        // for (int k = T.a[i]; k <= T.b[i]; k++)
        // {
        //     T.ans[k]++;
        // }
        int l = T.a[i], r = T.b[i];
        T.upd(1, 1, id, l, 1);
        if (r + 1 <= id)
        {
            T.upd(1, 1, id, r + 1, -1);
        }
    }

    // output
    cout << "Case " << ++tc << ":" << endl;
    for (int i = 1; i <= q; i++)
    {
        int ans = 0;
        int k = T.Q[i];
        ans = T.query(1, 1, id, 1, k);
        cout << ans << endl;
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