#include <bits/stdc++.h>
using namespace std;

class DSU {
private:
    vector<int> parent, size;

public:
    
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        iota(parent.begin(), parent.end(), 0); 
          }

   
    int find(int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = find(parent[node]);
    }

    
    bool unite(int u, int v) {
        int leaderU = find(u);
        int leaderV = find(v);

        if (leaderU != leaderV) {
            if (size[leaderU] < size[leaderV])
                swap(leaderU, leaderV);
            parent[leaderV] = leaderU;
            size[leaderU] += size[leaderV];
            return false; 
        }
        return true; 
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, e;
    cin >> n >> e;

    DSU dsu(n);

    int cycleEdges = 0;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        if (dsu.unite(u, v)) {
            cycleEdges++; 
        }
    }

    cout << cycleEdges << endl;

    return 0;
}
