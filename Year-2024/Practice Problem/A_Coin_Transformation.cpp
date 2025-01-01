//Najmul Huda
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
unordered_map<ll, ll> mp;
ll mx(ll n)
{
    if (n <= 3) return 1;
    if (mp.count(n)>0) return mp[n];
    ll two_part = n/4;
    return mp[n] = 2*mx(two_part);
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   ll n;
   cin>>n;
   cout<<mx(n)<<endl;

 }
return 0;
}
