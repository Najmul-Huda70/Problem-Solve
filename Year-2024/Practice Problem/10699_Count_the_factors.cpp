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
int spf[N];
void sieve()
{
for (int i = 2; i < N; i++) spf[i] = i;
  
  for (int i = 2; i < N; i++) {
    for (int j = i; j < N; j += i) {
      spf[j] = min(spf[j], i);
    }
  }
}
  
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 sieve();
 while(true)
 {
    int n;
    cin>>n;
    int ans=n;
    if(n==0) break;
    set<int>st;
    while(n>1)
    {
        st.insert(spf[n]);
         n/=spf[n];
    }
    cout<<ans<<" : "<<st.size()<<endl;
 }
return 0;
}