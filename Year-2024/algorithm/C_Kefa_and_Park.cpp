#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vvi adj(N);
vi a(N);
int m;
int result = 0; // Final answer to count the valid leaf nodes (restaurants)
void dfs(int u, int p,int numC,int maxC)
{
   if (a[u]) numC++; // If current node has a cat, increment consecutive cat count
    else numC = 0; // If no cat, reset the consecutive cat count to 0
    maxC = max(maxC, numC); // Track the maximum number of consecutive cats on the current path
   int numChild = 0; // Count the number of child nodes
    // Traverse all adjacent nodes (child nodes)
    for (int v : adj[u]) {
        if (v != p) { // Skip the parent node
            dfs(v, u, numC, maxC); // Recursively call DFS on the child node
            numChild++; // Increment the child count
        }
    }
     // If the node is a leaf (has no child nodes) and the max number of consecutive cats is <= m
    if (numChild == 0 && maxC <= m) result++;  
}
int32_t main()
{
fast;
int n;
cin>>n;
cin>>m;
for(int i=1;i<=n;i++)
{
 cin>>a[i];
 }
 for(int i=1;i<n;i++)
 {
   int u,v;
   cin>>u>>v;
   adj[u].pb(v);
   adj[v].pb(u);
  }
  // Start DFS from the root node (1), with parent -1, and initial consecutive cat counts 0
    dfs(1, -1,0,0);
    cout<<result;
return 0;
}