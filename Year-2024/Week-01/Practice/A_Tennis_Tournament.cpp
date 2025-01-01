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
 int n,b,t;
 cin>>n>>b>>t;
 int participants=n;
 int macth_cnt=0;
 while(n!=1)
 {     
      macth_cnt+=(n/2);
      n = n/2 + n%2;
 }
 //cout<<macth_cnt<<endl;
 int bottles_cnt = 2*macth_cnt*b + macth_cnt;
 int towels_cnt = participants*t;
 cout<<bottles_cnt<<" "<<towels_cnt<<endl;
return 0;
}