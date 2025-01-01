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
  int x,k;
  cin>>x>>k;
  int n=x;
    vi v;
    if(x<k) 
    {
        n-=x;
        v.push_back(x);
    }
        for(int i=x;i>0;i--)
        {
            if(i%k!=0 && n-i>=0)
            { n-=i;
            //cout<<x<<endl;
             v.push_back(i);
            }
         }
         if(n && n%k != 0)
         {
              v.push_back(n);
         }
         cout<<v.size()<<endl;
         for(int i=0;i<v.size();i++)
         {
            cout<<v[i]<<" ";
          }
          cout<<endl;
  
 
 }
return 0;
}