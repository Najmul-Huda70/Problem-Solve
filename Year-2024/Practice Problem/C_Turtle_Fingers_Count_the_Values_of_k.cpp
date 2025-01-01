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
    ll a,b,l;
    cin>>a>>b>>l;
    set<int>ans;
    ll pow1 = 1;
    while(pow1<=l)
    {   
        ll pow2 = 1;
       while(pow2<=l)
       {
      
         ll value = 1LL*pow1*pow2;
         if(value>l) break;
        if(l%value==0) {
              ans.insert(l/value);
             // cout<<pow1<<" "<<pow2<<" "<<value<<endl;
             }
             pow2*=b;
       }
       pow1*=a;
    }
   
  cout<<ans.size()<<endl;
 }
return 0;
}