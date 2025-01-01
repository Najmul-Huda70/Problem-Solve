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
   vi v(n+1);
    for(int i=1;i<=n;i++)
    {
       cin>>v[i];
     }
   int g = v[1];
   int ans = INT_MAX;
    for(int i=1;i<=n;i++)
    {
        g=__gcd(g,v[i]);
     }
     if(g==1)
     {
        cout<<0<<endl;
     }
     else 
     {
          for(int i=1;i<=n;i++)
          {
              int temp = v[i];
              v[i] = __gcd(v[i],i);
              g = v[i];
              for(int i=1;i<=n;i++)
              {
                  g=__gcd(g,v[i]);
               }
               if(g==1)
               {
                   ans = min(ans,n-i+1);
               }
           v[i] =temp;
           }
           for(int i=1;i<=n;i++){
            int temp1=v[i];
            v[i]=__gcd(v[i],i);
            for(int j=i+1;j<=n;j++){
                int temp2=v[j];
                v[j]=__gcd(v[j],j);
                int g=v[0];
                for(int k=2;k<=n;k++){
                    g=__gcd(g,v[k]);
                }
                if(g==1){
                    ans=min(ans,(n-i+1)+(n-j+1));
                }
                v[j]=temp2;
            }
            v[i]=temp1;
        }
           cout<<ans<<endl;
     }
 }
return 0;
}