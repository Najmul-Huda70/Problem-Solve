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
   int n;
   cin>>n;
   vl v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    }
    int flag =true;
 for(int i=0;i<n-1;i++)
 {
  if(v[i]>v[i+1]) 
  {
    flag =false;
    break;
  }
  }
  if(!flag) cout<<0<<endl;
  else{
       ll different = LLONG_MAX;
       for(int i=0;i<n-1;i++)
       {
           different = min(different,v[i+1]-v[i]);
        }
    cout<<different/2 + 1<<endl;
  }

 }
return 0;
}