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
 int t;cin>>t;
 while(t--)
 {
  int n;
  cin>>n;
  vi a;//5 4 5  
  for(int i=0;i<n;i++)
  {  int x;
  cin>>x;
     a.push_back(x);
   }
  int total_score=0;
   int max_value_0=0;
    int cnt_0=0;
   for(int j=0;j<n;j+=2)
   {
    max_value_0=max(max_value_0,a[j]);
    cnt_0++;
    }
  int max_value_1=0;
    int cnt_1=0;
   for(int j=1;j<n;j+=2)
   {
    max_value_1=max(max_value_1,a[j]);
    cnt_1++;
    }
    
    
   total_score=max((max_value_0+cnt_0),(max_value_1+cnt_1));
   cout<<total_score<<endl;
 }
return 0;
}