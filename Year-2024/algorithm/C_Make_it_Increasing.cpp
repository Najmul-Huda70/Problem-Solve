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
const int N=1e6+9;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 int a[n];
 for(int i=1;i<=n;i++)
 {
  cin>>a[i];
  }
  int b[n];
  for(int i=1;i<=n;i++)
 {
  b[i]=0;
  }
  b[1]=b[1]-a[1];
  for(int i=2;i<=n;i++)
  { int x=b[i]-a[i];
    if(b[i-1]<x) {b[i]=b[i]-a[i];}
   }
   for(int i=1;i<=n;i++)
   {
     cout<<b[i]<< ' ';
    }
    cout<<endl;
return 0;
}