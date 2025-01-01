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
const int N=1e9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
   vl X(n);
   for(int i=1;i<n;i++)
   {
      cin>>X[i];
    }

  vl ans(n,0);
  ll val=0;
  ans[n-1]=N;
  for(int i=n-2;i>=0;i--)
  {
     ans[i] += ans[i+1] - X[i+1];
   }
   //cout<<ans.size()<<endl;
   for(auto val:ans)
   {
     cout<<val<<" ";
    }
    cout<<endl;
    ans.clear();
   X.clear();
 }
return 0;
}