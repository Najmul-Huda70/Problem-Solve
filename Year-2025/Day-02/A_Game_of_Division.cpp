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
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
     }
     bool flag = false;
     int index=-1;
    for(int i=0;i<n;i++)
    {    int cnt = 0;
       for(int j=0;j<n;j++)
       {
          if(i!=j && abs(arr[i]-arr[j])%k == 0)
          {
            cnt=0;
            break;
          }
          else if(i!=j) cnt++;
        }
        if(cnt==n-1) 
        {
            flag = true;
            index = i;
            break;
        }
     }
     cout<<(flag ? "YES":"NO")<<endl;
       if(index!=-1) cout<<index+1<<endl;
 }
return 0;
}