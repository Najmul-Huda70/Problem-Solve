//s.i.snajmulhuda2002
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
  bool flag[n][m];
  ll arr[n][m];
 int dx[4] = {-1,0,1,0};
 int dy[4] = {0,1,0,-1};
void  dfs()
{
     
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   cin>>n>>m;
   vs v(n);
   for(int i=0;i<n;i++)
   {
     cin>>v[i];
    }
 for(int i=0;i<n;i++)
 {   string s = v[i];
   for(int j=0;j<m;j++)
   {  
    arr[i][j] = s[j] - '0';
    }
  }
  memset(flag,true,sizeof(flag));
  int cnt =0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        if(flag[i][j])
        {   cnt++;
            dfs(arr,i,j);
        }
     }
   }
   cout<<cnt<<endl;
 }
return 0;
}