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
const int N=10005;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7,inf = 1e9;
char g[N][N];
bool vis[N][N];
int r,c;
int dx[]={0,+1,0,-1};
int dy[]={+1,0,-1,0};
bool valid(int x,int y)
{
    return (x>=0 && x<r && y>=0 && y<c &&  g[x][y]=='.' &&  !vis[x][y]);
}
void dfs(int i,int j)
{
    vis[i][j]=true;
    for(int idx=0;idx<4;idx++)
    {
        int ci=i+dx[idx];
        int cj=j+dy[idx];
        if(valid(ci,cj))
        {
            dfs(ci,cj);
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 cin>>r>>c;
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
 {
  cin>>g[i][j];
  }
 }
 memset(vis,false,sizeof(vis));
 int cnt=0;
 for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
 {
  if(!vis[i][j] && g[i][j]=='.')
  {
    cnt++;
    dfs(i,j);
  }
  }
 }
 cout<<cnt<<endl;
return 0;
}