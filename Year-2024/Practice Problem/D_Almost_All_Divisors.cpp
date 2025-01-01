//s.i.snajmulhuda2002
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
   vl v(n),temp;
   for(int i=0;i<n;i++)
   {
     cin>>v[i];
    }
   sort(v.begin(),v.end());
    // for(int i=0;i<n;i++)
    // {
    //    cout<<v[i]<<" ";
    //  }
    //  cout<<endl;
   // cout<<1LL*v[0]*v[n-1]<<endl;
   ll ans =1LL*v[0]*v[n-1];
   bool flag =true;
  //  int i=0;
  //  int j=n-1;
  //   while(i<n && j>=0)
  //    { 
  //     ll q =1LL*v[i]*v[j];
  //      if(ans!=q) 
  //      {
  //       flag=true;
  //       break;
  //      }
  //      i++;
  //      j--;
  //      }
    set<ll>st;
  for(int i=2;i*1LL*i<=ans;i++)
  {
    if(ans%i==0)
    {
      st.insert(i);
      if(i != ans/i) st.insert(ans/i);
    }
   }
  auto it=st.begin();
   if(st.size()==n)
   {
      for(int i=0;i<n;i++)
      {
         if(v[i] != *it)
    {
       flag =false;
       break;
    }
    it++;
       }
   
   }
   else flag =false;
    
   if(flag) cout<<ans<<endl;
   else cout<<-1<<endl;
 }
return 0;
}