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
 int n,d;
 cin>>n>>d;
 int arr[n];
 int mx=0;
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  mx=max(mx,arr[i]);
  }
  int dis=0;
  for(int i=0;i<n;i++)
  {
     if(arr[i]<mx)  dis+=mx-arr[i];
   }
  // cout<<dis<<endl;

  if(d<dis) cout<<-1<<endl;
  else
  {
    double equal = (double) (d-dis)/n;
    for(int i=0;i<n;i++)
    { 
        double ans =(double)(mx-arr[i]) + equal;
        cout<<fixed<<setprecision(6)<< ans <<endl;
     }

  }
return 0;
}