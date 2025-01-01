#include <bits/stdc++.h>
using namespace std;


vector<int> parent, size;


void dsu_initialize(int n) {
    parent.resize(n + 1);
    size.resize(n + 1, 1);
    for (int i = 0; i <= n; ++i) {
        parent[i] = i; 
    }
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
        return true; 
    }
    return false; 
}


struct Edge {
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};


bool compare(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;  

    vector<Edge> edges;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w)); 
    }

   
    sort(edges.begin(), edges.end(), compare);

    
    dsu_initialize(n);
    int totalCost = 0;
    int roadsUsed = 0;

   
    for (const Edge &edge : edges) {
        if (unite(edge.u, edge.v)) {
            totalCost += edge.w;  
            roadsUsed++;           
        }
    }

   
    if (roadsUsed == n - 1) {
        cout << totalCost << endl; 
    } else {
        cout << -1 << endl;  }

    return 0;
}
