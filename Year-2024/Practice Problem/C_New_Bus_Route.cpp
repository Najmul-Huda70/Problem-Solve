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
 int n;
 cin>>n;
  vl v(n);
 for(int i=0;i<n;i++)
 {
   cin>>v[i];
  }
  sort(v.rbegin(),v.rend());
  ll dis= LLONG_MAX;
  int cnt;
  for(int i=0;i<n-1;i++)
  {
     if(v[i]-v[i+1]<dis)
     {
        dis=v[i]-v[i+1];
       cnt=1;
     }
     else if(v[i]-v[i+1] == dis)
     {
         cnt++;
     }
   }
  cout<<dis<<" "<<cnt<<endl;
return 0;
}