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
 int t;
 cin>>t;
 for(int i = 1;i<=t;i++)
 {
   int a,b,c;
   cin>>a>>b>>c;
   if(a!=5 && a<7 && b!=5 && b<7 && c!=5 && c<7 )
   {
      int sum = a+b+c;
      if(sum>=7 && sum<=9) 
      {
         
        cout<<"Case "<<i<<":  perfectus"<<endl;
      }
      else 
      { 
        
        cout<<"Case "<<i<<": invalidum"<<endl;
      }
   }
   else 
   {
     
     cout<<"Case "<<i<<": invalidum"<<endl;
   }
 
 }
return 0;
}