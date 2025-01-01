/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;
const int N = 5005;
const int inf = 1e9;

vector<int> tree[N];
set<int> node_val[N];
int dp[N];
int parent[N][15]; 
int n, m;

void dfs(int u, int par) {
    parent[u][0] = par;
    for (int i = 1; i < 15; ++i) {
        if (parent[u][i - 1] != -1)
            parent[u][i] = parent[parent[u][i - 1]][i - 1];
        else
            parent[u][i] = -1;
    }
    for (int v : tree[u]) {
        if (v != par) {
            dp[v] = dp[u] + 1;
            dfs(v, u);
        }
    }
}

int lca(int u, int v) {
    if (dp[u] < dp[v]) swap(u, v);

    for (int i = 14; i >= 0; --i) {
        if (parent[u][i] != -1 && dp[parent[u][i]] >= dp[v])
            u = parent[u][i];
    }

    if (u == v) return u;

    for (int i = 14; i >= 0; --i) {
        if (parent[u][i] != parent[v][i]) {
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}

vector<int> collect_values(int u, int v, int lca_uv) {
    vector<int> values;

     while (u != lca_uv) {
        values.insert(values.end(), node_val[u].begin(), node_val[u].end());
        u = parent[u][0];
    }

    while (v != lca_uv) {
        values.insert(values.end(), node_val[v].begin(), node_val[v].end());
        v = parent[v][0];
    }

     values.insert(values.end(), node_val[lca_uv].begin(), node_val[lca_uv].end());

    return values;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

   for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(parent, -1, sizeof(parent));
    dp[1] = 0;
    dfs(1, -1);

    int q;
    cin >> q;

    while (q--) {
        string query_type;
        cin >> query_type;

        if (query_type == "insert") {
            int u, x;
            cin >> u >> x;
            node_val[u].insert(x);
        } else if (query_type == "delete") {
            int u, x;
            cin >> u >> x;
            node_val[u].erase(x);
        } else if (query_type == "find") {
            int u, v, k;
            cin >> u >> v >> k;

            int lca_uv = lca(u, v);

            vector<int> values = collect_values(u, v, lca_uv);

            sort(values.begin(), values.end());

            if (k <= values.size()) {
                cout << values[k - 1] << endl;
            } else {
                cout << -1 << endl; 
            }
        }
    }

    return 0;
}
