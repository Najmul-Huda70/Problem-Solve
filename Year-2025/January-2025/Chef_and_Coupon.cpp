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
 int t;cin>>t;
 while(t--)
 {
   int d,c;
   cin>>d>>c;

   int a1,a2,a3,b1,b2,b3;
   cin>>a1>>a2>>a3;
   cin>>b1>>b2>>b3;

   int sA = a1+a2+a3;
  
   int sB = b1+b2+b3;
 
   int d_TotalSum = sA + sB + 2*d;
   int c_TotalSum = sA + sB + c;
   if(sA<150) c_TotalSum+=d;
   if(sB<150) c_TotalSum+=d;
   if(d_TotalSum>c_TotalSum) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 }
return 0;
}