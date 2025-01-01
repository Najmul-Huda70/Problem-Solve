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
   int n;
   cin>>n;
   
   while(n>0)
   {   
    string s = to_string(n);
     size_t pos = s.find("33");
     if(pos !=string::npos) 
     {
        s.erase(pos,2);
        n = (s.empty() ? 0:stoi(s));
     }
     else if(n>=33) n-=33;
     else break;
   }
 cout<<(n==0 ? "YES":"NO")<<endl;
 }
return 0;
}