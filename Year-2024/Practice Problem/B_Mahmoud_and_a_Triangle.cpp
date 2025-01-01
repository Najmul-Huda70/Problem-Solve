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
 vi v(n);
 for(int i=0;i<n;i++)
 {
   cin>>v[i];
  }
  sort(v.begin(),v.end());
  bool flag = false;
  for(int i=0;i<n-2;i++)
  {
     if(v[i]+v[i+1] > v[i+2]) 
     {
        flag = true; 
        break;
     }
   }
   cout<<(flag  ? "YES":"NO")<<endl;
return 0;
}