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
const int N=1e6+9;
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
int n = 2e5 + 5,m;
vvi adj(n);
vi col(n,-1);//initialize to -1 so that a 0 value is not wrongly considered
vb vis(n,false);
bool dfs(int u)
{
    vis[u] = true;
    for (int v:adj[u]){
        if (col[v] == col[u])return false;        
        else if (!vis[v]){
            col[v] = !col[u];
            if (!dfs(v))return false;
        }
    }
    return true;
}
int main()
{
    cin>>n>>m;
    
    vvi el;
 
    for (int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
        el.pb({u,v});
    }
    col[1] = 0;
    if (!dfs(1)){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        string ans = "";
        for (int i = 0;i<m;i++){//iterating over all edges
            int u = el[i][0],v = el[i][1];
            if (col[u] == 0){//u is an outgoing node
                ans += "0";
            }
            else{
                ans += "1";
            }
        }
        cout<<ans;
    }
    return 0;
}