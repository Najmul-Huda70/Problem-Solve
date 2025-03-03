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
 int t;cin>>t;
 while(t--)
 {
   int n;
   cin>>n;

ll sum = (1LL*n*(n+1))/2;
ll sqroot = sqrtl(sum);
double sqrot = sqrtl(sum);
    if(sqroot==sqrot)
    {
        cout<<-1<<endl;
        continue;
    }
ll s = 0LL;
vl last;
vl first;
for(int i=1;i<=n;i++)
{   
    s+=i;
  int X = sqrtl(s);
double Y = sqrtl(s);
  if(X==Y)
  {
    last.push_back(i);
    s-=i;
  }
  else first.push_back(i);
 }
for(int i=0;i<first.size();i++)
{
 cout<<first[i]<<" ";
 }
 vl a,b;
 for(int i=0;i<last.size();i++)
 {
    s+=last[i];
 int X = sqrtl(s);
double Y = sqrtl(s);
if(X==Y)
  {
    b.push_back(last[i]);
    s-=last[i];
  }
  else a.push_back(last[i]);
  }
  for(int i=0;i<a.size();i++)
  {
    cout<<a[i]<<" ";
   }
   for(int i=0;i<b.size();i++)
   {
    cout<<b[i]<<" ";
    }
 cout<<endl;
 }
return 0;
}