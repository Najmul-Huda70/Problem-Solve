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
int spf[N];
int phi(int n)
{
     // phi(n) = n(1-1/p1)*(1-1/p2)*(1-1/p3).......*(1-1/pn)
     // p!=1 
     for(int p=2;p*p<=n;p++)
     {
         if(n%p==0)
         {
            
         }
      }
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int n;
 cin>>n;
 cout<<phi(n)<<endl;
return 0;
}