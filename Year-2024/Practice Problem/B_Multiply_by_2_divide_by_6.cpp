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
   int n;
   cin>>n;
   int k= n;
   int cnt=0;
   while(true)
   {
       
       while(n%6==0)
       {
         n/=6;
         cnt++;
       }
       if(n%6!=0 && (n*2)%3==0)
       {
        cnt++;
           n*=2;
       }
       else 
       {
         if(n!=1) cnt=0;
         break;
       }
       
   }
   if(k==1) cout<<0<<endl;
 else cout<<(cnt==0 ? -1:cnt)<<endl;
 }
return 0;
}