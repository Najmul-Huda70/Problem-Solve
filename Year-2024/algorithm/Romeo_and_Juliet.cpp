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
const int N=1e6+9;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7,inf = 1e9;
vi g[N];
vi dis(N);
vb vis(N,false);
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n,e;
 cin>>n>>e;
while(e--)
{
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
int src,d,k;
cin>>src>>d>>k;
fill(vis.begin(),vis.end(),false);
fill(dis.begin(),dis.end(),-1);
queue<int>q;
q.push(src);
vis[src]=true;
dis[src]=0;
while(!q.empty())
{
    int par=q.front();
    q.pop();
    for(auto v:g[par])
    { 
        if(!vis[v])
        {
            q.push(v);
            vis[v]=true;
            dis[v]=dis[par]+1;
        }
    }

}
cout<<((dis[d]!=-1 && dis[d]<=2*k) ? "YES":"NO")<<endl;
return 0;
}