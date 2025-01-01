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
//   for(int i=0;i<n;i++)
//   {
//    cout<<v[i]<<" ";
//    }
//    cout<<endl;
  ll sum =v[0];
  ll prev=v[0];
 for(int i=1;i<n;i++)
 {
     if (v[i] >= prev) 
     {
        prev=max(0LL,prev-1);
     }
     else
     {
        prev=v[i];
     }
    sum+=prev;
  }
   cout<<sum<<endl;
return 0;
}