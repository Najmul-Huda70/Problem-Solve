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
   int a,b;
   cin>>a>>b;
   if(a==b) cout<<0<<" "<<0<<endl;
   else if(a == (b+1) ||( a+1) = b) cout<<min(a,b)<<" "<<0<<endl;
 
 }
return 0;
}