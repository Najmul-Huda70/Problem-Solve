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
   int n,k,x;
   cin>>n>>k>>x;
   vi v;
        int pt=n;
        for(int i=1;i<=k;i++)
        {
          if(i!=x)
          {
            int lop = pt/i;
            {while(lop>pt%i && lop--)
            {
              v.push_back(i);
              pt-=i;
            }}
          }
         }
         if(pt==0)
         {
          cout<<"YES\n"<<v.size()<<endl;
            for(int i=0;i<v.size();i++)
            {
             cout<<v[i]<<" ";
             }
             cout<<endl;
         }
         else 
         {
          cout<<"NO"<<endl;
         }
 }
return 0;
}