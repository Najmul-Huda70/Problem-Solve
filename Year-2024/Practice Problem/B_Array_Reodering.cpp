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
  vl v(n),V;
  int cnt =0;
  for(int i=0;i<n;i++)
  {
   cin>>v[i];
   if(v[i]%2==0) cnt++;
   else {
          V.push_back(v[i]);
   }
   }
  
 ll ans =0;
 //cout<<cnt<<endl;
 while(cnt)
 {
    ans+=n-cnt;
    cnt--;
 }
  n=V.size();
 sort(V.begin(),V.end());
 for(int i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
       if(__gcd(V[i],2*V[j])>1)
       {
         ans++;
       }
     }
    
  }
 cout<<ans<<endl;
 }
return 0;
}