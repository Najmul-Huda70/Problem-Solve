/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
  int n;
  ll k;
  cin>>n>>k;
  //cout<<k<<endl;
  ll arr[n];
  bool ans=true;
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
   if(arr[i]>k)
   {
    ans=false;
   }
   }
//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    ll cnt=0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]<=k) 
  {
    cnt++;
  }
  }
//cout<<k<<" "<<cnt<<endl;
if(ans && cnt<=k) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 }
return 0;
}