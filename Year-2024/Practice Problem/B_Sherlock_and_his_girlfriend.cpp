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
 ll n;cin>>n;
 bool arr[n+2];
 memset(arr,true,sizeof(arr));
  vl ans(n+2,0);
  ll mx =1;
  for(ll i=2;i<=n+1;i++)
  {
      if(arr[i])
      { 
        ans[i]=1;
        for(ll j=i*i;j<=n+1;j+=i)
        {
           if(arr[j])
           {
            ans[j]=ans[i]+1;
           mx = max(ans[j],ans[i]);
           arr[j] = false;
           }
         }
      }
      
   }

   cout<<mx<<endl;
   for(ll i=2;i<=n+1;i++)
   {
     cout<<ans[i]<<" ";
    }
 cout<<endl;
return 0;
}