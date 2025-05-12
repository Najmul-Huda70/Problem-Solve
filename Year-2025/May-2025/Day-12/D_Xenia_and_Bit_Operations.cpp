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
const int N = 2e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}

/************************************ Brute force Method ******************************

ll f(vector<ll> seq, int n)
{
    bool or_op = true;
    while (n > 1)
    {
        vector<ll> new_seq;
        for (int i = 0; i < n; i += 2)
        {
            if (or_op)
                new_seq.push_back(seq[i] | seq[i + 1]);
            else
                new_seq.push_back(seq[i] ^ seq[i + 1]);
        }
        seq = new_seq;
        n = seq.size();
        or_op = !or_op;
    }
    return seq[0];
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int size = 1 << n; // 2^n
    vector<ll> seq(size, 0);

    FOR(i, 0, size - 1)
    cin >> seq[i];
    while (m--)
    {
        int p;
        ll b;
        cin >> p >> b;
        p--;
        seq[p] = b;
        vector<ll> temp = seq;
        cout << f(temp, size) << endl;
    }
}

*/

/*******************************Optimal - Segmentation Tree **************************/
int seq[N];
int t[N * 4];
int level[4 * N];
void built(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = seq[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    built(l, b, mid);
    built(r, mid + 1, e);
    level[node] = level[r] + 1;
    if (level[node] & 1)
        t[node] = t[l] | t[r];
    else
        t[node] = t[l] ^ t[r];
}

void upd(int node, int b, int e, int i, int val)
{
    if (b > i or e < i)
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
    if (level[node] & 1)
        t[node] = t[l] | t[r];
    else
        t[node] = t[l] ^ t[r];
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int size = 1 << n;

    FOR(i, 1, size)
    cin >> seq[i];

    // Build the segment tree before any query
    built(1, 1, size);

    while (m--)
    {
        int p, b;
        cin >> p >> b;
        upd(1, 1, size, p, b); // 1-indexed
        cout << t[1] << endl;  // t[1] is the root
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(level, 0, sizeof(level));
    solve();

    return 0;
}