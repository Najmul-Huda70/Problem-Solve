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
   int one = 0,zero = 0;
   for(int i=0;i<2*n;i++)
   {
      int val;cin>>val;
      if(val==1) one++;
      if(val==0) zero++;
    }
    // minimum
    cout<<one%2<<" ";
    // maximum
    if(one<=n) cout<<one<<endl;
    else 
    {
        cout<<zero<<endl;
    }
 }
return 0;
}