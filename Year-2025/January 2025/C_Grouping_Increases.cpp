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
 int T;cin>>T;
 while(T--)
 {
   int n;
   cin>>n;
   vi arr(n);
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
    }
    int s =n+2,t=n+2,total=0;
    for(int i=0;i<n;i++)
    {
        if(s>t) swap(s,t);
        if(arr[i]<=s) s=arr[i];
        else if(arr[i]<=t) t=arr[i];
        else {
           s= arr[i];
           total++;
        }
     }
    cout<<total<<endl;
 }
return 0;
}