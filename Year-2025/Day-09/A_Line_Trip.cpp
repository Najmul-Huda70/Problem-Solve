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
   int n,x;
   cin>>n>>x;
   vi arr(n);
   
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
    }
    int cnt=arr[0];
    for(int i=1;i<n;i++)
    {
       cnt= max(cnt,arr[i] - arr[i-1]);
     }
     cnt= max(cnt,2*(x-arr[n-1]));
     cout<<cnt<<endl;
 }
return 0;
}