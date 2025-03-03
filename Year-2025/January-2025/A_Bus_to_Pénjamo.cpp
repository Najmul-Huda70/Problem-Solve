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
   int n,r;
   cin>>n>>r;
   vi arr(n);
   int ans = 0;
   int one=0,s=0;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     ans+=2*(arr[i]/2);
     s+=arr[i];
     if(arr[i]%2==1) one++;
    }
   
    s-=ans;//2
    //cout<<s<<endl;
    int fill = ans/2;//2
    int row =r-fill;//3-2
     if(s<=row) ans+=s;
     else 
     {
        s-=row;
        ans+=row-s;
     }   

  cout<<ans<<endl;
 }
return 0;
}