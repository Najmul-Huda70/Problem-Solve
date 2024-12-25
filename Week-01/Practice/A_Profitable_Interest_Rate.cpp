/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
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
   if(a>=b) cout<<a<<endl;
   else if(a+b<b) cout<<0<<endl;
   else
   { 
    /*
      t=5
      a=10  b = 5
      a = a - x , b = b - 2x 
    */

   while(1)
   {
     if(a==b) break;
     int temp = (b - a);
     if(temp%2==0) temp/=2;
     else temp= temp/2 + 1;
     a-=temp;
     b-=2*temp;
   }
   cout<<(a>=0 ? a : 0)<<endl;
   }
 
 }
return 0;
}