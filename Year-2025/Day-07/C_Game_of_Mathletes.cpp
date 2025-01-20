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
   int n,k;
   cin>>n>>k;
   vi arr(n);
   bool flag[n];
   memset(flag,false,n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
    }
    stable_sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++)
//     {
//      cout<<arr[i]<<" ";
//      }
//  cout<<endl;
int ans =0,i=0,j=n-1;
while(i<j)
{
   if(arr[i] + arr[j] == k)
   {
    ans++;
    i++;
    j--;
   }
   else if(arr[i]+arr[j]<k)
   {
     i++;
   }
   else{
    j--;
   }
  
 }
 cout<<ans<<endl;
 }
return 0;
}