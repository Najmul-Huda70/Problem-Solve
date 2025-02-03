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
   vi arr(n);
   int cnt2= 0;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     if(arr[i]==2) cnt2++;
    }
    if(cnt2==0)
    {
        cout<<1<<endl;
        continue;
    }
    if(cnt2%2==1)
    {
         cout<<-1<<endl;
        continue;
    }
    int k=-1;
    cnt2/=2;
    int cnt =0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==2)
      {
        cnt++;
        if(cnt==cnt2)
        {
            k=i+1;
            break;
        }
      }
    }
    cout<<k<<endl;
 
 }
return 0;
}