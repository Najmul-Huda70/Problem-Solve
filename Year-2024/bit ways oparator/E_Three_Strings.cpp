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
const int N=2009;
const ll mod = 1e5 + 7,inf = 1e8;
 string a,b,c;
int dp[N][N],n,m,o;
int call(int takenA,int takenB,int C_index)
{
   if(C_index==o) return 0LL;
   if(takenA==n && takenB==m) return inf;
   if(dp[takenA][takenB] != -1) return dp[takenA][takenB];
   int resA = inf;
   int resB = inf;
   
   if(takenA<n and takenB<m)
   {
      resA = (c[C_index] != a[takenA]) + call(takenA+1,takenB,C_index+1);
      resB = (c[C_index] != b[takenB]) + call(takenA,takenB+1,C_index+1);
      return dp[takenA][takenB] = min(resA,resB);
   }
else if(takenA<n) return  dp[takenA][takenB] = (c[C_index] != a[takenA]) + call(takenA+1,takenB,C_index+1);
else if(takenB<m) return dp[takenA][takenB] = (c[C_index] != b[takenB]) + call(takenA,takenB+1,C_index+1);
  return 0;   
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
  
   cin>>a>>b>>c;

    n = a.size();
    m = b.size();
    o = c.size();
  
  for(int i=0;i<N;i++)
  {
     for(int j=0;j<N;j++)
     {
         dp[i][j] = -1;
      }
   }

   int ans = call(0,0,0);
 
   cout<<ans<<endl;
 
 }
return 0;
}
//practice