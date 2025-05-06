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

vector<int> g[N];
int ans[N], a[N], n;
void call(vector<int> even, vector<int> odd)
{
    queue<int> q;
    vector<int> d(n + 1, inf);
    for (auto st : even)
    {
        q.push(st);
        d[st] = 0;
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (d[u] + 1 < d[v])
            {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
    for (auto u : odd)
    {
        ans[u] = d[u];
    }
}
void solve()
{
    cin >> n;
    vector<int> even, odd;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
        {
            odd.push_back(i);
        }
        else
        {
            even.push_back(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        int j = i - a[i];
        if (j >= 1)
            g[j].push_back(i); // reverse edge
        j = i + a[i];
        if (j <= n)
            g[j].push_back(i); // reverse edge
    }
    for (int i = 1; i <= n; i++)
    {
        ans[i] = inf;
    }
    call(even, odd);
    call(odd, even);
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] == inf)
            ans[i] = -1;
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
