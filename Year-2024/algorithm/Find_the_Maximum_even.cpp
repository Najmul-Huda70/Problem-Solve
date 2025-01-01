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
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  }
  int mx=INT_MIN;

  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0) mx=max(mx,arr[i]);
   for(int j=1;j<n;j++)
   {
      if(i!=j && (arr[i]+arr[j])%2==0)
      {
        mx=max(mx,arr[i]+arr[j]);
      }
    }
   }
   cout<<mx<<endl;
return 0;
}