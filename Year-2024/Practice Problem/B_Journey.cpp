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
   int n,a,b,c;
   cin>>n>>a>>b>>c;
   ll cnt=0,sum=0;
   ll s = a+b+c;
   int temp = n/s;
   cnt = temp*3;
   sum = temp*s;
   while(sum<n)
   {
     if(cnt%3==0) 
     {
        sum+=a;
        cnt++;
     }
     else if(cnt%3==1)
     {
        sum+=b;
        cnt++;
     }
     else if(cnt%3==2)
     {
        sum+=c;
        cnt++;
     }
   }
 cout<<cnt<<endl;
 }
return 0;
}