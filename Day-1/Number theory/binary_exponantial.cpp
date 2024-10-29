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
ll power(ll base,int n)
{    ll ans = 1;
  while(n>0)
  {
    if(n%2==1)
 {
    ans*=base;
    n--;
 } 
 else
 {
      base*=base;
      n/=2;
 }
  }
     return ans;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 ll base,n;
 cin>>base>>n;
 cout<<power(base,n)<<endl;
return 0;
}