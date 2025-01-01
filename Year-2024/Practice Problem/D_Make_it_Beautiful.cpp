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
   vi arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];

    }
    sort(arr.begin(),arr.end());
     bool ans=false;
     for(int i=1;i<n;i++)
     {
       if(arr[i]!=arr[i-1]) ans=true;
      }
      if(!ans) cout<<"NO"<<endl;
      else 
      {
       
         cout<<"YES"<<endl;
         cout<<arr[0]<<" ";
         for(int i=n-1;i>0;i--)
         {
           cout<<arr[i]<< " ";
          }
          cout<<endl;
      }
  
 }
return 0;
}