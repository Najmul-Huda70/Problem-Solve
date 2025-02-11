//Najmul_Huda_
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
  string ss;
  cin>>ss;
  int n = ss.size();
 int cnt=0;
 for(int i=0;i<n-1;i++)
 {
    if(ss[i]==ss[i+1])
    {
        cnt++;
    }
  }
  
   cout<<(cnt>0 ? 1:n)<<endl;
 
 }
return 0;
}