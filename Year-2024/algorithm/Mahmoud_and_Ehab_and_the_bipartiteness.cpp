#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+9;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7,inf = 1e9;
vi g[N];
vb vis(N);
vi col(N);
bool dfs(int u)
{
    vis[u]=true;
    for(auto v:g[u])
    {
       if(!vis[v]) 
       {
        col[v]=!col[u];
        if(!dfs(v)) return false;
       }
       else if(col[u]==col[v]) return false;
    }
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
        int n;
        cin >> n;
        col.resize(n);
        for(int i = 1; i <=n; i++)
        {
            g[i].clear();
            col[i] = -1;
            vis[i] = false;
        }
       for(int i=1;i<n;i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bool isBipartite = true;
        for(int i = 1; i <=n; i++)
        {
            if(!vis[i])
            {
                col[i] = 0; 
                if(!dfs(i))
                {
                    isBipartite = false;
                    break;
                }
            }
        }
        int red=0,blue=0;
       for(int i=1;i<=n;i++)
       {
        if(col[i]==0) red++;
        else blue++;
        } 
        ll total=red*blue;
        cout<<total-(n-1)<<endl;
    
    return 0;
}
