#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;

const int N = 100000;
const int M = 200000;

int n, m, d[N + 5], bm;
long long b[M + 70]; 
pair<int, pair<int, int>> a[M + 5]; // Stores edges with weights
vector<pair<int, int>> v[N + 5]; // Adjacency list for the MST

// Input function to read the number of cities (n) and roads (m)
void input() {
    scanf("%d%d", &n, &m); // Input number of cities and roads
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &a[i].S.F, &a[i].S.S, &a[i].F); // Input roads (u, v, w)
    }
}

// DSU Find function
int fin(int x) { 
    if (d[x] == x) return x; // If x is its own leader
    return d[x] = fin(d[x]); // Path compression
}

// DFS function to calculate contribution of each edge
int dfs(int x, int fr) {
    int R = 1;
    for (int i = 0; i < v[x].size(); i++) {
        if (v[x][i].F != fr) {
            int K = dfs(v[x][i].F, x); // Recursive DFS
            b[v[x][i].S] += 1LL * K * (n - K); // Contribution calculation
            R += K;
        }
    }
    return R;
}

// Main solution function
void sol() {
    sort(a, a + m); // Sort edges based on weights
    // Kruskal's algorithm to build MST
    for (int i = 1; i <= n; i++) d[i] = i; // Initialize DSU

    for (int i = 0; i < m; i++) {
        if (fin(a[i].S.F) != fin(a[i].S.S)) {
            d[fin(a[i].S.F)] = fin(a[i].S.S); // Union operation
            v[a[i].S.F].push_back({a[i].S.S, a[i].F}); // Build MST adjacency list
            v[a[i].S.S].push_back({a[i].S.F, a[i].F});
            bm = a[i].F; // Keep track of the maximum weight in the MST
        }
    }
    
    dfs(1, 1); // Start DFS from node 1

    // Process the binary representation
    for (int i = 0; i < bm; i++) {
        b[i + 1] += b[i] / 2; // Carry over the binary values
        b[i] %= 2;
    }
    
    while (b[bm] > 1) {
        b[bm + 1] = b[bm] / 2;
        b[bm] %= 2;
        bm++;
    }
    
    // Print the result in binary form
    for (int i = bm; i >= 0; i--) {
        putchar('0' + b[i]);
    }
    putchar('\n');
}

int main() {
    input(); // Take input
    sol();   // Solve the problem
    return 0;
}
