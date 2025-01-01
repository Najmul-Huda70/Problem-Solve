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
bool comp(pair<int , int> &a , pair<int , int> &b){
  if(max(a.first , a.second) == max(b.first , b.second)) return min(a.first , a.second) < min(b.first , b.second);
  else return max(a.first , a.second) < max(b.first , b.second);
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
 vector<pair<int,int>> v(n);
 for(int i=0;i<n;i++)
 {
     int a; int b;
     cin>>a>>b;
     v[i]={a,b};
  }
  sort(v.begin(),v.end(),comp);
  for(auto val:v)
  {
     cout<<val.first<<" "<<val.second<<" ";
  }
  cout<<endl;
 }
return 0;
}