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
const int N=1e9+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {

   int n,x;
   cin>>n>>x;

  map<int,int>mp;
  for(int i=0;i<n;i++)
  {
    int val;
    cin>>val;
    mp[val]++;
   }

// cout<<endl;
//    for(int i=0;i<n;i++)
// {
//    if(mp[i]>=1) cout<<i<<" "<<mp[i]<<endl;
//  }
//  cout<<endl;

for(int i=0;i<n;i++)
{
   if(mp[i] > 1)
   {
       mp[i+x]+=(mp[i]-1);
       mp[i]==1;
   }
 }
//  cout<<endl;
// for(int i=0;i<n;i++)
// {
//    if(mp[i]>=1) cout<<i<<" ";
//  }
//  cout<<endl;
// bool flag = true;
// for(int i=0;i<n;i++)
// {
//    if(mp[i]!=1)
//    {
//        cout<<i<<endl;
//        flag = false;
//        break;
//    }
//  }
//  if(flag) cout<<n<<endl;
int ans = 0;
while(mp[ans]>=1)
{
    ans++;
}
cout<<ans<<endl;
 }
return 0;
}