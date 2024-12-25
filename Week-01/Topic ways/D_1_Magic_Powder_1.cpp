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
 int n,k;
 cin>>n>>k;
 int a[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
  }
 int b[n];
 for(int i=0;i<n;i++)
 {
  cin>>b[i];
  }
  int mn=INT_MAX;
  for(int i=0;i<n;i++)
  {   
      mn=min(mn,b[i]/a[i]);
   }
   for(int i=0;i<n;i++)
   {
       b[i]=b[i]/mn;
    }
   cout<<mn<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<b[i]<<" ";
    }
return 0;
}