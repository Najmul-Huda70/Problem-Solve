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
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int n,m;
char g[n][m];
bool vis[n][m];
int previousStep[N][N];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
string stepDir = "URDL";
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 cin>>n>>m;
 pair<int,int> begin,end;
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<m;j++)
   {
    cin>>g[n][m];
    if(g[i][j]=="A")
    {
       begin=({i,j});
    }
    if(g[i][j]=="B")
    {
        end=({i,j});
    }
   }
  }
  memset(vis,false,sizeof(vis));
  queue<pair<int,int>>q;
  q.push({begin.first,begin.second});
  vis[begin.first][begin.second]=true;
  while(!q.empty())
  {
    pair<int,int> parent=q.front();
    q.pop();
    int pi=parent.first;
    int pj=parent.second;
    for(int i=0;i<4;i++)
    {
      int ci=pi+dx[i];
      int cj=pj+dy[i];
      if(ci<0 || ci>=n || cj<0 || cj>=m || vis[ci][cj]==true || g[ci][cj]=="#") continue;
      vis[ci][cj]=true;
      previousStep[ci][cj]=1;
      q.push({ci,cj});

     }
  }
  queue<pair<int,int>> pq;
  pq.push({end.first,end.second});
 while(!pq.emtpy())
 {  
    pq.front();
    
    pq.pop();
 } 
return 0;
}