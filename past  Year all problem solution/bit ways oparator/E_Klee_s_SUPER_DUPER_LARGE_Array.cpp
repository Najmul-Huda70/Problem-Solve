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
const int N=1e9+9;
const ll mod = 1e5 + 7,inf = 1e9+9;
ll sum(ll a,ll n)
{
   ll s = 2*a + n -1;
   s*=n;
   s/=2;
   return s;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    ll n,k;
   cin>>n>>k;

 //  ll sum = n*k + (n*(n-1))/2;
//    ll pref=0;
//     ll x=LLONG_MAX;
//     ll mid = sum/2;
//    for(ll i=0;i<n;i++)
//    {
//        pref += k + i;
//        ll suf = sum - pref;
//        x = min(x,abs(suf-pref));
//     }
ll low = 1,high = n,x=1e18;
while(low<=high)
{
     ll mid = (low+high)/2;
     ll sum1 = sum(k,mid);
     ll sum2 = sum(k+mid,n-high);
     x = min(x,abs(sum1-sum2));
     if(sum2>=sum1) low=mid+1;
     else high = mid-1;
}

cout<<x<<endl;
 }
return 0;
}