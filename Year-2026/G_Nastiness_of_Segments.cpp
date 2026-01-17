// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void brute_force();
ll t[4 * N];
int a[N];
void built(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int mid = (b + e) >> 1;
    int l = node << 1;
    int r = l | 1;
    built(l, b, mid);
    built(r, mid + 1, e);
    t[node] = min(t[l], t[r]);
}
void upd(int node, int b, int e, int i, int x)
{
    if (e < i or b > i)
        return;
    if (b == e and b == i)
    {
        t[node] = x;
        return;
    }
    int mid = (b + e) >> 1;
    int l = node << 1;
    int r = l | 1;
    upd(l, b, mid, i, x);
    upd(r, mid + 1, e, i, x);
    t[node] = min(t[l], t[r]);
}
ll query(int node, int b, int e, int i, int j)
{
    if (e < i or b > j)
        return INT_MAX;
    if (b >= i and e <= j)
        return t[node];
    int mid = (b + e) >> 1;
    int l = node << 1;
    int r = l | 1;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    built(1, 0, n - 1);
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, x;
            cin >> i >> x;
            upd(1, 0, n - 1, i, x);
        }
        else
        {
            int i, j;
            cin >> i >> j;
            cout << query(1, 0, n - 1, i, j - 1) << endl;
        }
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

/*-----------------------------------Brute Force Approach--------------------------------*/
void brute_force() // time complexity O(...)
{
}
/*---------------------------------------Ovservation-------------------------------------*/
/*

*/