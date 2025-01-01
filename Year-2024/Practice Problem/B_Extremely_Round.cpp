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
   int n;
   cin>>n;
   if(n<10)
   {
    cout<<n<<endl;
   }
   else{
         string s=to_string(n);
         int si =s.size();
         int Zero = si - 1;
         if(Zero==1) cout<<9 + (int)(s[0]-'0')<<endl;
         if(Zero==2) cout<<9 + 9 + (int)(s[0]-'0')<<endl;
         if(Zero==3) cout<<9 +  9 +   9 + (int)(s[0]-'0')<<endl;
         if(Zero==4) cout<<9+ 9 +  9 +   9 + (int)(s[0]-'0')<<endl;
         if(Zero==5) cout<<9+  9 +   9 +  9 +   9 + (int)(s[0]-'0')<<endl;
   }
 
 }
return 0;
}