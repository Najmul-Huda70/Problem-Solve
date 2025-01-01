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
bool isRegular(string &s)
{
     deque<char>dq;
     int n=s.size();
     if(n%2==1) return false; 
     int cnt =0;
     if(s[0]==')' || s[n-1]=='(') return false;
     return count(s.begin(),s.end(),'?')%2==0; 
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   string s;
   cin>>s;
   cout<<(isRegular(s) ? "YES":"NO")<<endl;
 
 }
return 0;
}