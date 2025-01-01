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
ll cost_cnt(string const &rbs,int n)
{ 

    ll cost = 0;
     deque<pair<char, int>>dq;
     for(int i=0;i<n;i++)
     {
       if(rbs[i]=='(') dq.push_back({rbs[i],i});
       else
       {
          if(!dq.empty()) 
          {
            cost+= i-dq.back().second;
            dq.pop_back();
          }

       }
      }
      return cost;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
  string rbs;
  cin>>rbs;
  int cnt = 0;
  for(int i=0;i<n;i++)
  {
    if(rbs[i]=='(') cnt++;
    else if(rbs[i]==')') cnt--;
     else 
     {
         if(cnt>0)
     {
         rbs[i] =')'; 
         cnt--;

     }
     else
     { 
        rbs[i] = '(';
        cnt++;
     }
     }
   }
 // cout<<rbs<<endl;
// _(_)_(_) = (())(())
ll cost = cost_cnt(rbs,n);
cout<<cost<<endl;
 }
return 0;
}