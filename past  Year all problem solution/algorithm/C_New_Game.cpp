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
const int N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
   }
   vector<int>v;
   int cnt=1;
   for(int i=1;i<n;i++)
   { 
    if(arr[i]==arr[i-1] || arr[i]==arr[i-1]+1) cnt++;
    else
    {
        v.push_back(cnt);
        cnt=1;
    }
      
    }
    v.push_back(cnt);
    sort(v.rbegin(),v.rend());
 for(int i=0;i<v.size();i++)
 {
   cout<<v[i]<<" ";
  }
  cout<<endl;
  int ans=0;
  for(int i=0;i<min(k,(int)v.size());i++)
  {
    ans+=v[i];
   }
   cout<<ans<<endl;
 }
return 0;
}