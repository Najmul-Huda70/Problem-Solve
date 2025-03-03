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
   set<int> a;
   set<int>b;
   for(int i=0;i<n;i++)
   {
    int v;
    cin>>v;
    a.insert(v);
    }
     for(int i=0;i<n;i++)
   {
     int v;
    cin>>v;
    b.insert(v);
    }

    if(a.size()>2 or b.size()>2) cout<<"YES"<<endl;
    else if(a.size()==2 and b.size()==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
 }
return 0;
}