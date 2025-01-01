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
    set<ll>st;
    vl v;
    ll n;
    cin>>n;
    for(int i=1;i*i<=100000;i++) 
    {
      if(n%i==0) 
      {
        st.insert(i);
        if(n/i!=i)
        {
          st.insert(n/i);
        }
      }
     }
     for(auto val:st)
     {
         v.push_back(val);
     }
 sort(v.rbegin(),v.rend());
ll tt= v.size();
ll cnt =0;
ll mx =0;
for(int i=1;i<tt;i++)
{   
     if(v[i-1]-v[i]==1)
     {
       cnt++;
     }
     else 
     {
       
        cnt=0;
     }
      mx =max(mx,cnt);
 }
 cout<<mx<<endl;
 }
 
return 0;
}