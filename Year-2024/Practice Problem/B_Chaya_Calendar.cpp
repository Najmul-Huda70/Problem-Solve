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
  vl v(n);
  for(int i=0;i<n;i++)
  {
     cin>>v[i];
   }
 ll ans =v[0];
 for(int i=1;i<n;i++)
 {  if(v[i]>ans) ans=v[i];
 else ans = (ans/v[i] + 1 )*v[i];  
  }
  cout<<ans<<endl;
 }
return 0;
}
/*
   3 2 4 5 9 18
1st index value 3           so , 3th
2nd index value 2         already has gone 3th 
ans = (ans/v[i] + 1 )*v[i];   2 * 2 = 4 so the year 4th 

*/