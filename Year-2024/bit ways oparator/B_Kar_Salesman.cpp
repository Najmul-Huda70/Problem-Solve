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
 int t;cin>>t;
 while(t--)
 {
   int n,x;
   cin>>n>>x;
   vl arr(n);
   ll mx = 0;
   ll sum = 0;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     mx = max(arr[i],mx);
     sum+=arr[i];
    }
    cout<<max(((sum+x-1)/x),mx)<<endl;
  // stable_sort(arr.rbegin(),arr.rend());
  // for(int i=0;i<n;i++)
  // {
  //   cout<<arr[i]<<" ";
  //  }
  //  cout<<endl;
  // int cnt = 0;
  // while(!arr.empty())
  // {
  //   int end = min(x,(int)arr.size());
  //   int value = arr[end-1];
  //    for(int i=0;i<end;i++)
  // {
  //    arr[i] -= arr[end -1];
  //  } 
  //  cnt += value ;
  //  arr.erase(arr.begin() + end -1);
  // }
  // cout<<max(cnt,mx)<<endl;
 }
return 0;
}