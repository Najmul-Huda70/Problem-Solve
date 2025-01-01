#include <bits/stdc++.h>
using ll=long long ;
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 1; i <= n; i++) {  
       parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader; 
    return leader;
}

void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (leaderA != leaderB) {
        // Union by size
        if (group_size[leaderA] >= group_size[leaderB]) {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

class Edge {
public:
    int u, v;
    ll w;
    Edge(int u, int v, ll w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    int n, e;
    cin >> n >> e; 
    dsu_initialize(n);
    vector<Edge> edgeList;

    for (int i = 0; i < e; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);
   ll totalCost = 0;
   ll roadsInMST = 0;

    for (Edge ed : edgeList) {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU != leaderV) {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
            roadsInMST++;
        }
    }

    if (roadsInMST < n - 1) {
        cout << "Not Possible" << endl;
    } else {
        cout << (e - roadsInMST) << " " << totalCost << endl; 
    }

    return 0;
}
