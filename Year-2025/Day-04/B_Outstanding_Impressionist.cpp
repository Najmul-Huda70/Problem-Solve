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
    int n;
    cin>>n;
   map<int,pair<int,int>>mp;
   for(int i=1;i<=n;i++)
   { 
    int l,r;
    cin>>l>>r;
       mp[i] = {l,r};
    }
    int arr[2*n+1];
    memset(arr,0,sizeof(arr));
  for(auto [index,pr]  : mp)
  {
    //cout<<index<<" "<<pr.first<<" "<<pr.second<<endl;
    for(int i=pr.first;i<=pr.second;i++)
    {
       arr[i]++;
     }
  }
//   for(int i=1;i<=2*n;i++)
//   {
//     cout<<arr[i]<<" ";
//    }

   cout<<endl;
 }
return 0;
}