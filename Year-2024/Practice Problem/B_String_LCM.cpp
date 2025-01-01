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
string s="";
ll lcm(int a,int b)
{
    return (a/__gcd(a,b))*b;
}
bool __LCM(string &a,string &b)
{    s.clear();
     int si_a = a.size();
     int si_b = b.size();

     int lc = lcm(si_a,si_b);
     string sa ="",sb="";
     for(int i=0;i<lc/si_a;i++)
     {
        sa+=a;
      }
      for(int i=0;i<lc/si_b;i++)
      {
         sb+=b;
       }
       s+=sa;
       return sa==sb;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    string a,b;
    cin>>a>>b;
    if(__LCM(a,b))
    {
        cout<<s<<endl;
    }
    else 
    {
         cout<<-1<<endl;
    }
 
 }
return 0;
}