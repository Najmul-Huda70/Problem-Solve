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
   if(s[0]=='1' or s[n-1]=='1')
   {
        cout<<"YES"<<endl;
        
   }
   else if(s.find("11") != string::npos)
   {
     cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
   
 }
return 0;
}