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

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;

 while(t--)
 {
   int n;
   cin>>n;
   vi v(n+1);
   for(int i=1;i<=n;i++)
   {
     cin>>v[i];
    }
    vector<pair<int,ll>> ans;
    for(int i=1;i<=n;i++)
    {
       ll next_div_sequence = 1 << (__lg(v[i])+1);
       ans.push_back({i,next_div_sequence-v[i] });
     }
     cout<<ans.size()<<endl;
     for(int i=0;i<ans.size();i++)
     {
      cout<<ans[i].first<<" "<<ans[i].second<<endl;
      }
 }
return 0;
}