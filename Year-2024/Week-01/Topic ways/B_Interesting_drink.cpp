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
int cnt[N];
void count_prefix_sum_array(vi& v,int n,int mx)
{
    for(int i=0;i<n;i++)
    {
       cnt[v[i]]++;
     }
    for(int i=1;i<=mx;i++)
    {
       cnt[i]=cnt[i]+cnt[i-1];
     }
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 vi v(n);
 int mx=0;
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
  mx=max(mx,v[i]);
  }
  memset(cnt,0,sizeof(cnt));
  count_prefix_sum_array(v,n,mx);
  int q;
  cin>>q;
while(q--)
{
    ll coins;
    cin>>coins;
   if(coins>=mx)  cout<<n<<endl;
   else
   {
     cout<<cnt[coins]<<endl;
   }
}
return 0;
}