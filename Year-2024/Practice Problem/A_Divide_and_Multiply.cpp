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
    vl v(n);
    
    for(int i=0;i<n;i++)
    {
       cin>>v[i];

     }
    ll cnt =0;
    ll mx =0;

    for(int i=0;i<n;i++)
    {
       while(v[i]%2==0)
       {
         cnt++;
         v[i]/=2;
       }
       if(v[i]> mx) mx = v[i];
     }
     ll ans = 0;
     for(int i=0;i<n;i++)
     {
          
            ans+=v[i];
          
      }
      ans-=mx;
  while(cnt--)
  {
       mx*=2;
  }
  ans+=mx;
  cout<<ans<<endl;
 }
return 0;
}