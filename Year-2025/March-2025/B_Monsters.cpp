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
const ll N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   ll n,k;
   cin>>n>>k;
   vl arr(n);
   for(ll i=0;i<n;i++)
   {
     cin>>arr[i];
     arr[i]%=k;
    }


// for(ll i=0;i<n;i++)
// {
//  cout<<arr[i]<<" ";
//  }  
//     cout<< endl;

for(ll i=0;i<n;i++)
{
 if(arr[i]<=0) cout<<(i+1)<<" ";
 }
//  for(ll i=0;i<n;i++)
//  {
//   cout<<arr[i]<<" ";
//   }
//   cout<<endl;
 vector<pair<ll,ll>>pr;
 for(ll i=0;i<n;i++)
 {
    if(arr[i]>0) pr.push_back({arr[i],i+1});
  }
 
 sort(pr.begin(), pr.end(), [](pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second; 
    return a.first > b.first; 
});
  for(auto [a,idx]:pr)
  {
    cout<<idx<<" ";
   }
 cout<< endl;
 }
return 0;
}