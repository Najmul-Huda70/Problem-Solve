//Najmul Huda
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
   map<int,int> mp;
   set<int> st;
   for(int i=0;i<n;i++)
   {
     int val;
     cin>>val;
     st.insert(val);
     mp[val]++;
    }
   
   if(mp.size()>2) 
   {
      cout<<"No"<<endl;
   }
   else 
   {
      vi ar;
     for(auto [val,cnt]:mp)
     { 
         ar.push_back(cnt);
      }
      bool flag = true;
      for(int i=0;i<ar.size()-1;i++)
      {
          if(abs(ar[i]-ar[i+1])>=2) 
          {
            flag = false;
          }
       }

    cout<<(flag ? "Yes":"No")<<endl;
   }
 }
return 0;
}