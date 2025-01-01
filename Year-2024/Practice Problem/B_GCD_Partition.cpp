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
    ll sum = 0;
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
      sum+=v[i];
     }
     ll s=0,ans=1;
     /*
     GCD(X , Y) = GCD(X , X+Y)
     GCD(3,6) = 3
     GCD(6,9) = 3
     -----------------------
   for an example: 
   
    1 2 3 4 5 6 
    1  2+3+4+5+6 = GCD(1,20) = 1
    - ----------
    1+2 3+4+5+6 = GCD(3,18) = 3
    --- -------
    1+2+3 4+5+6 = GCD(6,15) = 3
    ----- ----- 
    1+2+3+4 5+6 = GCD(10,11) = 1
    ------- --- 
    1+2+3+4+5 6 = GCD(15,6) = 3
    --------- - 
    MAX GCD = 3 
     */
    for(int i=0;i<n-1;i++)
    {
      s+=v[i];
      ans = max(ans , __gcd(s,sum-s));
     }
     cout<<ans<<endl;
  }
return 0;
}