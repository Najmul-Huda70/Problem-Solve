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
 vi v;
 for(int i=1;i<n;i++)
 {
    if(__gcd(n,i)==1) v.push_back(i);
  }
 ll product=1;
for(int i=0;i<v.size();i++)
{
   product =(product * v[i]) %n;
 }
 if(product%n==1)
 {
     cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
      }
      cout<<endl;
 }
 else{
      cout<<v.size()-1<<endl;
  for(int i=0;i<v.size();i++)
     {
        if(v[i]!=product)
        cout<<v[i]<<" ";
      }
      cout<<endl;
 }
 
  
return 0;
}