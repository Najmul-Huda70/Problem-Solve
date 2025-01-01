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
   ll k,l1,r1,l2,r2;
   cin>>k>>l1>>r1>>l2>>r2;
   ll ans = 0;
//    for(ll i=l1;i<=r1;i++)
//    {
//       ll temp = i;
//       while(temp<=r2)
//       {
//         if(temp>=l2) ans++;
//          if (temp > inf/k) break;    
//         temp*=k;
//       }
//    }
    /*
     amra jani inf = 1e9 value is 2^30 er teke kom 
    tai amra power er ekta loop 0 to 30 porjonto salailei hobe 
   
    y/x = k^n 
    y/x = P      suppose P = k^n
    y = Px

    y er range l2 teke r2 porjonto
    l2<= y <= r2
    l2<= px <= r2
    l2/p <= x <= r2/p

    tahole ekane x er
    
     minimum value x >= l2/p
     maximum value x <= r2/p

    x er arekta range dewa l1 teke r1 

    so , cnt range 
    start = max(l1,l2/p)
    end   = min(r1,r2/p)

cnt += end - start + 1
   */
  ll p = 1;
 while(p<=r2)
  {
     ll start = max(l1,(l2+p-1)/p);
     ll end = min(r1,r2/p);
     if(start<=end) ans+=end-start+1;
     if (p > inf / k) break;
      p*=k;     
   }
   
 cout<<ans<<endl;
 }
 
return 0;
}