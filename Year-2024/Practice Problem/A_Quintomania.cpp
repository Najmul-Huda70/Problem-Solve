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
    vi v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
     }
     bool flag=true;
     for(int i=0;i<n-1;i++)
     {
           int k = abs(v[i]-v[i+1]);
        if(k==5 || k==7) continue;
        else 
        {
            flag = false;
            break;
        } 
      }
    cout<<(flag ? "YES":"NO")<<endl;
 
 }
return 0;
}