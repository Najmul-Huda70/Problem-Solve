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
 ll T[N];
bool isRBS(string const &s)
{
    ll n = s.size();
    stack<char>st;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='(') st.push(s[i]);
       else 
       {
          if(st.empty()) return false;
          else{
             st.pop();
          }
       }
     }
     return st.empty();
}
ll count(string const &s)
{
    ll cnt = 0;
    ll n= s.size();
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
       {
          string temp = s;
          for(int k=i;k<=j;k++)
          {
             if(temp[k]=='(') temp[k]=')';
             else temp[k]='(';
           }
           //cout<<i<<"-"<<j<<": "<<temp<<endl;
           if(isRBS(temp)) cnt++;

        }
     }
     return cnt;
    
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   string s;
   cin>>s;
   cout<<count(s)<<endl;
 }
return 0;
}