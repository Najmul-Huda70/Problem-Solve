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
 int n,k;
 cin>>n>>k;
 if(n<=k) cout<<"NO"<<endl;
 else{
    vi arr(n+1,true),p;
    
    arr[0]=arr[1]=false;
    for(int i=2;i*i<=n;i++)
    { 
      
     if(arr[i])
     {
       
        for(int j=i*i;j<=n;j+=i)
        {
         arr[j]=false;
         }
     }
     }
     for (int i = 2; i <= n; i++) {
        if (arr[i]) {
            p.push_back(i);
        }
    }
int kk=0;
     for(int i=0;i<p.size()-1;i++)
     {
        int s = p[i]+p[i+1]+1;
        if(s<=n && arr[s])
        {
           kk++;
        }
      }
      //cout<<kk<<" "<<k<<endl;
      cout<<(kk>=k ? "YES":"NO")<<endl;
 }
return 0;
}