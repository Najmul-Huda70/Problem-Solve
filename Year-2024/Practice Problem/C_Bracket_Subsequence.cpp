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
 int n,k; cin>>n>>k;
  string s;
  cin>>s;
  if(n==k)
  {
     cout<<s<<endl;
     return 0;
  }
  deque<pair<char,int>> dq;
  vb flag(n,true);
  for(int i=0;i<n;i++)
  {
    if(s[i]=='(') dq.push_back({s[i],i});
    else 
    {
        if(k>0)
        {
            flag[dq.back().second] = false;
            flag[i] = false;
            k-=2;
            dq.pop_back();
        }
        else{
           break;
        }
    }
   }
   for(int i=0;i<n;i++)
   {
     if(!flag[i]) cout<<s[i];
    }
    cout<<endl;
return 0;
}