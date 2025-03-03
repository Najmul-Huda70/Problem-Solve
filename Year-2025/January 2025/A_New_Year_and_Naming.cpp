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
 int n,m;
 cin>>n>>m;
 vs s(n),t(m);
 for(int i=0;i<n;i++)
 {
   cin>>s[i];
  }
  for(int i=0;i<m;i++)
  {
   cin>>t[i];
   }
 int q;
 cin>>q;
 while(q--)
{
    int year;
    cin>>year;
    int x=year-1,y=year-1;
    x%=n;
    y%=m;
   cout<<s[x]<<t[y]<<endl; 
}
return 0;
}