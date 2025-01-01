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
    string s;
    cin>>s;
    stack<pair<char,int>>st;
    vb check(n,false);
    for(int i=0;i<n;i++)
    {
       if(s[i]=='(') st.push({s[i],i});
       else 
       {
         if(!st.empty())
         {
              check[st.top().second] =true;
           check[i] = true;
           st.pop();
         }
         
       }
     }
     if(st.empty()) 
     {
         cout<<0<<endl;
         continue;
     }
//      bool ok = false;
//      int idxfirst,idxlast;
//      for(int i=0;i<n;i++)
//      {        
//         if(!check[i]) 
//         {
//              if(!ok && s[i]==')')
//              {
//                  idxfirst=i;
//                  cout<<idxfirst<<endl;
//                  ok=true;
//              }
//              else if(s[i]=='(')
//              {
//                  idxlast=i;
//                  cout<<idxlast<<endl;
//                  break;
//              }
//         }
//       }
//  cout<<idxlast-idxfirst<<endl;
string ans = "";
for(int i=0;i<n;i++)
{
  if(!check[i])
  { 
    ans+=s[i];
  }
 }
 cout<<ans.size()/2<<endl;
 }
return 0;
}