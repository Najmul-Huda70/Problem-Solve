#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    int n,mx1=0,mx2=0;
    cin>>n;
    
    while(n--)
    {
        int w,h;
        cin>>w>>h;
        mx1=max(mx1,w);
        mx2=max(mx2,h);
    }
    int ans = 2*(mx1  + mx2 );
 cout<< ans <<endl;
 }
return 0;
}