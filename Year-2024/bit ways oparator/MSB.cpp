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
 int n;
 cin>>n;
 int kk = n;
 int sz = sizeof(n) * 8;
 int MSBpos = log2(n);  // 2^e-1  MSBpos = e-1 ;
 //cout<<MSBpos<<endl;
 //int k = 0;
//  while(n>1)
//  {
//     k++;
//      n>>=1;
//  }
//  int MSB =1<<k;
int MSB = 1<<MSBpos;
if(MSB==-1) cout<<"Not define"<<endl;
else cout<<MSB<<endl;

return 0;
}