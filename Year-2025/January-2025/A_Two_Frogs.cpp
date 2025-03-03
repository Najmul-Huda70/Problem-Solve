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
bool call(int n,int a,int b)
{
  if(abs(a-b)%2==1) return false;
  else return true;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   int n,a,b;
   cin>>n>>a>>b;
   cout<<(call(n,a,b) ? "YES":"NO")<<endl;
 
 }
return 0;
}