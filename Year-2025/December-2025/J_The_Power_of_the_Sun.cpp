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
const ll mod = 998244353, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
int a[N];
int t[4 * N];
int fact[N];
void factorial()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = 1LL * fact[i - 1] * i % mod;
    }
}
void push(int n, int b, int e)
{
}
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}
void upd(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (b > j || e < i)
        return;
    if (b >= i && e <= j)
    {
        // assign
        push(n, b, e);
        return;
    }
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    upd(l, b, mid, i, j);
    upd(r, mid + 1, e, i, j);
    t[n] = t[l] + t[r];
}
int query(int n, int b, int e, int i, int j)
{
    if (b > j || e < i)
        return -inf;
    if (b >= i && e <= j)
        return t[n];
    int mid = (b + e) >> 1, l = n << 1, r = l | 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int l, r;
            cin >> l >> r;
            upd(1, 1, n, l, r);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    factorial();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //}
    return 0;
}