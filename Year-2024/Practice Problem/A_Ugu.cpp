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
bool sorted(string &s,int n)
{
        for(int i=0;i<n-1;i++)
        {
            if(s[i]>s[i+1]) return false;
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
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt=0;
  
  if(!sorted(s,n))
  {
     reverse(s.begin(),s.end());
    for(int i=0;i<n-1;i++)
    {  
       if(s[i]=='0' && s[i+1]=='1') cnt++;
       if(s[i]=='1' && s[i+1]=='0') cnt++;
     }
  }
  if(cnt>0 && s[n-1]=='0') cnt--;
  //cout<<s<<endl;
cout<<cnt<<endl; 
 }
return 0;
}