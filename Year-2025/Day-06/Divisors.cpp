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
 int n;
 cin>>n;
 vector<int>v;
 for(int i=1;i*i<=n;i++)
 {
     if(n%i==0) 
     {
        v.push_back(i);
        if(n/i!=i) v.push_back(n/i);
     }

  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
     cout<<v[i]<<endl;
   }
return 0;
}