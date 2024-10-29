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
bool isPrime(ll n)
{
   if(n==1) return false;
   if(n==2) return true;
   else if(n%2==0) return false;
   for(int i=3;i*i<=n;i+=2)
   {
      if(n%i==0) return false;
    }
   return true;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   ll n;
   cin>>n;
   cout<<(isPrime(n) ? "yes":"no")<<endl;
 
 }
return 0;
}