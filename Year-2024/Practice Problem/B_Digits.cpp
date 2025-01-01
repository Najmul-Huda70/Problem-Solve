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
ll fact(ll n,int mod)
{
     ll ans = 1;
    for (int i = 2; i <= n; i++) {
        ans *= i;
        ans%=mod;
        if(ans==0) break;
    }
    return ans;
}

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
  ll n;
  int d;
  cin>>n>>d;
  //cout<<fact(n,d)<<" ";
  string s=" ";
  for(ll i=0;i<fact(n,d);i++)
  {
    s += (char)(d + '0');
   }
   
  ll shob_digit_er_sum = d*fact(n,d);
  cout<<1<<" ";
  if(d%3==0 || shob_digit_er_sum%3==0) cout<<3<<" ";
  if(d%5==0) cout<<5<<" ";
  
 }
return 0;
}
