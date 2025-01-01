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
   int m,a,b,c;
   cin>>m>>a>>b>>c;
   ll total_seat = 2*m;
   ll ans = 0;
   if(a<=m) {
    total_seat-=a;
    ans+=a;
    }
    else if(a>m) 
    {
    total_seat-=m;
    ans+=m;
    }
   if(b<=m){ total_seat-=b;ans+=b;}
   else if(b>m){
    total_seat-=m;
    ans+=m;
    }
   if(total_seat<=c) ans+=total_seat;
   else if(total_seat>c) ans+=c;
   cout<<ans<<endl;
 }
return 0;
}