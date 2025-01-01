//s.i.snajmulhuda
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
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
   }
   sort(arr,arr+n);
   int ans = INT_MAX;
 for(int i=0;i<n;i++)
 {    int j=i,k=i;
     j--;k++;
     int cnt =0;
    while(j>=0)
    {
        if(arr[j+1]!=arr[j]+1) cnt++;
        j--;
    }
    while(k<n-1)
    {
       if(arr[k-1]!=arr[k]+1) cnt++;
       k++;
    }
    //cout<<cnt<<endl;
    ans = min(ans,cnt);
  }
  cout<<ans<<endl;
 }
return 0;
}