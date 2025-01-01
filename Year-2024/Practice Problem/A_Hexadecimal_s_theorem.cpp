//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
const int N=1e9+9;
const ll mod = 1e5 + 7,inf = 1e9;
vl v;
void fibo(ll a,ll b)
{    if(a>N || b>N) return;
     ll next= a + b;
     v.push_back(next);
     fibo (b,next); 
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
v.push_back(0);
v.push_back(1);
 fibo(0,1);
 ll n;
 cin>>n;
 ll  a;
 int i=0;
 for( i=0;i<v.size();i++)
 {
    if(n<v[i]) break;
    
  }
  a= v[i-1];
 
  if(n==a) cout<<a<<" 0 0"<<endl;
  else 
  {
     auto it = find(v.begin(),v.begin()+i-1,n-a);
     if(it != v.begin()+i-1) cout<<a<<" "<<n-a<<" "<<0<<endl;
  }

return 0;
}