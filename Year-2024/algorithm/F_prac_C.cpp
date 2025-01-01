/****************************************************************************
 Don't feel alone. Allah is with you!

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+9;
using ll = long long;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<vector<int>> adj(N);
vector<int> a(N);
int m;
int ans = 0; 
void dfs(int u, int p, int numC, int maxC)
{
   if (a[u]) numC++; 
     else numC = 0; 
  maxC = max(maxC, numC); 
   int numChild = 0; 
    for (int v : adj[u]) {
        if (v != p) { 
            dfs(v, u, numC, maxC); 
                numChild++; 
             }
    }
    if (numChild == 0 && maxC <= m) ans++;  
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
    dfs(1, -1, 0, 0);
    cout<<ans;
return 0;
}