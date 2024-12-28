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
  int x,y,k;
  cin>>x>>y>>k;
   if(x==0 && y==0) cout<<0<<endl;
   else
   {
     int X_=(x+k-1)/k; 
     int Y_=(y+k-1)/k;  //(y+k-y%k)/k; 2 beshi ashe 
     if(X_>Y_) cout<<2*X_ - 1<<endl;
     else cout<<2*Y_<<endl;
   }
 
 }
return 0;
}