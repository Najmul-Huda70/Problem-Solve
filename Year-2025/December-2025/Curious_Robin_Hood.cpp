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
    vector<int> a, t;
    Segment_Tree(int n)
    {
        a.assign(n + 1, 0);
        t.assign(4 * n + 1, 0);
    }
    void input(int n)
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
            t[n] = a[b];
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        build(l, b, mid);
        build(r, mid + 1, e);
        t[n] = t[l] + t[r];
    }
    void upd1(int n, int b, int e, int i)
    {
        if (b > i || e < i)
            return;
        if (b >= i && e <= i)
        {
            t[n] = 0;
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        upd1(l, b, mid, i);
        upd1(r, mid + 1, e, i);
        t[n] = t[l] + t[r];
    }
    void upd2(int n, int b, int e, int i, int v)
    {
        if (b > i || e < i)
            return;
        if (b >= i && e <= i)
        {
            t[n] += v;
            return;
        }
        int mid = (b + e) >> 1, l = n << 1, r = l | 1;
        upd2(l, b, mid, i, v);
        upd2(r, mid + 1, e, i, v);
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

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        int n, q;
        cin >> n >> q;
        Segment_Tree T(n);
        T.input(n);
        T.build(1, 1, n);
        cout << "Case " << ++tc << ":" << endl;
        while (q--)
        {
            int op;
            cin >> op;
            if (op == 1)
            {
                int i;
                cin >> i;
                i++;
                cout << T.query(1, 1, n, i, i) << endl;
                T.upd1(1, 1, n, i);
            }
            if (op == 2)
            {
                int i, v;
                cin >> i >> v;
                i++;
                T.upd2(1, 1, n, i, v);
            }
            if (op == 3)
            {
                int l, r;
                cin >> l >> r;
                l++;
                r++;
                cout << T.query(1, 1, n, l, r) << endl;
            }
        }
    }
    return 0;
}