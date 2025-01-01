//s.i.snajmulhuda2002
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    ll   ans = (m-c) + (n-r) + 1LL*(n-r)*2*(m-1);
 cout<<ans<<endl;
 }
return 0;
}