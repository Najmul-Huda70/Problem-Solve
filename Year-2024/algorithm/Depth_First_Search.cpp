/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
I said I am not happy in my life.....
Allah says: Soon your Lord will give you so much that you will be happy [Surah Duha 93:5]

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=105;
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
vi g[N];
vb vis(N,false);
vi discovery_time(N),finishing_time(N);
int current_time;
void dfs(int u)
{
    vis[u]=true;
    current_time++;
    discovery_time[u]=current_time;
    
    for(auto v:g[u])
    { if(!vis[v])
    {
        dfs(v);
    }  
    }
    current_time++;
    finishing_time[u]=current_time;
}
int32_t main()
{
fast;
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
    int u,k;
    cin>>u>>k;
    while(k--)
    {
        int v;
        cin>>v;
       g[u].pb(v);
    }
    sort(g[u].begin(),g[u].end());
  }
current_time=0;
for(int u=1;u<=n;u++)
{
 if(!vis[u])
 {
    dfs(u);
 }
 }
  for(int u=1;u<=n;u++)
  {
   cout<<u<<' '<<discovery_time[u]<<' '<<finishing_time[u]<<"\n";
   }
return 0;
}