// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_mafreq [key](v) mafreq[key] _element(all(v));
#define vec_minmafreq [key](v) minmafreq[key] _element(all(v));
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

vector<vector<pair<int, int>>> adj;
vector<int> f,e;

void dfs(int u, int p) {
    for (auto [v, id] : adj[u]) {
        if (v == p) continue;
        e[v] = id;
        f[v] = f[u] + (id < e[u]);
        dfs(v, u);
    }
}

void solve() {
    int n;
    cin >> n;

    adj.assign(n, {});
        f.assign(n, 0);
    e.assign(n, 0);

    e[0] = n;  
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;  
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
    }

    dfs(0, -1);

    cout << *max_element(f.begin(), f.end()) << endl;
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