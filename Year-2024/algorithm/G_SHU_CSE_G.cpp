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
  int a,b,c;
  cin>>a>>b>>c;
  int mn=min(a,min(b,c));
  int ex;
  if(mn==a ) ex=(b+c)/2;
  else if(mn==b) ex=(a+c)/2;
  else ex=(a+b)/2;
   if(a%2==0 && b%2==0 && c%2==0) cout<<abs(mn-ex)<<endl;
   else if(a%2==1 && b%2==1 && c%2==1) cout<<abs(mn-ex)<<endl;
   else cout<<-1<<endl;
 }
return 0;
}